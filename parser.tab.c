/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include "Node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.tab.h"


extern int yylineno; 
extern int yylex();  // Lexical analyzer
extern char *yytext;  // Declare yytext
void yyerror(const char *s);  // Error handler

Node* root = nullptr;  // Global root for AST


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 27 "parser.y"
{
    char* sval;       // For IDENTIFIER, STRING
    int ival;         // For NUMBER
    struct Node* node; // For AST nodes
}
/* Line 193 of yacc.c.  */
#line 200 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 213 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   191

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNRULES -- Number of states.  */
#define YYNSTATES  112

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    24,    26,    27,    28,    31,    38,
      39,    42,    46,    47,    50,    64,    65,    68,    70,    72,
      74,    77,    78,    82,    88,    96,   102,   108,   113,   117,
     121,   125,   129,   133,   137,   141,   145,   148,   152,   159,
     161,   163,   165,   167
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    46,    -1,     3,    38,    21,     4,
       5,     6,     7,    19,    39,    23,    24,    45,    20,    21,
      54,    22,    22,    -1,    38,    -1,    -1,    -1,    46,    47,
      -1,     3,    38,    21,    48,    50,    22,    -1,    -1,    48,
      49,    -1,    53,    38,    25,    -1,    -1,    50,    51,    -1,
       4,    53,    38,    19,    52,    20,    21,    48,    54,    10,
      56,    25,    22,    -1,    -1,    53,    38,    -1,     8,    -1,
       9,    -1,    38,    -1,    55,    54,    -1,    -1,    21,    54,
      22,    -1,    11,    19,    56,    20,    55,    -1,    11,    19,
      56,    20,    55,    12,    55,    -1,    13,    19,    56,    20,
      55,    -1,    14,    19,    56,    20,    25,    -1,    38,    28,
      56,    25,    -1,    56,    29,    56,    -1,    56,    30,    56,
      -1,    56,    32,    56,    -1,    56,    33,    56,    -1,    56,
      31,    56,    -1,    56,    34,    56,    -1,    56,    35,    56,
      -1,    56,    36,    56,    -1,    37,    56,    -1,    19,    56,
      20,    -1,    56,    27,    38,    19,    57,    20,    -1,    41,
      -1,    38,    -1,    40,    -1,    56,    -1,    57,    26,    56,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    69,    78,    84,    92,    95,   103,   112,
     113,   121,   129,   130,   138,   149,   150,   158,   159,   160,
     164,   171,   177,   178,   184,   191,   197,   202,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   228,   229
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PUBLIC", "STATIC", "VOID",
  "MAIN", "INT", "BOOLEAN", "RETURN", "IF", "ELSE", "WHILE", "PRINTLN",
  "THIS", "NEW", "TRUE", "FALSE", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACKET", "RBRACKET", "SEMICOLON", "COMMA", "DOT", "ASSIGN", "AND",
  "OR", "EQUAL", "LT", "GT", "PLUS", "MINUS", "MULT", "NOT", "IDENTIFIER",
  "STRING", "STRING_LITERAL", "NUMBER", "$accept", "Goal", "MainClass",
  "MainArgs", "ClassDeclarations", "ClassDeclaration", "VarDeclarations",
  "VarDeclaration", "MethodDeclarations", "MethodDeclaration", "ParamList",
  "Type", "StatementList", "Statement", "Expression", "ArgList", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    45,    45,    46,    46,    47,    48,
      48,    49,    50,    50,    51,    52,    52,    53,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,    17,     1,     0,     0,     2,     6,     0,
       2,     3,     0,     2,    13,     0,     2,     1,     1,     1,
       2,     0,     3,     5,     7,     5,     5,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     6,     1,
       1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     6,     0,     1,     2,     0,     0,     7,
       0,     0,     0,     9,     0,    12,     0,    17,    18,    19,
      10,     0,     0,     0,     0,     8,    13,     0,     0,     0,
      11,     0,     0,     5,    15,     4,     0,     0,     0,     0,
       0,    16,    21,     9,     0,     0,     0,    21,     0,     0,
      21,    21,     0,     0,     0,     0,     0,     0,    20,    19,
       0,     0,     0,    40,    41,    39,     0,     0,     0,    22,
       0,     3,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    37,
      23,     0,    28,    29,    32,    30,    31,    33,    34,    35,
      25,    26,     0,     0,     0,    14,    24,    42,     0,    38,
       0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    36,     6,     9,    15,    20,    21,    26,
      37,    22,    49,    50,    66,   108
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -69
static const yytype_int16 yypact[] =
{
       3,   -24,    21,   -69,    -3,   -69,    29,    39,     7,   -69,
      47,    23,    48,   -69,    54,    -4,    45,   -69,   -69,   -69,
     -69,    -2,    30,    41,    -4,   -69,   -69,    53,    56,    43,
     -69,    58,    64,    59,    -4,   -69,    65,    75,    60,    78,
      79,   -69,    25,   -69,    77,    83,    93,    25,    85,    92,
      25,     2,    18,    18,    18,    94,    18,    95,   -69,    85,
     105,    18,    18,   -69,   -69,   -69,    40,    57,    74,   -69,
     103,   -69,    18,    91,   102,    25,    81,    18,    18,    18,
      18,    18,    18,    18,    18,    25,   106,   -69,   115,   -69,
     129,   124,   145,   135,   155,    14,    14,     6,     6,   102,
     -69,   -69,   131,    25,    18,   -69,   -69,   125,    27,   -69,
      18,   125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,   -69,   -69,   -69,   120,   -69,   -69,   -69,
     -69,   -12,    15,   -68,   -53,   -69
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      67,    68,    24,    70,    17,    18,     1,    90,    73,    74,
      17,    18,    29,    44,     4,    45,    46,   100,     7,    88,
      25,     5,    38,    47,    92,    93,    94,    95,    96,    97,
      98,    99,     8,    76,    19,   106,    44,    61,    45,    46,
      59,    76,    84,    10,    13,    11,    47,   109,    82,    83,
      84,   107,    12,   110,    14,    62,    63,   111,    64,    65,
      75,    16,    55,    48,    23,    58,    60,    76,    27,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    30,    31,
      28,    32,    33,    34,    76,    39,    77,    78,    79,    80,
      81,    82,    83,    84,    86,    40,    52,    35,    41,    42,
      43,    76,    53,    77,    78,    79,    80,    81,    82,    83,
      84,    89,    54,    56,    57,    72,    69,    71,    76,    91,
      77,    78,    79,    80,    81,    82,    83,    84,    87,    76,
      76,   101,    77,    78,    79,    80,    81,    82,    83,    84,
     102,   103,    76,   104,    77,    78,    79,    80,    81,    82,
      83,    84,    76,   105,    77,    78,    79,    80,    81,    82,
      83,    84,    76,    51,    77,     0,    79,    80,    81,    82,
      83,    84,    76,     0,     0,     0,    79,    80,    81,    82,
      83,    84,    76,     0,     0,     0,     0,    80,    81,    82,
      83,    84
};

