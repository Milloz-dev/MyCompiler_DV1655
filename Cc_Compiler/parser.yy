%{
#include <iostream>
#include "node.h"
using namespace std;

extern int yylineno;
extern int yylex();
extern void yyerror(const char *s);

Node *root; // Root of AST
%}

%union {
    int ival;         // For integer numbers
    char* sval;       // For string literals and identifiers
    struct Node* node;       // For AST nodes
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

%start Goal

%%

Goal:
    MainClass ClassDeclarations {
        root = new Node("PROGRAM", "PROGRAM", yylineno);
        root->children.push_back($1);
        if ($2) root->children.push_back($2);
    };

MainClass:
    CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN LPAREN STRING LBRACKET RBRACKET RPAREN LBRACE StatementList RBRACE {
        $$ = new Node("MainClass", $2, yylineno);
        $$->children.push_back(new Node("MainArgType", "String[]", yylineno));
        $$->children.push_back($14);
    };

ClassDeclarations:
    ClassDeclarations ClassDeclaration {
        $$ = $1;
        $$->children.push_back($2);
    }
    | %empty {
        $$ = new Node("ClassDeclarations", "Empty", yylineno);
    };

ClassDeclaration:
    CLASS IDENTIFIER LBRACE VarDeclarations MethodDeclarations RBRACE {
        $$ = new Node("CLASS_DECL", $2, yylineno);
        $$->children.push_back($4);
        $$->children.push_back($5);
    };

VarDeclarations:
    VarDeclarations VarDeclaration {
        $$ = $1;
        $$->children.push_back($2);
    }
    | %empty {
        $$ = new Node("VarDeclarations", "Empty", yylineno);
    };

VarDeclaration:
    Type IDENTIFIER SEMICOLON {
        $$ = new Node("VAR_DECL", $2, yylineno);
        $$->children.push_back($1);
    };

MethodDeclarations:
    MethodDeclarations MethodDeclaration {
        $$ = $1;
        $$->children.push_back($2);
    }
    | %empty {
        $$ = new Node("MethodDeclarations", "Empty", yylineno);
    };

MethodDeclaration:
    PUBLIC Type IDENTIFIER LPAREN ParamList RPAREN LBRACE VarDeclarations StatementList RETURN Expression SEMICOLON RBRACE {
        $$ = new Node("MethodDeclaration", $3, yylineno);
        $$->children.push_back($2);
        $$->children.push_back($5);
        $$->children.push_back($8);
        $$->children.push_back($9);
        $$->children.push_back($11);
    };

Statement:
    PRINTLN LPAREN Expression RPAREN SEMICOLON {
        $$ = new Node("PRINTLN", "println", yylineno);
        $$->children.push_back($3);
    };

StatementList:
    Statement StatementList {
        $$ = new Node("StatementList", "StatementList", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($2);
    }
    | %empty {
        $$ = new Node("StatementList", "Empty", yylineno);
    };

Type:
    INT {
        $$ = new Node("INT_TYPE", "int", yylineno);
    }
    | BOOLEAN {
        $$ = new Node("BOOLEAN_TYPE", "boolean", yylineno);
    }
    | IDENTIFIER {
        $$ = new Node("IDENTIFIER", $1, yylineno);
    };

ParamList:
    Type IDENTIFIER {
        $$ = new Node("ParamList", "", yylineno);
        $$->children.push_back(new Node("Param", $2, yylineno));
    }
    | ParamList COMMA Type IDENTIFIER {
        $$ = $1;
        $$->children.push_back(new Node("Param", $4, yylineno));
    }
    | %empty {
        $$ = new Node("ParamList", "Empty", yylineno);
    };

Expression:
    Expression PLUS Expression {
        $$ = new Node("PLUS", "+", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | Expression MINUS Expression {
        $$ = new Node("MINUS", "-", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | Expression MULT Expression {
        $$ = new Node("MULT", "*", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | Expression AND Expression {
        $$ = new Node("AND", "&&", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | Expression OR Expression {
        $$ = new Node("OR", "||", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | Expression EQUAL Expression {
        $$ = new Node("EQUAL", "==", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | Expression LT Expression {
        $$ = new Node("LT", "<", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | Expression GT Expression {
        $$ = new Node("GT", ">", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
    | IDENTIFIER ASSIGN Expression {
        $$ = new Node("ASSIGN", "=", yylineno);
        $$->children.push_back(new Node("IDENTIFIER", $1, yylineno));
        $$->children.push_back($3);
    }
    | NOT Expression {
        $$ = new Node("NOT", "!", yylineno);
        $$->children.push_back($2);
    }
    | IDENTIFIER LPAREN ParamList RPAREN {
        $$ = new Node("METHOD_CALL", $1, yylineno);
        $$->children.push_back($3);
    }
    | IDENTIFIER LBRACKET Expression RBRACKET {
        $$ = new Node("ARRAY_ACCESS", $1, yylineno);
        $$->children.push_back($3);
    }
    | LPAREN Expression RPAREN {
        $$ = $2; // Just return the inner expression
    }
    | NUMBER {
        $$ = new Node("NUMBER", to_string($1), yylineno);
    }
    | TRUE {
        $$ = new Node("BOOLEAN", "true", yylineno);
    }
    | FALSE {
        $$ = new Node("BOOLEAN", "false", yylineno);
    }
    | IDENTIFIER {
        $$ = new Node("IDENTIFIER", $1, yylineno);
    };

%%

void yyerror(const char *s) {
    std::cerr << "[ERROR] " << s << " at line " << yylineno << std::endl;
}
