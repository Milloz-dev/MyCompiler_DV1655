%{
#include "parser.tab.hh"
#include <string>

using namespace std;

#define YY_DECL yy::parser::symbol_type yylex()

int lexical_errors = 0;
// int yylineno = 1;
// bool USE_LEX_ONLY = false;
%}

%option noyywrap
%x COMMENT

%%
"//".*                              { /* skip single-line comments */ }
[ \t\r]+                            { /* skip whitespace */ }
\n                                  { yylineno++; }

"class"                             { return USE_LEX_ONLY ? (printf("CLASS\n"), yylex()) : yy::parser::make_CLASS(); }
"public"                            { return USE_LEX_ONLY ? (printf("PUBLIC\n"), yylex()) : yy::parser::make_PUBLIC(); }
"static"                            { return USE_LEX_ONLY ? (printf("STATIC\n"), yylex()) : yy::parser::make_STATIC(); }
"void"                              { return USE_LEX_ONLY ? (printf("VOID\n"), yylex()) : yy::parser::make_VOID(); }
"main"                              { return USE_LEX_ONLY ? (printf("MAIN\n"), yylex()) : yy::parser::make_MAIN(); }
"String"                            { return USE_LEX_ONLY ? (printf("STRING\n"), yylex()) : yy::parser::make_STRING(); }
"int"                               { return USE_LEX_ONLY ? (printf("INT\n"), yylex()) : yy::parser::make_INT(); }
"boolean"                           { return USE_LEX_ONLY ? (printf("BOOLEAN\n"), yylex()) : yy::parser::make_BOOLEAN(); }
"if"                                { return USE_LEX_ONLY ? (printf("IF\n"), yylex()) : yy::parser::make_IF(); }
"else"                              { return USE_LEX_ONLY ? (printf("ELSE\n"), yylex()) : yy::parser::make_ELSE(); }
"while"                             { return USE_LEX_ONLY ? (printf("WHILE\n"), yylex()) : yy::parser::make_WHILE(); }
"return"                            { return USE_LEX_ONLY ? (printf("RETURN\n"), yylex()) : yy::parser::make_RETURN(); }
"this"                              { return USE_LEX_ONLY ? (printf("THIS\n"), yylex()) : yy::parser::make_THIS(); }
"new"                               { return USE_LEX_ONLY ? (printf("NEW\n"), yylex()) : yy::parser::make_NEW(); }
"true"                              { return USE_LEX_ONLY ? (printf("TRUE\n"), yylex()) : yy::parser::make_TRUE(); }
"false"                             { return USE_LEX_ONLY ? (printf("FALSE\n"), yylex()) : yy::parser::make_FALSE(); }
"length"                            { return USE_LEX_ONLY ? (printf("LENGTH\n"), yylex()) : yy::parser::make_LENGTH(); }


"&&"                                { return USE_LEX_ONLY ? (printf("AND\n"), yylex()) : yy::parser::make_AND(); }
"||"                                { return USE_LEX_ONLY ? (printf("OR\n"), yylex()) : yy::parser::make_OR(); }
"=="                                { return USE_LEX_ONLY ? (printf("EQ\n"), yylex()) : yy::parser::make_EQ(); }
"<"                                 { return USE_LEX_ONLY ? (printf("LT\n"), yylex()) : yy::parser::make_LT(); }
">"                                 { return USE_LEX_ONLY ? (printf("GT\n"), yylex()) : yy::parser::make_GT(); }
"+"                                 { return USE_LEX_ONLY ? (printf("PLUS\n"), yylex()) : yy::parser::make_PLUS(); }
"-"                                 { return USE_LEX_ONLY ? (printf("MINUS\n"), yylex()) : yy::parser::make_MINUS(); }
"*"                                 { return USE_LEX_ONLY ? (printf("TIMES\n"), yylex()) : yy::parser::make_TIMES(); }
"!"                                 { return USE_LEX_ONLY ? (printf("NOT\n"), yylex()) : yy::parser::make_NOT(); }
"="                                 { return USE_LEX_ONLY ? (printf("ASSIGN\n"), yylex()) : yy::parser::make_ASSIGN(); }

"["                                 { return USE_LEX_ONLY ? (printf("LBRACK\n"), yylex()) : yy::parser::make_LBRACK(); }
"]"                                 { return USE_LEX_ONLY ? (printf("RBRACK\n"), yylex()) : yy::parser::make_RBRACK(); }
"("                                 { return USE_LEX_ONLY ? (printf("LPAREN\n"), yylex()) : yy::parser::make_LPAREN(); }
")"                                 { return USE_LEX_ONLY ? (printf("RPAREN\n"), yylex()) : yy::parser::make_RPAREN(); }
"{"                                 { return USE_LEX_ONLY ? (printf("LBRACE\n"), yylex()) : yy::parser::make_LBRACE(); }
"}"                                 { return USE_LEX_ONLY ? (printf("RBRACE\n"), yylex()) : yy::parser::make_RBRACE(); }
";"                                 { return USE_LEX_ONLY ? (printf("SEMICOLON\n"), yylex()) : yy::parser::make_SEMICOLON(); }
","                                 { return USE_LEX_ONLY ? (printf("COMMA\n"), yylex()) : yy::parser::make_COMMA(); }
"."                                 { return USE_LEX_ONLY ? (printf("DOT\n"), yylex()) : yy::parser::make_DOT(); }

"System.out.println"                { return USE_LEX_ONLY ? (printf("SYSTEMDOTOUTDOTPRINTLN\n"), yylex()): yy::parser::make_SYSTEMDOTOUTDOTPRINTLN(); }
[0-9]+                              { return USE_LEX_ONLY ? (printf("INTEGER %s\n", yytext), yylex()) : yy::parser::make_INTEGER(stoi(yytext)); }
[a-zA-Z_][a-zA-Z0-9_]*              { return USE_LEX_ONLY ? (printf("IDENTIFIER %s\n", yytext), yylex()) : yy::parser::make_IDENTIFIER(new std::string(yytext)); }

.                                   {
                                      printf("\t@lexical error at line %d. Cannot recognize character: %s\n", yylineno, yytext);
                                      lexical_errors++;
                                    }

%%