static const yytype_int8 yycheck[] =
{
      53,    54,     4,    56,     8,     9,     3,    75,    61,    62,
       8,     9,    24,    11,    38,    13,    14,    85,    21,    72,
      22,     0,    34,    21,    77,    78,    79,    80,    81,    82,
      83,    84,     3,    27,    38,   103,    11,    19,    13,    14,
      38,    27,    36,     4,    21,    38,    21,    20,    34,    35,
      36,   104,     5,    26,     6,    37,    38,   110,    40,    41,
      20,     7,    47,    38,    19,    50,    51,    27,    38,    29,
      30,    31,    32,    33,    34,    35,    36,    20,    25,    23,
      39,    38,    24,    19,    27,    20,    29,    30,    31,    32,
      33,    34,    35,    36,    20,    20,    19,    38,    38,    21,
      21,    27,    19,    29,    30,    31,    32,    33,    34,    35,
      36,    20,    19,    28,    22,    10,    22,    22,    27,    38,
      29,    30,    31,    32,    33,    34,    35,    36,    25,    27,
      27,    25,    29,    30,    31,    32,    33,    34,    35,    36,
      25,    12,    27,    19,    29,    30,    31,    32,    33,    34,
      35,    36,    27,    22,    29,    30,    31,    32,    33,    34,
      35,    36,    27,    43,    29,    -1,    31,    32,    33,    34,
      35,    36,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    27,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    43,    44,    38,     0,    46,    21,     3,    47,
       4,    38,     5,    21,     6,    48,     7,     8,     9,    38,
      49,    50,    53,    19,     4,    22,    51,    38,    39,    53,
      25,    23,    38,    24,    19,    38,    45,    52,    53,    20,
      20,    38,    21,    21,    11,    13,    14,    21,    38,    54,
      55,    48,    19,    19,    19,    54,    28,    22,    54,    38,
      54,    19,    37,    38,    40,    41,    56,    56,    56,    22,
      56,    22,    10,    56,    56,    20,    27,    29,    30,    31,
      32,    33,    34,    35,    36,    20,    20,    25,    56,    20,
      55,    38,    56,    56,    56,    56,    56,    56,    56,    56,
      55,    25,    25,    12,    19,    22,    55,    56,    57,    20,
      26,    56
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 61 "parser.y"
    {
        root = new Node("PROGRAM", "PROGRAM", yylineno);
        root->add_child((yyvsp[(1) - (2)].node));
        root->add_child((yyvsp[(2) - (2)].node));
    ;}
    break;

  case 3:
#line 70 "parser.y"
    {
        (yyval.node) = new Node("MainClass", "MainClass", yylineno);
        (yyval.node)->add_child(new Node("IDENTIFIER", (yyvsp[(2) - (17)].sval), yylineno));  // $2 is the class name ("Main")
        if ((yyvsp[(12) - (17)].node)) (yyval.node)->add_child((yyvsp[(12) - (17)].node));  // $12 is MainArgs (String[] args)
        if ((yyvsp[(15) - (17)].node)) (yyval.node)->add_child((yyvsp[(15) - (17)].node));  // $15 is StatementList (inside main)
    ;}
    break;

  case 4:
#line 79 "parser.y"
    {
        (yyval.node) = new Node("MainArgs", "MainArgs", yylineno);
        (yyval.node)->add_child(new Node("IDENTIFIER", (yyvsp[(1) - (1)].sval), yylineno));
    ;}
    break;

  case 5:
#line 84 "parser.y"
    { 
        (yyval.node) = NULL; 
    ;}
    break;

  case 6:
#line 92 "parser.y"
    {
        (yyval.node) = new Node("EMPTY_CLASS_DECL", "EMPTY_CLASS_DECL", yylineno);
    ;}
    break;

  case 7:
#line 96 "parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        (yyval.node)->add_child((yyvsp[(2) - (2)].node));
    ;}
    break;

  case 8:
