/* Skeleton and definitions for generating a LALR(1) parser in C++ */
%skeleton "lalr1.cc"
%defines
%define parse.error verbose
%define api.value.type variant
%define api.token.constructor
%start root

/* Required code included before the parser definition begins */
%code requires {
  #include <string>
  #include "Node.h"
  #define USE_LEX_ONLY false // change this macro to true if you want to isolate the lexer from the parser.
}

/* Code included in the parser implementation file */
%code {
  #define YY_DECL yy::parser::symbol_type yylex()
  YY_DECL;

  Node* root;
  extern int yylineno;
}

/* Token definitions for the grammar */

/* Arithmetic tokens from the getting started example */
%token PLUSOP MINUSOP MULTOP LP RP

/* Tokens that carry values */
%token SYSTEMDOTOUTDOTPRINTLN
%token INT         // for keyword "int"
%token <int> INTEGER  // for numeric literals like 42
%token <std::string*> IDENTIFIER


/* End-of-file */
%token END 0 "end of file"

/* MiniJava keywords and symbols */
%token CLASS PUBLIC STATIC VOID MAIN STRING BOOLEAN IF ELSE WHILE RETURN THIS NEW TRUE FALSE LENGTH
%token AND OR EQ LT GT PLUS MINUS TIMES NOT ASSIGN
%token LBRACK RBRACK LPAREN RPAREN LBRACE RBRACE SEMICOLON COMMA DOT

/* Precedence and associativity */
%left EQ LT GT
%left PLUSOP MINUSOP
%left MULTOP

/* Types for non-terminals */
%type <Node*> root expression factor postfix
%type <Node*> Goal MainClass Statement StatementList
%type <Node*> ClassDeclarations ClassDeclaration
%type <Node*> VarDeclarations VarDeclaration
%type <Node*> MethodDeclarations MethodDeclaration
%type <Node*> Type
%type <Node*> FormalParameters FormalParameterList FormalParameter
%type <Node*> BlockStatements BlockStatement
%type <Node*> ExpressionList


/* Grammar rules section */
%%
root:
    Goal {
        root = $1;
    }
;

