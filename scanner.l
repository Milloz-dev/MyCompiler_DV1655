%{
#include "parser.tab.h"  // Bison-generated header
#include <stdio.h>
#include <stdlib.h>
%}

/* (A) Lexical Analysis (Scanner) using Flex.
  -Tokenizes the MiniJava source code.
  -Recognizes keywords, identifiers, literals, and symbols.
  -Outputs tokens for the parser. 
*/

%option noyywrap

/* Define tokens */
DIGIT   [0-9]
LETTER  [a-zA-Z]
ID      {LETTER}({LETTER}|{DIGIT})*
NUMBER  {DIGIT}+

%%
"int"       { printf("Token: INT\n"); return INT; }
"return"    { printf("Token: RETURN\n"); return RETURN; }
"if"        { printf("Token: IF\n"); return IF; }
"else"      { printf("Token: ELSE\n"); return ELSE; }
"while"     { printf("Token: WHILE\n"); return WHILE; }
{ID}        { printf("Token: ID (%s)\n", yytext); return ID; }
{NUMBER}    { printf("Token: NUMBER (%s)\n", yytext); yylval = atoi(yytext); return NUMBER; }
"("         { printf("Token: LPAREN\n"); return LPAREN; }
")"         { printf("Token: RPAREN\n"); return RPAREN; }
"{"         { printf("Token: LBRACE\n"); return LBRACE; }
"}"         { printf("Token: RBRACE\n"); return RBRACE; }
";"         { printf("Token: SEMICOLON\n"); return SEMICOLON; }
[ \t\n]     ;  /* Ignore whitespace */
.           { printf("Unexpected character: %s\n", yytext); }

%%