#line 104 "parser.y"
    {
        (yyval.node) = new Node("CLASS_DECL", (yyvsp[(2) - (6)].sval), yylineno);
        (yyval.node)->add_child((yyvsp[(4) - (6)].node));
        (yyval.node)->add_child((yyvsp[(5) - (6)].node));
    ;}
    break;

  case 9:
#line 112 "parser.y"
    { (yyval.node) = new Node("EMPTY_VAR_DECL", "EMPTY_VAR_DECL", yylineno); ;}
    break;

  case 10:
#line 114 "parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        (yyval.node)->add_child((yyvsp[(2) - (2)].node));
    ;}
    break;

  case 11:
#line 122 "parser.y"
    {
        (yyval.node) = new Node("VAR_DECL", (yyvsp[(2) - (3)].sval), yylineno);
        (yyval.node)->add_child((yyvsp[(1) - (3)].node));
    ;}
    break;

  case 12:
#line 129 "parser.y"
    { (yyval.node) = new Node("EMPTY_METHOD_DECL", "EMPTY_METHOD_DECL", yylineno); ;}
    break;

  case 13:
#line 131 "parser.y"
    {
        (yyval.node) = (yyvsp[(1) - (2)].node);
        (yyval.node)->add_child((yyvsp[(2) - (2)].node));
    ;}
    break;

  case 14:
