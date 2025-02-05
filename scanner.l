%{
#include "parser.tab.h"  // Bison-generated header
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* (A) Lexical Analysis (Scanner) using Flex.
  -Tokenizes the MiniJava source code.
  -Recognizes keywords, identifiers, literals, and symbols.
  -Outputs tokens for the parser. 
*/

%}

%option noyywrap

DIGIT   [0-9]
LETTER  [a-zA-Z]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT})*
NUMBER  {DIGIT}+

%%

"class"     { printf("Token: CLASS\n"); return CLASS; }
"public"    { printf("Token: PUBLIC\n"); return PUBLIC; }
"static"    { printf("Token: STATIC\n"); return STATIC; }
"void"      { printf("Token: VOID\n"); return VOID; }
"main"      { printf("Token: MAIN\n"); return MAIN; }
"String"    { printf("Token: STRING\n"); return STRING; }
"int"       { printf("Token: INT\n"); return INT; }
"boolean"   { printf("Token: BOOLEAN\n"); return BOOLEAN; }
"return"    { printf("Token: RETURN\n"); return RETURN; }
"if"        { printf("Token: IF\n"); return IF; }
"else"      { printf("Token: ELSE\n"); return ELSE; }
"while"     { printf("Token: WHILE\n"); return WHILE; }
"System.out.println" { printf("Token: PRINTLN\n"); return PRINTLN; }
"this"      { printf("Token: THIS\n"); return THIS; } 
"new"       { printf("Token: NEW\n"); return NEW; }
"true"      { printf("Token: TRUE\n"); return TRUE; }
"false"     { printf("Token: FALSE\n"); return FALSE; }

"("           { printf("Token: LPAREN\n"); return LPAREN; }
")"           { printf("Token: RPAREN\n"); return RPAREN; }
"{"           { printf("Token: LBRACE\n"); return LBRACE; }
"}"           { printf("Token: RBRACE\n"); return RBRACE; }
"["           { printf("Token: LBRACKET\n"); return LBRACKET; }
"]"           { printf("Token: RBRACKET\n"); return RBRACKET; }
";"           { printf("Token: SEMICOLON\n"); return SEMICOLON; }
","           { printf("Token: COMMA\n"); return COMMA; }
"."           { printf("Token: DOT\n"); return DOT; }
"="           { printf("Token: ASSIGN\n"); return ASSIGN; }
"&&"          { printf("Token: AND\n"); return AND; }
"||"          { printf("Token: OR\n"); return OR; }
"=="          { printf("Token: EQUAL\n"); return EQUAL; }
"<"           { printf("Token: LT\n"); return LT; }
">"           { printf("Token: GT\n"); return GT; }
"+"           { printf("Token: PLUS\n"); return PLUS; }
"-"           { printf("Token: MINUS\n"); return MINUS; }
"*"           { printf("Token: MULT\n"); return MULT; }
"!"           { printf("Token: NOT\n"); return NOT; }

\"([^\\"]|\\.)*\"  { yylval.sval = strdup(yytext); return STRING_LITERAL; }
{IDENTIFIER} { yylval.sval = strdup(yytext); return IDENTIFIER; }
{NUMBER} { yylval.ival = atoi(yytext); return NUMBER; }

"//".* { /* Ignore comments */ }
[ \t\n\r]+ { /* Ignore spaces, tabs, and newlines */ }

. { fprintf(stderr, "Unexpected character: %c\n", *yytext); exit(1); }
%%
