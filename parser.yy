%{
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Node.h"
#include "parser.tab.hh"

// Define lexer instance
extern int yylineno;
extern char *yytext;
void yyerror(const char *s);

// Declare `yylex()` correctly
extern int yylex();

Node* root = nullptr;  // Global AST root
%}

%expect 0
%define parse.trace

%union {
    std::string* sval;
    int ival;
    Node* node;
}

%destructor { delete $$; } <sval>

%token CLASS PUBLIC STATIC VOID MAIN INT BOOLEAN RETURN IF ELSE WHILE PRINTLN
%token THIS NEW TRUE FALSE
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMICOLON COMMA DOT ASSIGN
%token AND OR EQUAL LT GT PLUS MINUS MULT NOT

%type <node> Goal MainClass ClassDeclarations ClassDeclaration VarDeclarations MethodDeclarations StatementList Statement Expression MethodDeclaration ParamList VarDeclaration Type
%token <sval> IDENTIFIER STRING STRING_LITERAL
%token <ival> NUMBER
%token ERROR

%left PLUS              

%start Goal

%%

Goal:
    MainClass ClassDeclarations
    {
        std::cout << "[DEBUG] Parsing Goal at line " << yylineno << std::endl;
        root = new Node("PROGRAM", "PROGRAM", yylineno);
        root->add_child($1);
        if ($2) root->add_child($2);
    };

MainClass: 
    CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN LPAREN STRING LBRACKET RBRACKET RPAREN LBRACE StatementList RBRACE
    {
        std::cout << "[DEBUG] Parsing MainClass: " << *$2 << " at line " << yylineno << std::endl;
        $$ = new Node("MainClass", *$2, yylineno);
        $$->add_child(new Node("MainArgType", *$9, yylineno));
        $$->add_child($14);
    };

ClassDeclarations:
    ClassDeclarations ClassDeclaration
    {
        std::cout << "[DEBUG] Parsing ClassDeclarations at line " << yylineno << std::endl;
        $$ = $1;
        $$->add_child($2);
    }
    | %empty
    {
        $$ = new Node("ClassDeclarations", "Empty", yylineno);
    };

ClassDeclaration:
    CLASS IDENTIFIER LBRACE VarDeclarations MethodDeclarations RBRACE
    {
        std::cout << "[DEBUG] Parsing ClassDeclaration: " << *$2 << " at line " << yylineno << std::endl;
        $$ = new Node("CLASS_DECL", *$2, yylineno);
        $$->add_child($4);
        $$->add_child($5);
    };

VarDeclarations:
    VarDeclarations VarDeclaration { 
        std::cout << "[DEBUG] Parsing VarDeclarations at line " << yylineno << std::endl;
        $$ = $1; $$->add_child($2);
    }
    | %empty { 
        std::cout << "[DEBUG] Empty VarDeclarations at line " << yylineno << std::endl;
        $$ = new Node("VarDeclarations", "Empty", yylineno);
    }
    ;

VarDeclaration:
    Type IDENTIFIER SEMICOLON
    {
        std::cout << "[DEBUG] Parsing VarDeclaration: " << *$2 << " at line " << yylineno << std::endl;
        $$ = new Node("VAR_DECL", *$2, yylineno);
        $$->add_child($1);
    };

MethodDeclarations:
    MethodDeclarations MethodDeclaration { 
        std::cout << "[DEBUG] Parsing MethodDeclarations at line " << yylineno << std::endl;
        $$ = $1; $$->add_child($2);
    }
    | %empty { 
        std::cout << "[DEBUG] Empty MethodDeclarations at line " << yylineno << std::endl;
        $$ = new Node("MethodDeclarations", "Empty", yylineno);
    }
    ;

MethodDeclaration:
    PUBLIC Type IDENTIFIER LPAREN ParamList RPAREN LBRACE VarDeclarations StatementList RETURN Expression SEMICOLON RBRACE {
        std::cout << "[DEBUG] Parsing MethodDeclaration at line " << yylineno << std::endl;
        $$ = new Node("MethodDeclaration", *$3, yylineno);
        $$->add_child($2);        // Method return type
        $$->add_child($5);        // Parameters
        $$->add_child($8);        // Local variable declarations
        $$->add_child($9);        // Statements
        $$->add_child($11);       // Return expression
        delete $3;
    }
    ;

Statement:
    PRINTLN LPAREN Expression RPAREN SEMICOLON
    {
        std::cout << "[DEBUG] Parsing PRINTLN at line " << yylineno << std::endl;
        $$ = new Node("PRINTLN", "println", yylineno);
        $$->add_child($3);
    };

StatementList:
    Statement StatementList { 
        std::cout << "[DEBUG] Parsing StatementList at line " << yylineno << std::endl;
        $$ = new Node("StatementList", "StatementList", yylineno);
        $$->add_child($1); $$->add_child($2);
    }
    | %empty { 
        std::cout << "[DEBUG] Empty StatementList at line " << yylineno << std::endl;
        $$ = new Node("StatementList", "Empty", yylineno);
    }
    ;

Type:
    INT { 
        std::cout << "[DEBUG] Parsing Type (int) at line " << yylineno << std::endl;
        $$ = new Node("INT_TYPE", "int", yylineno);
    }
    | BOOLEAN { 
        std::cout << "[DEBUG] Parsing Type (boolean) at line " << yylineno << std::endl;
        $$ = new Node("BOOLEAN_TYPE", "boolean", yylineno);
    }
    | IDENTIFIER { 
        std::cout << "[DEBUG] Parsing Type (class) at line " << yylineno << std::endl;
        $$ = new Node("IDENTIFIER", *$1, yylineno);
        delete $1;
    }
    ;

ParamList:
    Type IDENTIFIER { 
        std::cout << "[DEBUG] Parsing ParamList (single param) at line " << yylineno << std::endl;
        (yyval.node) = new Node("ParamList", "", yylineno);
        $$->add_child(new Node("Param", *$2, yylineno));
        delete $2;
    }
    | ParamList COMMA Type IDENTIFIER { 
        std::cout << "[DEBUG] Parsing ParamList (multiple params) at line " << yylineno << std::endl;
        $$ = $1;
        $$->add_child(new Node("Param", *$4, yylineno));
        delete $4;
    }
    | %empty {
        std::cout << "[DEBUG] Empty ParamList at line " << yylineno << std::endl;
        $$ = new Node("ParamList", "Empty", yylineno);
    }
    ;

Expression:
    Expression PLUS Expression
    {
        std::cout << "[DEBUG] Processing Addition (+) at line " << yylineno << std::endl;
        $$ = new Node("PLUS", "+", yylineno);
        $$->add_child($1);
        $$->add_child($3);
    }
    | NUMBER
    {
        std::cout << "[DEBUG] Integer literal: " << $1 << " at line " << yylineno << std::endl;
        $$ = new Node("NUMBER", to_string($1), yylineno);
    }
    | IDENTIFIER
    {
        std::cout << "[DEBUG] Identifier: " << *$1 << " at line " << yylineno << std::endl;
        $$ = new Node("IDENTIFIER", *$1, yylineno);
    };

%%

void yyerror(const char *s) {
    std::cerr << "ERROR: " << s << " at line " << yylineno << ", token: " << yytext << std::endl;
}

int main() {
    yydebug = 1;  // Enable debug mode
    
    if (yyparse() == 0) {
        std::cout << "Parsing completed successfully!\n";
        if (root) {
            root->print_tree();
            delete root;
        }
    } else {
        std::cout << "Parsing failed.\n";
    }
    return 0;
}
