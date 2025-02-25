%{
#include <iostream>
#include <vector>
#include "parser.hpp"
#include "node.h" // AST Node structure

using namespace std;

vector<Node*> ast_nodes; // Store AST nodes

#define YYSTYPE Node* // Define Bison's token type as Node*

%}

%option noyywrap c++

%%

"class"     { yylval.node = new Node("CLASS", yytext, yylineno); return CLASS; }
"public"    { yylval.node = new Node("PUBLIC", yytext, yylineno); return PUBLIC; }
"static"    { yylval.node = new Node("STATIC", yytext, yylineno); return STATIC; }
"void"      { yylval.node = new Node("VOID", yytext, yylineno); return VOID; }
"main"      { yylval.node = new Node("MAIN", yytext, yylineno); return MAIN; }
"String"    { yylval.node = new Node("STRING", yytext, yylineno); return STRING; }
"int"       { yylval.node = new Node("INT", yytext, yylineno); return INT; }
"boolean"   { yylval.node = new Node("BOOLEAN", yytext, yylineno); return BOOLEAN; }
"return"    { yylval.node = new Node("RETURN", yytext, yylineno); return RETURN; }
"if"        { yylval.node = new Node("IF", yytext, yylineno); return IF; }
"else"      { yylval.node = new Node("ELSE", yytext, yylineno); return ELSE; }
"while"     { yylval.node = new Node("WHILE", yytext, yylineno); return WHILE; }
"System.out.println" { yylval.node = new Node("PRINTLN", yytext, yylineno); return PRINTLN; }
"this"      { yylval.node = new Node("THIS", yytext, yylineno); return THIS; } 
"new"       { yylval.node = new Node("NEW", yytext, yylineno); return NEW; }
"true"      { yylval.node = new Node("TRUE", yytext, yylineno); return TRUE; }
"false"     { yylval.node = new Node("FALSE", yytext, yylineno); return FALSE; }

"("         { yylval.node = new Node("LPAREN", yytext, yylineno); return LPAREN; }
")"         { yylval.node = new Node("RPAREN", yytext, yylineno); return RPAREN; }
"{"         { yylval.node = new Node("LBRACE", yytext, yylineno); return LBRACE; }
"}"         { yylval.node = new Node("RBRACE", yytext, yylineno); return RBRACE; }
"["         { yylval.node = new Node("LBRACKET", yytext, yylineno); return LBRACKET; }
"]"         { yylval.node = new Node("RBRACKET", yytext, yylineno); return RBRACKET; }
";"         { yylval.node = new Node("SEMICOLON", yytext, yylineno); return SEMICOLON; }
","         { yylval.node = new Node("COMMA", yytext, yylineno); return COMMA; }
"."         { yylval.node = new Node("DOT", yytext, yylineno); return DOT; }
"="         { yylval.node = new Node("ASSIGN", yytext, yylineno); return ASSIGN; }
"&&"        { yylval.node = new Node("AND", yytext, yylineno); return AND; }
"||"        { yylval.node = new Node("OR", yytext, yylineno); return OR; }
"=="        { yylval.node = new Node("EQUAL", yytext, yylineno); return EQUAL; }
"<"         { yylval.node = new Node("LT", yytext, yylineno); return LT; }
">"         { yylval.node = new Node("GT", yytext, yylineno); return GT; }
"+"         { yylval.node = new Node("PLUS", yytext, yylineno); return PLUS; }
"-"         { yylval.node = new Node("MINUS", yytext, yylineno); return MINUS; }
"*"         { yylval.node = new Node("MULT", yytext, yylineno); return MULT; }
"!"         { yylval.node = new Node("NOT", yytext, yylineno); return NOT; }


[0-9]+      { yylval.ival = atoi(yytext); return NUMBER; }
[a-zA-Z_][a-zA-Z0-9_]* { yylval.sval = strdup(yytext); return IDENTIFIER; }
\"(\\.|[^\"])*\" { yylval.sval = strdup(yytext); return STRING_LITERAL; }

"//".*      { /* Ignore single-line comments */ }
"/*"([^*]|\*+[^*/])*\*+"/" { /* Ignore multi-line comments */ }

[ \t\r\n]+  { /* Ignore whitespace */ }

.           { cerr << "Unknown Token: " << yytext << " at line " << yylineno << endl; }

%%

int yywrap() { return 1; }
