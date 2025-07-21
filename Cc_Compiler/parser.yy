%code requires {
#include <iostream>
#include "Node.h"
#include <memory>
using namespace std;
}

%code {
    extern "C" int yylex();
    extern int yylineno;
    // yyerror is defined here to avoid conflicts in the grammar section.
    void yyerror(const char *s) {
        std::cerr << "Syntax error at line " << yylineno << ": " << s << std::endl;
    }
    std::unique_ptr<Node> root;
}

//%define api.value.type {std::variant<int, float, char*, std::unique_ptr<Node>>}

%union {
    int ival;                // For integer numbers
    std::string* sval;       // For string literals and identifiers
    std::unique_ptr<Node> node;
}

%token CLASS PUBLIC STATIC VOID MAIN INT BOOLEAN RETURN IF ELSE WHILE PRINTLN
%token THIS NEW TRUE FALSE
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMICOLON COMMA DOT ASSIGN
%token AND OR EQUAL LT GT PLUS MINUS MULT NOT

%type <node> Goal MainClass ClassDeclarations ClassDeclaration VarDeclarations MethodDeclarations 
%type <node> StatementList Statement Expression MethodDeclaration ParamList VarDeclaration Type
%token <sval> IDENTIFIER STRING STRING_LITERAL
%token <ival> NUMBER
%token ERROR

%precedence ASSIGN
%left OR
%left AND
%left EQUAL
%left LT GT
%left PLUS MINUS
%left MULT
%precedence NOT

// Define a new precedence symbol to resolve the dangling else conflict.
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%start Goal

%%

Goal:
    MainClass ClassDeclarations {
        root = std::make_unique<Node>("PROGRAM", "PROGRAM", yylineno);
        root->children.push_back(std::move($1));
        if ($2) root->children.push_back(std::move($2));
    };

MainClass:
    CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN LPAREN STRING LBRACKET RBRACKET RPAREN LBRACE StatementList RBRACE {
        $$ = std::make_unique<Node>("MainClass", *$2, yylineno);
        delete $2;
        $$->children.push_back(std::make_unique<Node>("MainArgType", "String[]", yylineno));
        $$->children.push_back(std::move($14));
    };

ClassDeclarations:
    ClassDeclarations ClassDeclaration {
        $$ = std::move($1);
        $$->children.push_back(std::move($2));
    }
    | %empty {
        $$ = std::make_unique<Node>("ClassDeclarations", "Empty", yylineno);
    };

ClassDeclaration:
    CLASS IDENTIFIER LBRACE VarDeclarations MethodDeclarations RBRACE {
        $$ = std::make_unique<Node>("CLASS_DECL", *$2, yylineno);
        delete $2;
        $$->children.push_back(std::move($4));
        $$->children.push_back(std::move($5));
    };

VarDeclarations:
    VarDeclarations VarDeclaration {
        $$ = std::move($1);
        $$->children.push_back(std::move($2));
    }
    | %empty {
        $$ = std::make_unique<Node>("VarDeclarations", "Empty", yylineno);
    };

VarDeclaration:
    Type IDENTIFIER SEMICOLON {
        $$ = std::make_unique<Node>("VAR_DECL", *$2, yylineno);
        delete $2;
        $$->children.push_back(std::move($1));
    };

MethodDeclarations:
    MethodDeclarations MethodDeclaration {
        $$ = std::move($1);
        $$->children.push_back(std::move($2));
    }
    | %empty {
        $$ = std::make_unique<Node>("MethodDeclarations", "Empty", yylineno);
    };

MethodDeclaration:
    PUBLIC Type IDENTIFIER LPAREN ParamList RPAREN LBRACE VarDeclarations StatementList RETURN Expression SEMICOLON RBRACE {
        $$ = std::make_unique<Node>("MethodDeclaration", *$3, yylineno);
        delete $3;
        $$->children.push_back(std::move($2));
        $$->children.push_back(std::move($5));
        $$->children.push_back(std::move($8));
        $$->children.push_back(std::move($9));
        $$->children.push_back(std::move($11));
    };

Statement:
    PRINTLN LPAREN Expression RPAREN SEMICOLON {
        $$ = std::make_unique<Node>("PRINTLN", "println", yylineno);
        $$->children.push_back(std::move($3));
    }
    // The if statement without else is given lower precedence using %prec LOWER_THAN_ELSE.
    | IF LPAREN Expression RPAREN Statement %prec LOWER_THAN_ELSE {
        $$ = std::make_unique<Node>("IF", "if", yylineno);
        $$->children.push_back(std::move($3)); // Condition
        $$->children.push_back(std::move($5)); // True branch
    }
    | IF LPAREN Expression RPAREN Statement ELSE Statement {
        $$ = std::make_unique<Node>("IF_ELSE", "if-else", yylineno);
        $$->children.push_back(std::move($3)); // Condition
        $$->children.push_back(std::move($5)); // True branch
        $$->children.push_back(std::move($7)); // False branch
    }
    | WHILE LPAREN Expression RPAREN Statement {
        $$ = std::make_unique<Node>("WHILE", "while", yylineno);
        $$->children.push_back(std::move($3)); // Condition
        $$->children.push_back(std::move($5)); // Loop body
    }
    | LBRACE StatementList RBRACE {
        $$ = std::make_unique<Node>("BLOCK", "{}", yylineno);
        $$->children.push_back(std::move($2));
    };

