%{
#include "parser.tab.h"  // Bison-generated header
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
IDENTIFIER  {LETTER}({LETTER}|{DIGIT})*
NUMBER  {DIGIT}+

%%

"class"     { return CLASS; }
"public"    { return PUBLIC; }
"static"    { return STATIC; }
"void"      { return VOID; }
"main"      { return MAIN; }
"String"    { return STRING; }
"int"       { return INT; }
"boolean"   { return BOOLEAN; }
"return"    { return RETURN; }
"if"        { return IF; }
"else"      { return ELSE; }
"while"     { return WHILE; }
"System.out.println" { return PRINTLN; }
"this"      { return THIS; } 
"new"       { return NEW; }
"true"      { return TRUE; }
"false"     { return FALSE; }

"("           { return LPAREN; }
")"           { return RPAREN; }
"{"           { return LBRACE; }
"}"           { return RBRACE; }
"["           { return LBRACKET; }
"]"           { return RBRACKET; }
";"           { return SEMICOLON; }
","           { return COMMA; }
"."           { return DOT; }
"="           { return ASSIGN; }
"&&"          { return AND; }
"||"          { return OR; }
"=="          { return EQUAL; }
"<"           { return LT; }
">"           { return GT; }
"+"           { return PLUS; }
"-"           { return MINUS; }
"*"           { return MULT; }
"!"           { return NOT; }

\"([^\"]|\\\")*\"  { return STRING; }

[a-zA-Z][a-zA-Z0-9]* { return IDENTIFIER; }
[0-9]+ { return NUMBER; }

"//"[^'\n']*          { /* Ignore comments */ }
[ \t\n\r]+ { /* Ignore spaces, tabs, and newlines */ }

. { printf("Unexpected character: %s\n", yytext); return ERROR; }

%%

int main() {
    yylex();
    return 0;
}