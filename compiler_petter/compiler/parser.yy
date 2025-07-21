/* Skeleton and definitions for generating a LALR(1) parser in C++ */
%skeleton "lalr1.cc"
%defines
%define parse.error verbose
%define api.value.type variant
%define api.token.constructor

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
%token <int> INT
%token <int> INTEGER
%token <std::string> IDENTIFIER

/* End-of-file */
%token END 0 "end of file"

/* MiniJava keywords and symbols */
%token CLASS PUBLIC STATIC VOID MAIN STRING BOOLEAN IF ELSE WHILE RETURN THIS NEW TRUE FALSE
%token AND OR EQ LT GT PLUS MINUS TIMES NOT ASSIGN
%token LBRACK RBRACK LPAREN RPAREN LBRACE RBRACE SEMICOLON COMMA DOT

/* Precedence and associativity */
%left PLUSOP MINUSOP
%left MULTOP

/* Types for non-terminals */
%type <Node*> root expression factor

/* Grammar rules section */
%%
root:
    expression {
        root = $1;
    }
;

expression:
    expression PLUSOP expression {
        $$ = new Node("AddExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
  | expression MINUSOP expression {
        $$ = new Node("SubExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
  | expression MULTOP expression {
        $$ = new Node("MultExpression", "", yylineno);
        $$->children.push_back($1);
        $$->children.push_back($3);
    }
  | factor {
        $$ = $1;
    }
;

factor:
    INT {
        $$ = new Node("Int", std::to_string($1), yylineno); /* Create a leaf node for integer literal */
    }
  | LP expression RP {
        $$ = $2; /* Just return the grouped expression */
    }
;

%%