StatementList:
    Statement StatementList {
        $$ = std::make_unique<Node>("StatementList", "StatementList", yylineno);
        $$->children.push_back(std::move($1));
        $$->children.push_back(std::move($2));
    }
    | %empty {
        $$ = std::make_unique<Node>("StatementList", "Empty", yylineno);
    };

Type:
    INT {
        $$ = std::make_unique<Node>("INT_TYPE", "int", yylineno);
    }
    | BOOLEAN {
        $$ = std::make_unique<Node>("BOOLEAN_TYPE", "boolean", yylineno);
    }
    | IDENTIFIER {
        $$ = std::make_unique<Node>("IDENTIFIER", *$1, yylineno);
        delete $1;
    };

ParamList:
    Type IDENTIFIER {
        $$ = std::make_unique<Node>("ParamList", "", yylineno);
        $$->children.push_back(std::make_unique<Node>("Param", *$2, yylineno));
        delete $2;
    }
    | ParamList COMMA Type IDENTIFIER {
        $$ = std::move($1);
        $$->children.push_back(std::make_unique<Node>("Param", *$4, yylineno));
        delete $4;
    }
    | %empty {
        $$ = std::make_unique<Node>("ParamList", "Empty", yylineno);
    };

Expression:
    Expression PLUS Expression {
        $$ = std::make_unique<Node>("PLUS", "+", yylineno);
        $$->children.push_back(std::move($1));
        $$->children.push_back(std::move($3));
    }
    | Expression MINUS Expression {
        $$ = std::make_unique<Node>("MINUS", "-", yylineno);
        $$->children.push_back(std::move($1));
        $$->children.push_back(std::move($3));
    }
    | Expression MULT Expression {
        $$ = std::make_unique<Node>("MULT", "*", yylineno);
        $$->children.push_back(std::move($1));
        $$->children.push_back(std::move($3));
    }
    | Expression AND Expression {
        $$ = std::make_unique<Node>("AND", "&&", yylineno);
        $$->children.push_back(std::move($1));
        $$->children.push_back(std::move($3));
    }
    | Expression OR Expression {
        $$ = std::make_unique<Node>("OR", "||", yylineno);
        $$->children.push_back(std::move($1));
        $$->children.push_back(std::move($3));
    }
    | Expression EQUAL Expression {
        $$ = std::make_unique<Node>("EQUAL", "==", yylineno);
        $$->children.push_back(std::move($1));
        $$->children.push_back(std::move($3));
    }
    | Expression LT Expression {
        $$ = std::make_unique<Node>("LT", "<", yylineno);
        $$->children.push_back(std::move($1));
        $$->children.push_back(std::move($3));
    }
    | Expression GT Expression {
        $$ = std::make_unique<Node>("GT", ">", yylineno);
        $$->children.push_back(std::move($1));
        $$->children.push_back(std::move($3));
    }
    | IDENTIFIER ASSIGN Expression {
        $$ = std::make_unique<Node>("ASSIGN", "=", yylineno);
        $$->children.push_back(std::make_unique<Node>("IDENTIFIER", *$1, yylineno));
        delete $1;
        $$->children.push_back(std::move($3));
    }
    | NOT Expression {
        $$ = std::make_unique<Node>("NOT", "!", yylineno);
        $$->children.push_back(std::move($2));
    }
    | IDENTIFIER LPAREN ParamList RPAREN {
        $$ = std::make_unique<Node>("METHOD_CALL", *$1, yylineno);
        delete $1;
        $$->children.push_back(std::move($3));
    }
    | IDENTIFIER LBRACKET Expression RBRACKET {
        $$ = std::make_unique<Node>("ARRAY_ACCESS", *$1, yylineno);
        delete $1;
        $$->children.push_back(std::move($3));
    }
    | LPAREN Expression RPAREN {
        $$ = std::move($2); // Return inner expression
    }
    | NUMBER {
        $$ = std::make_unique<Node>("NUMBER", std::to_string($1), yylineno);
    }
    | TRUE {
        $$ = std::make_unique<Node>("BOOLEAN", "true", yylineno);
    }
    | FALSE {
        $$ = std::make_unique<Node>("BOOLEAN", "false", yylineno);
    }
    | IDENTIFIER {
        $$ = std::make_unique<Node>("IDENTIFIER", *$1, yylineno);
        delete $1;
    };

%%

