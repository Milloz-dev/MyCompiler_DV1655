#include <iostream>
#include <cstdio>
#include "parser.tab.hh"
#include "Node.h"
#include <memory>


extern Node *root;
extern FILE *yyin;
extern int yylineno;
extern int lexical_errors;
extern yy::parser::symbol_type yylex();

enum errCodes {
    SUCCESS = 0,
    LEXICAL_ERROR = 1,
    SYNTAX_ERROR = 2,
    AST_ERROR = 3,
    SEMANTIC_ERROR = 4,
    SEGMENTATION_FAULT = 139
};

int errCode = SUCCESS;

// Handling Syntax Errors
void yy::parser::error(const std::string &err) {
    if (!lexical_errors) {
        std::cerr << "Syntax errors found!\n"
                  << "\t@Error at line " << yylineno << ": " << err << "\n"
                  << "End of syntax errors!" << std::endl;
        errCode = SYNTAX_ERROR;
    }
}

int main(int argc, char **argv) {
    // Reads from file if a filename is provided as an argument; otherwise, reads from stdin.
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror(argv[1]);
            return LEXICAL_ERROR;
        }
    }

    if (USE_LEX_ONLY) {
        yylex();
    } else {
        yy::parser parser;
        bool parseSuccess = (parser.parse() == 0);

        if (lexical_errors) {
            errCode = LEXICAL_ERROR;
        }

        if (parseSuccess && !lexical_errors) {
            std::cout << "\nThe compiler successfully generated a syntax tree for the given input!\n";

            std::cout << "\nPrint Tree:\n";
            try {
                root->print_tree();
                root->generate_tree();
            } catch (...) {
                errCode = AST_ERROR;
                std::cerr << "Error: Failed to generate AST.\n";
            }
        }
    }

    // Close file if it was opened
    if (yyin && argc > 1) {
        fclose(yyin);
    }

    return errCode;
}