Goal:
    MainClass ClassDeclarations {
        $$ = new Node("Goal", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($2);
    }
;

MainClass:
    PUBLIC CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN LPAREN STRING LBRACK RBRACK IDENTIFIER RPAREN LBRACE StatementList RBRACE RBRACE {
        $$ = new Node("MainClass", *$3, yylineno);
        $$->children.push_back($16); // $16 is the StatementList
        delete $3;  // class name (IDENTIFIER)
        delete $13; // main method param name (IDENTIFIER) — not used in AST
    }
;

ClassDeclarations:
    /* empty */ {
        $$ = new Node("ClassDeclarations", "", yylineno);
    }
  | ClassDeclarations ClassDeclaration {
        $$ = $1;
        $$->children.push_back($2);
    }
;

ClassDeclaration:
    CLASS IDENTIFIER LBRACE VarDeclarations MethodDeclarations RBRACE {
        $$ = new Node("ClassDeclaration", *$2, yylineno);
        $$->children.push_back($4); // var decls
        $$->children.push_back($5); // method decls
        delete $2;
    }
;

VarDeclarations:
    /* empty */ {
        $$ = new Node("VarDeclarations", "", yylineno);
    }
  | VarDeclarations VarDeclaration {
        $$ = $1;
        $$->children.push_back($2);
    }
;

VarDeclaration:
    Type IDENTIFIER SEMICOLON {
        $$ = new Node("VarDeclaration", *$2, yylineno);
        $$->children.push_back($1); // Type
        delete $2;
    }
;

MethodDeclarations:
    /* empty */ {
        $$ = new Node("MethodDeclarations", "", yylineno);
    }
  | MethodDeclarations MethodDeclaration {
        $$ = $1;
        $$->children.push_back($2);
    }
;

MethodDeclaration:
    PUBLIC Type IDENTIFIER LPAREN FormalParameters RPAREN LBRACE BlockStatements RETURN expression SEMICOLON RBRACE {
        $$ = new Node("MethodDeclaration", *$3, yylineno);
        $$->children.push_back($2); // return type
        $$->children.push_back($5); // parameters
        $$->children.push_back($8); // block statements
        $$->children.push_back($10); // return expression
        delete $3;
    }
;

FormalParameters:
    /* empty */ {
        $$ = new Node("FormalParameters", "", yylineno);
    }
  | FormalParameterList {
        $$ = $1;
    }
;

FormalParameterList:
    FormalParameter {
        $$ = new Node("FormalParameterList", "", yylineno);
        $$->children.push_back($1);
    }
  | FormalParameterList COMMA FormalParameter {
        $$ = $1;
        $$->children.push_back($3);
    }
;

FormalParameter:
    Type IDENTIFIER {
        $$ = new Node("FormalParameter", *$2, yylineno);
        $$->children.push_back($1); // type
        delete $2;
    }
;

BlockStatements:
    /* empty */ {
        $$ = new Node("BlockStatements", "", yylineno);
    }
  | BlockStatements BlockStatement {
        $$ = $1;
        $$->children.push_back($2);
    }
;

BlockStatement:
    VarDeclaration {
        $$ = $1;
    }
  | Statement {
        $$ = $1;
    }
;

StatementList:
    /* empty */ {
        $$ = new Node("StatementList", "", yylineno);
    }
  | StatementList Statement {
        $$ = $1;
        $$->children.push_back($2);
    }
;

Statement:
    SYSTEMDOTOUTDOTPRINTLN LPAREN expression RPAREN SEMICOLON {
        $$ = new Node("PrintStatement", "", yylineno);
        $$->children.push_back($3);
    }
  | IDENTIFIER ASSIGN expression SEMICOLON {
        $$ = new Node("AssignStatement", *$1, yylineno);
        $$->children.push_back($3);
        delete $1;
    }
  | IF LPAREN expression RPAREN Statement {
        $$ = new Node("IfStatement", "", yylineno);
        $$->children.push_back($3); // condition
        $$->children.push_back($5); // true branch
    }
  | IF LPAREN expression RPAREN Statement ELSE Statement {
        $$ = new Node("IfStatement", "", yylineno);
        $$->children.push_back($3); // condition
        $$->children.push_back($5); // true branch
        $$->children.push_back($7); // false branch
    }
  | WHILE LPAREN expression RPAREN Statement {
        $$ = new Node("WhileStatement", "", yylineno);
        $$->children.push_back($3); // condition
        $$->children.push_back($5); // loop body
    }
  | LBRACE StatementList RBRACE {
        $$ = new Node("Block", "", yylineno);
        $$->children.push_back($2);
    }
  | SEMICOLON {
        $$ = new Node("EmptyStatement", ";", yylineno);
    }
;

Type:
    INT LBRACK RBRACK {
        $$ = new Node("Type", "int[]", yylineno);
    }
  | BOOLEAN {
        $$ = new Node("Type", "boolean", yylineno);
    }
  | INT {
        $$ = new Node("Type", "int", yylineno);
    }
  | IDENTIFIER {
        $$ = new Node("Type", *$1, yylineno);
        delete $1;
    }
;

postfix:
    factor { $$ = $1; }
  | postfix DOT IDENTIFIER LPAREN RPAREN {
        $$ = new Node("MethodCall", *$3, yylineno);
        $$->children.push_back($1); // object or expression
        delete $3;
    }
  | postfix DOT IDENTIFIER LPAREN ExpressionList RPAREN {
        $$ = new Node("MethodCall", *$3, yylineno);
        $$->children.push_back($1); // object
        $$->children.push_back($5); // argument
        delete $3;
    }
  | postfix DOT LENGTH {
        $$ = new Node("ArrayLength", "", yylineno);
        $$->children.push_back($1);
    }
  | postfix LBRACK expression RBRACK {
        $$ = new Node("ArrayAccess", "", yylineno);
        $$->children.push_back($1); // array
        $$->children.push_back($3); // index
    }
;

expression:
    expression PLUS expression {
        $$ = new Node("AddExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
  | expression MINUS expression {
        $$ = new Node("SubExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
  | expression TIMES expression {
        $$ = new Node("MultExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
  | expression LT expression {
        $$ = new Node("LessThan", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
  | expression GT expression {
        $$ = new Node("GreaterThan", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
  | expression EQ expression {
        $$ = new Node("Equals", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
  | postfix {
        $$ = $1;
    }
;

ExpressionList:
    expression {
        $$ = new Node("Arguments", "", yylineno);
        $$->children.push_back($1);
    }
  | ExpressionList COMMA expression {
        $$ = $1;
        $$->children.push_back($3);
    }
;

factor:
    INTEGER {
        $$ = new Node("Int", std::to_string($1), yylineno);
    }
  | IDENTIFIER {
        $$ = new Node("Identifier", *$1, yylineno);
        delete $1;
    }
  | TRUE {
        $$ = new Node("BooleanLiteral", "true", yylineno);
    }
  | FALSE {
        $$ = new Node("BooleanLiteral", "false", yylineno);
    }
  | THIS {
        $$ = new Node("This", "this", yylineno);
    }
  | NEW IDENTIFIER LPAREN RPAREN {
        $$ = new Node("NewObject", *$2, yylineno);
        delete $2;
    }
  | LPAREN expression RPAREN {
        $$ = $2;
    }
;


%%

