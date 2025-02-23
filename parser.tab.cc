/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.yy"

#include "Node.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "parser.tab.h"

using namespace std;

extern int yylineno; 
extern int yylex();  // Lexical analyzer function
extern char *yytext;  // Lexer text buffer
void yyerror(const char *s);  // Error handler

Node* root = nullptr;  // Global root for AST


#line 89 "parser.tab.cc"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hh"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASS = 3,                      /* CLASS  */
  YYSYMBOL_PUBLIC = 4,                     /* PUBLIC  */
  YYSYMBOL_STATIC = 5,                     /* STATIC  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_MAIN = 7,                       /* MAIN  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_BOOLEAN = 9,                    /* BOOLEAN  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_PRINTLN = 14,                   /* PRINTLN  */
  YYSYMBOL_THIS = 15,                      /* THIS  */
  YYSYMBOL_NEW = 16,                       /* NEW  */
  YYSYMBOL_TRUE = 17,                      /* TRUE  */
  YYSYMBOL_FALSE = 18,                     /* FALSE  */
  YYSYMBOL_LPAREN = 19,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 20,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 21,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 22,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 23,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 24,                  /* RBRACKET  */
  YYSYMBOL_SEMICOLON = 25,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_DOT = 27,                       /* DOT  */
  YYSYMBOL_ASSIGN = 28,                    /* ASSIGN  */
  YYSYMBOL_AND = 29,                       /* AND  */
  YYSYMBOL_OR = 30,                        /* OR  */
  YYSYMBOL_EQUAL = 31,                     /* EQUAL  */
  YYSYMBOL_LT = 32,                        /* LT  */
  YYSYMBOL_GT = 33,                        /* GT  */
  YYSYMBOL_PLUS = 34,                      /* PLUS  */
  YYSYMBOL_MINUS = 35,                     /* MINUS  */
  YYSYMBOL_MULT = 36,                      /* MULT  */
  YYSYMBOL_NOT = 37,                       /* NOT  */
  YYSYMBOL_IDENTIFIER = 38,                /* IDENTIFIER  */
  YYSYMBOL_STRING = 39,                    /* STRING  */
  YYSYMBOL_STRING_LITERAL = 40,            /* STRING_LITERAL  */
  YYSYMBOL_NUMBER = 41,                    /* NUMBER  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_Goal = 43,                      /* Goal  */
  YYSYMBOL_MainClass = 44,                 /* MainClass  */
  YYSYMBOL_MainArgs = 45,                  /* MainArgs  */
  YYSYMBOL_ClassDeclarations = 46,         /* ClassDeclarations  */
  YYSYMBOL_ClassDeclaration = 47,          /* ClassDeclaration  */
  YYSYMBOL_VarDeclarations = 48,           /* VarDeclarations  */
  YYSYMBOL_VarDeclaration = 49,            /* VarDeclaration  */
  YYSYMBOL_MethodDeclarations = 50,        /* MethodDeclarations  */
  YYSYMBOL_MethodDeclaration = 51,         /* MethodDeclaration  */
  YYSYMBOL_ParamList = 52,                 /* ParamList  */
  YYSYMBOL_Type = 53,                      /* Type  */
  YYSYMBOL_StatementList = 54,             /* StatementList  */
  YYSYMBOL_Statement = 55,                 /* Statement  */
  YYSYMBOL_Expression = 56                 /* Expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  40
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  104

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    63,    63,    72,    84,    89,    93,    94,   102,   111,
     112,   120,   128,   129,   137,   148,   149,   157,   158,   159,
     162,   168,   172,   173,   179,   186,   192,   197,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CLASS", "PUBLIC",
  "STATIC", "VOID", "MAIN", "INT", "BOOLEAN", "RETURN", "IF", "ELSE",
  "WHILE", "PRINTLN", "THIS", "NEW", "TRUE", "FALSE", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "SEMICOLON", "COMMA", "DOT",
  "ASSIGN", "AND", "OR", "EQUAL", "LT", "GT", "PLUS", "MINUS", "MULT",
  "NOT", "IDENTIFIER", "STRING", "STRING_LITERAL", "NUMBER", "$accept",
  "Goal", "MainClass", "MainArgs", "ClassDeclarations", "ClassDeclaration",
  "VarDeclarations", "VarDeclaration", "MethodDeclarations",
  "MethodDeclaration", "ParamList", "Type", "StatementList", "Statement",
  "Expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,   -28,    15,   -69,    -4,   -69,    37,    14,     5,   -69,
      42,    62,    51,   -69,   104,    -3,    39,   -69,   -69,   -69,
     -69,    -2,    74,    94,    -3,   -69,   -69,    88,   111,    97,
     -69,   112,   118,   100,    -3,   -69,   119,   120,   103,   121,
     122,   -69,     0,   -69,   125,   126,   127,     0,   123,   128,
       0,    23,    22,    22,    22,   130,    22,   131,   -69,   123,
     137,    22,    22,   -69,   -69,   -69,    19,    36,    44,   -69,
      73,   -69,    22,    61,   -69,     0,    22,    22,    22,    22,
      22,    22,    22,    22,     0,   124,   -69,    85,   -69,   136,
      91,    53,    96,    65,    65,   129,   129,   -69,   -69,   -69,
     132,     0,   -69,   -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     6,     0,     1,     2,     0,     0,     7,
       0,     0,     0,     9,     0,    12,     0,    17,    18,    19,
      10,     0,     0,     0,     0,     8,    13,     0,     0,     0,
      11,     0,     0,     5,    15,     4,     0,     0,     0,     0,
       0,    16,    21,     9,     0,     0,     0,    21,     0,     0,
      21,    21,     0,     0,     0,     0,     0,     0,    20,    19,
       0,     0,     0,    39,    40,    38,     0,     0,     0,    22,
       0,     3,     0,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,    37,    23,
      28,    29,    32,    30,    31,    33,    34,    35,    25,    26,
       0,     0,    14,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,   -69,   -69,   -69,   113,   -69,   -69,   -69,
     -69,   -12,    -5,   -68,   -53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,    36,     6,     9,    15,    20,    21,    26,
      37,    22,    49,    50,    66
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      67,    68,    24,    70,     1,    17,    18,    89,    73,    74,
       4,    44,    29,    45,    46,     5,    98,     7,    10,    87,
      25,    47,    38,    90,    91,    92,    93,    94,    95,    96,
      97,    17,    18,   103,    44,    19,    45,    46,    48,    75,
       8,    61,    55,    11,    47,    58,    60,    12,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    14,    23,    62,
      63,    59,    64,    65,    85,    76,    77,    78,    79,    80,
      81,    82,    83,    76,    77,    78,    79,    80,    81,    82,
      83,    88,    76,    13,    78,    79,    80,    81,    82,    83,
      76,    77,    78,    79,    80,    81,    82,    83,    86,    81,
      82,    83,    76,    77,    78,    79,    80,    81,    82,    83,
     100,    16,    27,    30,    76,    77,    78,    79,    80,    81,
      82,    83,    78,    79,    80,    81,    82,    83,    79,    80,
      81,    82,    83,    28,    31,    32,    33,    34,    35,    39,
      40,    41,    42,    43,    52,    53,    54,    72,   101,    99,
      57,    56,    69,    71,   102,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,    83
};

static const yytype_int8 yycheck[] =
{
      53,    54,     4,    56,     3,     8,     9,    75,    61,    62,
      38,    11,    24,    13,    14,     0,    84,    21,     4,    72,
      22,    21,    34,    76,    77,    78,    79,    80,    81,    82,
      83,     8,     9,   101,    11,    38,    13,    14,    38,    20,
       3,    19,    47,    38,    21,    50,    51,     5,    29,    30,
      31,    32,    33,    34,    35,    36,    20,     6,    19,    37,
      38,    38,    40,    41,    20,    29,    30,    31,    32,    33,
      34,    35,    36,    29,    30,    31,    32,    33,    34,    35,
      36,    20,    29,    21,    31,    32,    33,    34,    35,    36,
      29,    30,    31,    32,    33,    34,    35,    36,    25,    34,
      35,    36,    29,    30,    31,    32,    33,    34,    35,    36,
      25,     7,    38,    25,    29,    30,    31,    32,    33,    34,
      35,    36,    31,    32,    33,    34,    35,    36,    32,    33,
      34,    35,    36,    39,    23,    38,    24,    19,    38,    20,
      20,    38,    21,    21,    19,    19,    19,    10,    12,    25,
      22,    28,    22,    22,    22,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    43,    44,    38,     0,    46,    21,     3,    47,
       4,    38,     5,    21,     6,    48,     7,     8,     9,    38,
      49,    50,    53,    19,     4,    22,    51,    38,    39,    53,
      25,    23,    38,    24,    19,    38,    45,    52,    53,    20,
      20,    38,    21,    21,    11,    13,    14,    21,    38,    54,
      55,    48,    19,    19,    19,    54,    28,    22,    54,    38,
      54,    19,    37,    38,    40,    41,    56,    56,    56,    22,
      56,    22,    10,    56,    56,    20,    29,    30,    31,    32,
      33,    34,    35,    36,    20,    20,    25,    56,    20,    55,
      56,    56,    56,    56,    56,    56,    56,    56,    55,    25,
      25,    12,    22,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    45,    45,    46,    46,    47,    48,
      48,    49,    50,    50,    51,    52,    52,    53,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,    17,     1,     0,     0,     2,     6,     0,
       2,     3,     0,     2,    13,     0,     2,     1,     1,     1,
       2,     0,     3,     5,     7,     5,     5,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 33 "parser.yy"
            { delete ((*yyvaluep).sval); }
#line 946 "parser.tab.cc"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 33 "parser.yy"
            { delete ((*yyvaluep).sval); }
#line 952 "parser.tab.cc"
        break;

    case YYSYMBOL_STRING_LITERAL: /* STRING_LITERAL  */
