%{
#include <iostream>
#include "parser.tab.hh"
#include "Node.h"
#include <memory>

extern YYSTYPE yylval;

using namespace std;

vector<Node*> ast_nodes; // Consider changing to vector<std::unique_ptr<Node>> if needed.
%}

%option c++
%option yylineno
%option noyywrap

%%

"class"     { yylval.node = std::make_unique<Node>("CLASS", yytext, yylineno); return CLASS; }
"public"    { yylval.node = std::make_unique<Node>("PUBLIC", yytext, yylineno); return PUBLIC; }
"static"    { yylval.node = std::make_unique<Node>("STATIC", yytext, yylineno); return STATIC; }
"void"      { yylval.node = std::make_unique<Node>("VOID", yytext, yylineno); return VOID; }
"main"      { yylval.node = std::make_unique<Node>("MAIN", yytext, yylineno); return MAIN; }
"String"    { yylval.node = std::make_unique<Node>("STRING", yytext, yylineno); return STRING; }
"int"       { yylval.node = std::make_unique<Node>("INT", yytext, yylineno); return INT; }
"boolean"   { yylval.node = std::make_unique<Node>("BOOLEAN", yytext, yylineno); return BOOLEAN; }
"return"    { yylval.node = std::make_unique<Node>("RETURN", yytext, yylineno); return RETURN; }
"if"        { yylval.node = std::make_unique<Node>("IF", yytext, yylineno); return IF; }
"else"      { yylval.node = std::make_unique<Node>("ELSE", yytext, yylineno); return ELSE; }
"while"     { yylval.node = std::make_unique<Node>("WHILE", yytext, yylineno); return WHILE; }
"System.out.println" { yylval.node = std::make_unique<Node>("PRINTLN", yytext, yylineno); return PRINTLN; }
"this"      { yylval.node = std::make_unique<Node>("THIS", yytext, yylineno); return THIS; }
"new"       { yylval.node = std::make_unique<Node>("NEW", yytext, yylineno); return NEW; }
"true"      { yylval.node = std::make_unique<Node>("TRUE", yytext, yylineno); return TRUE; }
"false"     { yylval.node = std::make_unique<Node>("FALSE", yytext, yylineno); return FALSE; }

"("         { yylval.node = std::make_unique<Node>("LPAREN", yytext, yylineno); return LPAREN; }
")"         { yylval.node = std::make_unique<Node>("RPAREN", yytext, yylineno); return RPAREN; }
"{"         { yylval.node = std::make_unique<Node>("LBRACE", yytext, yylineno); return LBRACE; }
"}"         { yylval.node = std::make_unique<Node>("RBRACE", yytext, yylineno); return RBRACE; }
"["         { yylval.node = std::make_unique<Node>("LBRACKET", yytext, yylineno); return LBRACKET; }
"]"         { yylval.node = std::make_unique<Node>("RBRACKET", yytext, yylineno); return RBRACKET; }
";"         { yylval.node = std::make_unique<Node>("SEMICOLON", yytext, yylineno); return SEMICOLON; }
","         { yylval.node = std::make_unique<Node>("COMMA", yytext, yylineno); return COMMA; }
"."         { yylval.node = std::make_unique<Node>("DOT", yytext, yylineno); return DOT; }
"="         { yylval.node = std::make_unique<Node>("ASSIGN", yytext, yylineno); return ASSIGN; }
"&&"        { yylval.node = std::make_unique<Node>("AND", yytext, yylineno); return AND; }
"||"        { yylval.node = std::make_unique<Node>("OR", yytext, yylineno); return OR; }
"=="        { yylval.node = std::make_unique<Node>("EQUAL", yytext, yylineno); return EQUAL; }
"<"         { yylval.node = std::make_unique<Node>("LT", yytext, yylineno); return LT; }
">"         { yylval.node = std::make_unique<Node>("GT", yytext, yylineno); return GT; }
"+"         { yylval.node = std::make_unique<Node>("PLUS", yytext, yylineno); return PLUS; }
"-"         { yylval.node = std::make_unique<Node>("MINUS", yytext, yylineno); return MINUS; }
"*"         { yylval.node = std::make_unique<Node>("MULT", yytext, yylineno); return MULT; }
"!"         { yylval.node = std::make_unique<Node>("NOT", yytext, yylineno); return NOT; }

[0-9]+      { yylval.ival = atoi(yytext); return NUMBER; }
[a-zA-Z_][a-zA-Z0-9_]* { yylval.sval = strdup(yytext); return IDENTIFIER; }
\"(\\.|[^\"])*\" { yylval.sval = strdup(yytext); return STRING_LITERAL; }

"//".*      { /* Ignore single-line comments */ }
"/*"([^*]|\*+[^*/])*\*+"/" { /* Ignore multi-line comments */ }

[ \t\r\n]+  { /* Ignore whitespace */ }

.           { cerr << "Unknown Token: " << yytext << " at line " << yylineno << endl; }

%%

int yywrap() { return 1; }