#line 139 "parser.y"
    {
        (yyval.node) = new Node("METHOD_DECL", (yyvsp[(3) - (13)].sval), yylineno);
        (yyval.node)->add_child((yyvsp[(2) - (13)].node));
        (yyval.node)->add_child((yyvsp[(5) - (13)].node));
        (yyval.node)->add_child((yyvsp[(8) - (13)].node));
        (yyval.node)->add_child((yyvsp[(9) - (13)].node));
    ;}
    break;

  case 15:
#line 149 "parser.y"
    { (yyval.node) = new Node("EMPTY_PARAM", "EMPTY_PARAM", yylineno); ;}
    break;

  case 16:
#line 151 "parser.y"
    {
        (yyval.node) = new Node("PARAM", (yyvsp[(2) - (2)].sval), yylineno);
        (yyval.node)->add_child((yyvsp[(1) - (2)].node));
    ;}
    break;

  case 17:
#line 158 "parser.y"
    { (yyval.node) = new Node("INT_TYPE", "int", yylineno); ;}
    break;

  case 18:
#line 159 "parser.y"
    { (yyval.node) = new Node("BOOLEAN_TYPE", "boolean", yylineno); ;}
    break;

  case 19:
#line 160 "parser.y"
    { (yyval.node) = new Node("IDENTIFIER", (yyvsp[(1) - (1)].sval), yylineno); ;}
    break;

  case 20:
#line 165 "parser.y"
    {
        (yyval.node) = new Node("StatementList", "StatementList", yylineno);
        (yyval.node)->add_child((yyvsp[(1) - (2)].node));
        (yyval.node)->add_child((yyvsp[(2) - (2)].node));
    ;}
    break;

  case 21:
#line 171 "parser.y"
    {
        (yyval.node) = NULL;
    ;}
    break;

  case 22:
#line 177 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 23:
#line 179 "parser.y"
    {
        (yyval.node) = new Node("IF", "if", yylineno);
        (yyval.node)->add_child((yyvsp[(3) - (5)].node));  // Expression is a Node*
        (yyval.node)->add_child((yyvsp[(5) - (5)].node));  // Statement is a Node*
    ;}
    break;

  case 24:
#line 185 "parser.y"
    {
        (yyval.node) = new Node("IF_ELSE", "if_else", yylineno);
        (yyval.node)->add_child((yyvsp[(3) - (7)].node));  // Expression is a Node*
        (yyval.node)->add_child((yyvsp[(5) - (7)].node));  // Statement is a Node*
        (yyval.node)->add_child((yyvsp[(7) - (7)].node));  // Else Statement is a Node*
    ;}
    break;

  case 25:
#line 192 "parser.y"
    {
        (yyval.node) = new Node("WHILE", "while", yylineno);
        (yyval.node)->add_child((yyvsp[(3) - (5)].node));  // Expression is a Node*
        (yyval.node)->add_child((yyvsp[(5) - (5)].node));  // Statement is a Node*
    ;}
    break;

  case 26:
#line 198 "parser.y"
    {
        (yyval.node) = new Node("PRINTLN", "println", yylineno);
        (yyval.node)->add_child((yyvsp[(3) - (5)].node));  // Expression is a Node*
    ;}
    break;

  case 27:
#line 203 "parser.y"
    {
        (yyval.node) = new Node("ASSIGN", "=", yylineno);
        (yyval.node)->add_child(new Node("IDENTIFIER", (yyvsp[(1) - (4)].sval), yylineno));  // $1 is IDENTIFIER, which is a string
        (yyval.node)->add_child((yyvsp[(3) - (4)].node));  // Expression is a Node*
    ;}
    break;

  case 28:
#line 211 "parser.y"
    { (yyval.node) = new Node("AND", "&&", yylineno); (yyval.node)->add_child((yyvsp[(1) - (3)].node)); (yyval.node)->add_child((yyvsp[(3) - (3)].node)); ;}
    break;

  case 29:
#line 212 "parser.y"
    { (yyval.node) = new Node("OR", "||", yylineno); (yyval.node)->add_child((yyvsp[(1) - (3)].node)); (yyval.node)->add_child((yyvsp[(3) - (3)].node)); ;}
    break;

  case 30:
#line 213 "parser.y"
    { (yyval.node) = new Node("LT", "<", yylineno); (yyval.node)->add_child((yyvsp[(1) - (3)].node)); (yyval.node)->add_child((yyvsp[(3) - (3)].node)); ;}
    break;

  case 31:
#line 214 "parser.y"
    { (yyval.node) = new Node("GT", ">", yylineno); (yyval.node)->add_child((yyvsp[(1) - (3)].node)); (yyval.node)->add_child((yyvsp[(3) - (3)].node)); ;}
    break;

  case 32:
#line 215 "parser.y"
    { (yyval.node) = new Node("EQUAL", "==", yylineno); (yyval.node)->add_child((yyvsp[(1) - (3)].node)); (yyval.node)->add_child((yyvsp[(3) - (3)].node)); ;}
    break;

  case 33:
#line 216 "parser.y"
    { (yyval.node) = new Node("PLUS", "+", yylineno); (yyval.node)->add_child((yyvsp[(1) - (3)].node)); (yyval.node)->add_child((yyvsp[(3) - (3)].node)); ;}
    break;

  case 34:
#line 217 "parser.y"
    { (yyval.node) = new Node("MINUS", "-", yylineno); (yyval.node)->add_child((yyvsp[(1) - (3)].node)); (yyval.node)->add_child((yyvsp[(3) - (3)].node)); ;}
    break;

  case 35:
#line 218 "parser.y"
    { (yyval.node) = new Node("MULT", "*", yylineno); (yyval.node)->add_child((yyvsp[(1) - (3)].node)); (yyval.node)->add_child((yyvsp[(3) - (3)].node)); ;}
    break;

  case 36:
#line 219 "parser.y"
    { (yyval.node) = new Node("NOT", "!", yylineno); (yyval.node)->add_child((yyvsp[(2) - (2)].node)); ;}
    break;

  case 37:
#line 220 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 38:
#line 221 "parser.y"
    { (yyval.node) = new Node("METHOD_CALL", ".", yylineno); (yyval.node)->add_child((yyvsp[(1) - (6)].node)); (yyval.node)->add_child(new Node("IDENTIFIER", (yyvsp[(3) - (6)].sval), yylineno)); (yyval.node)->add_child((yyvsp[(5) - (6)].node)); ;}
    break;

  case 39:
#line 222 "parser.y"
    { (yyval.node) = new Node("NUMBER", std::to_string((yyvsp[(1) - (1)].ival)), yylineno); ;}
    break;

  case 40:
#line 223 "parser.y"
    { (yyval.node) = new Node("IDENTIFIER", (yyvsp[(1) - (1)].sval), yylineno); ;}
    break;

  case 41:
#line 224 "parser.y"
    { (yyval.node) = new Node("STRING_LITERAL", (yyvsp[(1) - (1)].sval), yylineno); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1780 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 232 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Parse error: %s at line %d, token: %s\n", s, yylineno, yytext);
}

int main() {
    yydebug = 1;  // Enable Bison debug output

    if (yyparse() == 0) {
        printf("Parsing completed successfully!\n");
        if (root) {
            root->print_tree();
            root->generate_tree();
        }
    } else {
        printf("Parsing failed.\n");
    }
    return 0;
}