#line 33 "parser.yy"
            { delete ((*yyvaluep).sval); }
#line 958 "parser.tab.cc"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Goal: MainClass ClassDeclarations  */
#line 64 "parser.yy"
    {
        root = new Node("PROGRAM", "PROGRAM", yylineno);
        root->add_child((yyvsp[-1].node));
        root->add_child((yyvsp[0].node));
    }
#line 1232 "parser.tab.cc"
    break;

  case 3: /* MainClass: CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN LPAREN STRING LBRACKET RBRACKET MainArgs RPAREN LBRACE StatementList RBRACE RBRACE  */
#line 73 "parser.yy"
    {
        (yyval.node) = new Node("MainClass", "MainClass", yylineno);
        (yyval.node)->add_child(new Node("IDENTIFIER", *(yyvsp[-15].sval), yylineno));
        (yyval.node)->add_child(new Node("STRING_TYPE", *(yyvsp[-8].sval), yylineno));  // Use $9 explicitly
        (yyval.node)->add_child(new Node("ARRAY_TYPE", "String[]", yylineno));  // Explicitly use $9
        if ((yyvsp[-5].node)) (yyval.node)->add_child((yyvsp[-5].node));
        if ((yyvsp[-2].node)) (yyval.node)->add_child((yyvsp[-2].node));
    }
