/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CLASS = 258,
     PUBLIC = 259,
     STATIC = 260,
     VOID = 261,
     MAIN = 262,
     INT = 263,
     BOOLEAN = 264,
     RETURN = 265,
     IF = 266,
     ELSE = 267,
     WHILE = 268,
     PRINTLN = 269,
     THIS = 270,
     NEW = 271,
     TRUE = 272,
     FALSE = 273,
     LPAREN = 274,
     RPAREN = 275,
     LBRACE = 276,
     RBRACE = 277,
     LBRACKET = 278,
     RBRACKET = 279,
     SEMICOLON = 280,
     COMMA = 281,
     DOT = 282,
     ASSIGN = 283,
     AND = 284,
     OR = 285,
     EQUAL = 286,
     LT = 287,
     GT = 288,
     PLUS = 289,
     MINUS = 290,
     MULT = 291,
     NOT = 292,
     IDENTIFIER = 293,
     STRING = 294,
     STRING_LITERAL = 295,
     NUMBER = 296
   };
#endif
/* Tokens.  */
#define CLASS 258
#define PUBLIC 259
#define STATIC 260
#define VOID 261
#define MAIN 262
#define INT 263
#define BOOLEAN 264
#define RETURN 265
#define IF 266
#define ELSE 267
#define WHILE 268
#define PRINTLN 269
#define THIS 270
#define NEW 271
#define TRUE 272
#define FALSE 273
#define LPAREN 274
#define RPAREN 275
#define LBRACE 276
#define RBRACE 277
#define LBRACKET 278
#define RBRACKET 279
#define SEMICOLON 280
#define COMMA 281
#define DOT 282
#define ASSIGN 283
#define AND 284
#define OR 285
#define EQUAL 286
#define LT 287
#define GT 288
#define PLUS 289
#define MINUS 290
#define MULT 291
#define NOT 292
#define IDENTIFIER 293
#define STRING 294
#define STRING_LITERAL 295
#define NUMBER 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "parser.y"
{
    char* sval;       // For IDENTIFIER, STRING
    int ival;         // For NUMBER
    struct Node* node; // For AST nodes
}
/* Line 1529 of yacc.c.  */
#line 137 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

