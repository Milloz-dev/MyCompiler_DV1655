%option noyywrap
%option c++
%option yylineno

%{
#include "parser.tab.hh"
include "Node.h"

#define YY_DECL yy::parser::symbol_type yylex()

using namespace std;

/* (A) Lexical Analysis (Scanner) using Flex.
  - Tokenizes the MiniJava source code.
  - Recognizes keywords, identifiers, literals, and symbols.
  - Outputs tokens for the parser.
*/

int yylineno = 1;

%}

DIGIT   [0-9]
LETTER  [a-zA-Z]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT})*
NUMBER  {DIGIT}+
STRING     \"([^\\"]|\\.)*\"

%%

"class"     { cout << "Token: CLASS" << endl; return CLASS; }
"public"    { cout << "Token: PUBLIC" << endl; return PUBLIC; }
"static"    { cout << "Token: STATIC" << endl; return STATIC; }
"void"      { cout << "Token: VOID" << endl; return VOID; }
"main"      { cout << "Token: MAIN" << endl; return MAIN; }
"String"    { cout << "Token: STRING" << endl; return STRING; }
"int"       { cout << "Token: INT" << endl; return INT; }
"boolean"   { cout << "Token: BOOLEAN" << endl; return BOOLEAN; }
"return"    { cout << "Token: RETURN" << endl; return RETURN; }
"if"        { cout << "Token: IF" << endl; return IF; }
"else"      { cout << "Token: ELSE" << endl; return ELSE; }
"while"     { cout << "Token: WHILE" << endl; return WHILE; }
"System.out.println" { cout << "Token: PRINTLN" << endl; return PRINTLN; }
"this"      { cout << "Token: THIS" << endl; return THIS; } 
"new"       { cout << "Token: NEW" << endl; return NEW; }
"true"      { cout << "Token: TRUE" << endl; return TRUE; }
"false"     { cout << "Token: FALSE" << endl; return FALSE; }

"("           { cout << "Token: LPAREN" << endl; return LPAREN; }
")"           { cout << "Token: RPAREN" << endl; return RPAREN; }
"{"           { cout << "Token: LBRACE" << endl; return LBRACE; }
"}"           { cout << "Token: RBRACE" << endl; return RBRACE; }
"["           { cout << "Token: LBRACKET" << endl; return LBRACKET; }
"]"           { cout << "Token: RBRACKET" << endl; return RBRACKET; }
";"           { cout << "Token: SEMICOLON" << endl; return SEMICOLON; }
","           { cout << "Token: COMMA" << endl; return COMMA; }
"."           { cout << "Token: DOT" << endl; return DOT; }
"="           { cout << "Token: ASSIGN" << endl; return ASSIGN; }
"&&"          { cout << "Token: AND" << endl; return AND; }
"||"          { cout << "Token: OR" << endl; return OR; }
"=="          { cout << "Token: EQUAL" << endl; return EQUAL; }
"<"           { cout << "Token: LT" << endl; return LT; }
">"           { cout << "Token: GT" << endl; return GT; }
"+"           { cout << "Token: PLUS" << endl; return PLUS; }
"-"           { cout << "Token: MINUS" << endl; return MINUS; }
"*"           { cout << "Token: MULT" << endl; return MULT; }
"!"           { cout << "Token: NOT" << endl; return NOT; }

{IDENTIFIER}    { std::cout << "[LEXER] IDENTIFIER: " << yytext << std::endl; yylval.sval = new std::string(yytext); return IDENTIFIER; }
{STRING}        { std::cout << "[LEXER] STRING_LITERAL: " << yytext << std::endl; yylval.sval = new std::string(yytext); return STRING_LITERAL; }
{NUMBER}        { std::cout << "[LEXER] NUMBER: " << yytext << std::endl; yylval.ival = atoi(yytext); return NUMBER; }



[ \t\r\n]+  { /* Ignore spaces, tabs, and newlines */ }

. { 
    std::cerr << "Lexical error: unexpected character '" << yytext[0] << "'" << std::endl;
    return ERROR;
}


%%