#line 1245 "parser.tab.cc"
    break;

  case 4: /* MainArgs: IDENTIFIER  */
#line 85 "parser.yy"
    {
        (yyval.node) = new Node("MainArgs", "MainArgs", yylineno);
        (yyval.node)->add_child(new Node("IDENTIFIER", *(yyvsp[0].sval), yylineno));
    }
#line 1254 "parser.tab.cc"
    break;

  case 5: /* MainArgs: %empty  */
#line 89 "parser.yy"
      { (yyval.node) = nullptr; }
#line 1260 "parser.tab.cc"
    break;

  case 6: /* ClassDeclarations: %empty  */
#line 93 "parser.yy"
    { (yyval.node) = new Node("EMPTY_CLASS_DECL", "EMPTY_CLASS_DECL", yylineno); }
#line 1266 "parser.tab.cc"
    break;

  case 7: /* ClassDeclarations: ClassDeclarations ClassDeclaration  */
#line 95 "parser.yy"
    {
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->add_child((yyvsp[0].node));
    }
#line 1275 "parser.tab.cc"
    break;

  case 8: /* ClassDeclaration: CLASS IDENTIFIER LBRACE VarDeclarations MethodDeclarations RBRACE  */
#line 103 "parser.yy"
    {
        (yyval.node) = new Node("CLASS_DECL", *(yyvsp[-4].sval), yylineno);
        (yyval.node)->add_child((yyvsp[-2].node));
        (yyval.node)->add_child((yyvsp[-1].node));
    }
#line 1285 "parser.tab.cc"
    break;

  case 9: /* VarDeclarations: %empty  */
#line 111 "parser.yy"
    { (yyval.node) = new Node("EMPTY_VAR_DECL", "EMPTY_VAR_DECL", yylineno); }
#line 1291 "parser.tab.cc"
    break;

  case 10: /* VarDeclarations: VarDeclarations VarDeclaration  */
#line 113 "parser.yy"
    {
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->add_child((yyvsp[0].node));
    }
#line 1300 "parser.tab.cc"
    break;

  case 11: /* VarDeclaration: Type IDENTIFIER SEMICOLON  */
#line 121 "parser.yy"
    {
        (yyval.node) = new Node("VAR_DECL", (yyvsp[-1].sval), yylineno);
        (yyval.node)->add_child(*(yyvsp[-2].node));
    }
#line 1309 "parser.tab.cc"
    break;

  case 12: /* MethodDeclarations: %empty  */
#line 128 "parser.yy"
    { (yyval.node) = new Node("EMPTY_METHOD_DECL", "EMPTY_METHOD_DECL", yylineno); }
#line 1315 "parser.tab.cc"
    break;

  case 13: /* MethodDeclarations: MethodDeclarations MethodDeclaration  */
#line 130 "parser.yy"
    {
        (yyval.node) = (yyvsp[-1].node);
        (yyval.node)->add_child((yyvsp[0].node));
    }
#line 1324 "parser.tab.cc"
    break;

  case 14: /* MethodDeclaration: PUBLIC Type IDENTIFIER LPAREN ParamList RPAREN LBRACE VarDeclarations StatementList RETURN Expression SEMICOLON RBRACE  */
#line 138 "parser.yy"
    {
        (yyval.node) = new Node("METHOD_DECL", *(yyvsp[-10].sval), yylineno);
        (yyval.node)->add_child((yyvsp[-11].node));
        (yyval.node)->add_child((yyvsp[-8].node));
        (yyval.node)->add_child((yyvsp[-5].node));
        (yyval.node)->add_child((yyvsp[-4].node));
    }
#line 1336 "parser.tab.cc"
    break;

  case 15: /* ParamList: %empty  */
#line 148 "parser.yy"
    { (yyval.node) = new Node("EMPTY_PARAM", "EMPTY_PARAM", yylineno); }
#line 1342 "parser.tab.cc"
    break;

  case 16: /* ParamList: Type IDENTIFIER  */
#line 150 "parser.yy"
    {
        (yyval.node) = new Node("PARAM", *(yyvsp[0].sval), yylineno);
        (yyval.node)->add_child((yyvsp[-1].node));
    }
#line 1351 "parser.tab.cc"
    break;

  case 17: /* Type: INT  */
#line 157 "parser.yy"
        { (yyval.node) = new Node("INT_TYPE", "int", yylineno); }
#line 1357 "parser.tab.cc"
    break;

  case 18: /* Type: BOOLEAN  */
#line 158 "parser.yy"
              { (yyval.node) = new Node("BOOLEAN_TYPE", "boolean", yylineno); }
#line 1363 "parser.tab.cc"
    break;

  case 19: /* Type: IDENTIFIER  */
#line 159 "parser.yy"
                 { (yyval.node) = new Node("IDENTIFIER", *(yyvsp[0].sval), yylineno); delete (yyvsp[0].sval); }
#line 1369 "parser.tab.cc"
    break;

  case 20: /* StatementList: Statement StatementList  */
#line 163 "parser.yy"
    {
        (yyval.node) = new Node("StatementList", "StatementList", yylineno);
        (yyval.node)->add_child((yyvsp[-1].node));
        (yyval.node)->add_child((yyvsp[0].node));
    }
#line 1379 "parser.tab.cc"
    break;

  case 21: /* StatementList: %empty  */
#line 168 "parser.yy"
      { (yyval.node) = nullptr; }
#line 1385 "parser.tab.cc"
    break;

  case 22: /* Statement: LBRACE StatementList RBRACE  */
#line 172 "parser.yy"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 1391 "parser.tab.cc"
    break;

  case 23: /* Statement: IF LPAREN Expression RPAREN Statement  */
#line 174 "parser.yy"
    {
        (yyval.node) = new Node("IF", "if", yylineno);
        (yyval.node)->add_child((yyvsp[-2].node));
        (yyval.node)->add_child((yyvsp[0].node));
    }
#line 1401 "parser.tab.cc"
    break;

  case 24: /* Statement: IF LPAREN Expression RPAREN Statement ELSE Statement  */
#line 180 "parser.yy"
    {
        (yyval.node) = new Node("IF_ELSE", "if_else", yylineno);
        (yyval.node)->add_child((yyvsp[-4].node));
        (yyval.node)->add_child((yyvsp[-2].node));
        (yyval.node)->add_child((yyvsp[0].node));
    }
#line 1412 "parser.tab.cc"
    break;

  case 25: /* Statement: WHILE LPAREN Expression RPAREN Statement  */
#line 187 "parser.yy"
    {
        (yyval.node) = new Node("WHILE", "while", yylineno);
        (yyval.node)->add_child((yyvsp[-2].node));
        (yyval.node)->add_child((yyvsp[0].node));
    }
#line 1422 "parser.tab.cc"
    break;

  case 26: /* Statement: PRINTLN LPAREN Expression RPAREN SEMICOLON  */
#line 193 "parser.yy"
    {
        (yyval.node) = new Node("PRINTLN", "println", yylineno);
        (yyval.node)->add_child((yyvsp[-2].node));
    }
#line 1431 "parser.tab.cc"
    break;

  case 27: /* Statement: IDENTIFIER ASSIGN Expression SEMICOLON  */
#line 198 "parser.yy"
    {
        (yyval.node) = new Node("ASSIGN", "=", yylineno);
        (yyval.node)->add_child(new Node("IDENTIFIER", *(yyvsp[-3].sval), yylineno));
        (yyval.node)->add_child((yyvsp[-1].node));
    }
#line 1441 "parser.tab.cc"
    break;

  case 28: /* Expression: Expression AND Expression  */
#line 206 "parser.yy"
                              { (yyval.node) = new Node("AND", "&&", yylineno); (yyval.node)->add_child((yyvsp[-2].node)); (yyval.node)->add_child((yyvsp[0].node)); }
#line 1447 "parser.tab.cc"
    break;

  case 29: /* Expression: Expression OR Expression  */
#line 207 "parser.yy"
                               { (yyval.node) = new Node("OR", "||", yylineno); (yyval.node)->add_child((yyvsp[-2].node)); (yyval.node)->add_child((yyvsp[0].node)); }
#line 1453 "parser.tab.cc"
    break;

  case 30: /* Expression: Expression LT Expression  */
#line 208 "parser.yy"
                               { (yyval.node) = new Node("LT", "<", yylineno); (yyval.node)->add_child((yyvsp[-2].node)); (yyval.node)->add_child((yyvsp[0].node)); }
#line 1459 "parser.tab.cc"
    break;

  case 31: /* Expression: Expression GT Expression  */
#line 209 "parser.yy"
                               { (yyval.node) = new Node("GT", ">", yylineno); (yyval.node)->add_child((yyvsp[-2].node)); (yyval.node)->add_child((yyvsp[0].node)); }
#line 1465 "parser.tab.cc"
    break;

  case 32: /* Expression: Expression EQUAL Expression  */
#line 210 "parser.yy"
                                  { (yyval.node) = new Node("EQUAL", "==", yylineno); (yyval.node)->add_child((yyvsp[-2].node)); (yyval.node)->add_child((yyvsp[0].node)); }
#line 1471 "parser.tab.cc"
    break;

  case 33: /* Expression: Expression PLUS Expression  */
#line 211 "parser.yy"
                                 { (yyval.node) = new Node("PLUS", "+", yylineno); (yyval.node)->add_child((yyvsp[-2].node)); (yyval.node)->add_child((yyvsp[0].node)); }
#line 1477 "parser.tab.cc"
    break;

  case 34: /* Expression: Expression MINUS Expression  */
#line 212 "parser.yy"
                                  { (yyval.node) = new Node("MINUS", "-", yylineno); (yyval.node)->add_child((yyvsp[-2].node)); (yyval.node)->add_child((yyvsp[0].node)); }
#line 1483 "parser.tab.cc"
    break;

  case 35: /* Expression: Expression MULT Expression  */
#line 213 "parser.yy"
                                 { (yyval.node) = new Node("MULT", "*", yylineno); (yyval.node)->add_child((yyvsp[-2].node)); (yyval.node)->add_child((yyvsp[0].node)); }
#line 1489 "parser.tab.cc"
    break;

  case 36: /* Expression: NOT Expression  */
#line 214 "parser.yy"
                     { (yyval.node) = new Node("NOT", "!", yylineno); (yyval.node)->add_child((yyvsp[0].node)); }
#line 1495 "parser.tab.cc"
    break;

  case 37: /* Expression: LPAREN Expression RPAREN  */
#line 215 "parser.yy"
                               { (yyval.node) = (yyvsp[-1].node); }
#line 1501 "parser.tab.cc"
    break;

  case 38: /* Expression: NUMBER  */
#line 216 "parser.yy"
             { (yyval.node) = new Node("NUMBER", to_string((yyvsp[0].ival)), yylineno); }
#line 1507 "parser.tab.cc"
    break;

  case 39: /* Expression: IDENTIFIER  */
#line 217 "parser.yy"
                 { (yyval.node) = new Node("IDENTIFIER", *(yyvsp[0].sval), yylineno); }
#line 1513 "parser.tab.cc"
    break;

  case 40: /* Expression: STRING_LITERAL  */
#line 218 "parser.yy"
                     { (yyval.node) = new Node("STRING_LITERAL", *(yyvsp[0].sval), yylineno); }
#line 1519 "parser.tab.cc"
    break;


#line 1523 "parser.tab.cc"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 221 "parser.yy"


void yyerror(const char *s) {
    std::cerr << "ERROR: " << s << " at line " << yylineno << ", token: " << yytext << std::endl;
}

int main() {
    yydebug = 1;  // Debug mode

    if (yyparse() == 0) {
        std::cout << "Parsing completed successfully!\n";
        if (root) {
            root->print_tree();
            delete root;
        }
    } else {
        std::cout << "Parsing failed.\n";
    }

    return 0;
}
