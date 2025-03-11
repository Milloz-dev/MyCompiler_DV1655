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
  YYSYMBOL_ERROR = 42,                     /* ERROR  */
  YYSYMBOL_LOWER_THAN_ELSE = 43,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_Goal = 45,                      /* Goal  */
  YYSYMBOL_MainClass = 46,                 /* MainClass  */
  YYSYMBOL_ClassDeclarations = 47,         /* ClassDeclarations  */
  YYSYMBOL_ClassDeclaration = 48,          /* ClassDeclaration  */
  YYSYMBOL_VarDeclarations = 49,           /* VarDeclarations  */
  YYSYMBOL_VarDeclaration = 50,            /* VarDeclaration  */
  YYSYMBOL_MethodDeclarations = 51,        /* MethodDeclarations  */
  YYSYMBOL_MethodDeclaration = 52,         /* MethodDeclaration  */
  YYSYMBOL_Statement = 53,                 /* Statement  */
  YYSYMBOL_StatementList = 54,             /* StatementList  */
  YYSYMBOL_Type = 55,                      /* Type  */
  YYSYMBOL_ParamList = 56,                 /* ParamList  */
  YYSYMBOL_Expression = 57                 /* Expression  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 8 "parser.yy"

    extern "C" int yylex();
    extern int yylineno;
    // yyerror is defined here to avoid conflicts in the grammar section.
    void yyerror(const char *s) {
        std::cerr << "Syntax error at line " << yylineno << ": " << s << std::endl;
    }
    std::unique_ptr<Node> root;

#line 171 "parser.tab.cc"

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
#define YYLAST   174

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  42
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  108

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   298


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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    62,    70,    74,    79,    87,    91,    96,
     103,   107,   112,   123,   128,   133,   139,   144,   150,   155,
     160,   163,   166,   172,   177,   182,   187,   192,   197,   202,
     207,   212,   217,   222,   227,   233,   237,   242,   247,   250,
     253,   256,   259
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
  "NOT", "IDENTIFIER", "STRING", "STRING_LITERAL", "NUMBER", "ERROR",
  "LOWER_THAN_ELSE", "$accept", "Goal", "MainClass", "ClassDeclarations",
  "ClassDeclaration", "VarDeclarations", "VarDeclaration",
  "MethodDeclarations", "MethodDeclaration", "Statement", "StatementList",
  "Type", "ParamList", "Expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-66)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -30,    16,   -66,    28,   -66,    48,    58,    25,   -66,
      56,    45,    78,   -66,   113,    -4,   102,   -66,   -66,   -66,
     -66,    -3,    84,    94,    -4,   -66,   -66,    98,   114,   100,
     -66,   119,   122,   137,    -4,   118,   123,   -13,   121,   -66,
     138,    -4,   139,   141,   143,   121,   121,   142,   -66,   125,
      27,    27,    27,   144,   -66,   -66,    29,   -66,   -66,   -66,
      27,    27,   117,   -66,    40,    57,    65,   -66,   155,    82,
     -66,    -4,    27,    27,   121,    27,    27,    27,    27,    27,
      27,    27,    27,   121,   145,    27,   -66,    15,    95,    74,
     156,    47,   115,   120,   -14,   -14,   131,   131,   -66,   -66,
     -66,    23,   -66,   -66,   121,   147,   -66,   -66
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     5,     0,     1,     2,     0,     0,     4,
       0,     0,     0,     8,     0,    11,     0,    20,    21,    22,
       7,     0,     0,     0,     0,     6,    10,     0,     0,     0,
       9,     0,     0,     0,    25,     0,     0,     0,    19,    23,
       0,     0,     0,     0,     0,    19,    19,     0,     8,     0,
       0,     0,     0,     0,    18,     3,    19,    24,    40,    41,
       0,     0,    42,    39,     0,     0,     0,    17,     0,     0,
      35,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,    34,
      14,    29,    30,    31,    32,    33,    26,    27,    28,    16,
      13,     0,    36,    37,     0,     0,    15,    12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -66,   -66,   -66,   -66,   124,   -66,   -66,   -66,   -65,
     -31,   -24,   103,   -49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     6,     9,    15,    20,    21,    26,    46,
      47,    22,    37,    64
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      29,    24,    65,    66,    17,    18,     1,    40,     4,    90,
      36,    69,    70,    41,    53,    54,     5,    49,    99,    25,
      80,    81,    82,    88,    89,    68,    91,    92,    93,    94,
      95,    96,    97,    98,    19,   102,   101,    17,    18,   106,
      42,    41,    43,    44,    58,    59,    60,    36,   105,     7,
      45,     8,    75,    76,    77,    78,    79,    80,    81,    82,
      74,    12,    10,    11,    61,    62,    13,    19,    63,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    77,    78,
      79,    80,    81,    82,    14,    84,    75,    76,    77,    78,
      79,    80,    81,    82,    75,    76,    77,    78,    79,    80,
      81,    82,    86,    75,    76,    77,    78,    79,    80,    81,
      82,    75,    76,    77,    78,    79,    80,    81,    82,   103,
      16,    23,    27,    30,    75,    76,    77,    78,    79,    80,
      81,    82,    42,    28,    43,    44,    71,    31,    32,    38,
      72,    34,    45,    33,    75,    73,    77,    78,    79,    80,
      81,    82,    78,    79,    80,    81,    82,    35,    50,    48,
      51,    39,    52,    57,    55,    85,    67,    82,   104,   107,
     100,     0,    56,     0,    87
};

static const yytype_int8 yycheck[] =
{
      24,     4,    51,    52,     8,     9,     3,    20,    38,    74,
      34,    60,    61,    26,    45,    46,     0,    41,    83,    22,
      34,    35,    36,    72,    73,    56,    75,    76,    77,    78,
      79,    80,    81,    82,    38,    20,    85,     8,     9,   104,
      11,    26,    13,    14,    17,    18,    19,    71,    25,    21,
      21,     3,    29,    30,    31,    32,    33,    34,    35,    36,
      20,     5,     4,    38,    37,    38,    21,    38,    41,    29,
      30,    31,    32,    33,    34,    35,    36,    20,    31,    32,
      33,    34,    35,    36,     6,    20,    29,    30,    31,    32,
      33,    34,    35,    36,    29,    30,    31,    32,    33,    34,
      35,    36,    20,    29,    30,    31,    32,    33,    34,    35,
      36,    29,    30,    31,    32,    33,    34,    35,    36,    24,
       7,    19,    38,    25,    29,    30,    31,    32,    33,    34,
      35,    36,    11,    39,    13,    14,    19,    23,    38,    21,
      23,    19,    21,    24,    29,    28,    31,    32,    33,    34,
      35,    36,    32,    33,    34,    35,    36,    20,    19,    21,
      19,    38,    19,    38,    22,    10,    22,    36,    12,    22,
      25,    -1,    48,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    45,    46,    38,     0,    47,    21,     3,    48,
       4,    38,     5,    21,     6,    49,     7,     8,     9,    38,
      50,    51,    55,    19,     4,    22,    52,    38,    39,    55,
      25,    23,    38,    24,    19,    20,    55,    56,    21,    38,
      20,    26,    11,    13,    14,    21,    53,    54,    21,    55,
      19,    19,    19,    54,    54,    22,    49,    38,    17,    18,
      19,    37,    38,    41,    57,    57,    57,    22,    54,    57,
      57,    19,    23,    28,    20,    29,    30,    31,    32,    33,
      34,    35,    36,    20,    20,    10,    20,    56,    57,    57,
      53,    57,    57,    57,    57,    57,    57,    57,    57,    53,
      25,    57,    20,    24,    12,    25,    53,    22
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    47,    47,    48,    49,    49,    50,
      51,    51,    52,    53,    53,    53,    53,    53,    54,    54,
      55,    55,    55,    56,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,    15,     2,     0,     6,     2,     0,     3,
       2,     0,    13,     5,     5,     7,     5,     3,     2,     0,
       1,     1,     1,     2,     4,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     4,     4,     3,     1,
       1,     1,     1
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
  YY_USE (yykind);
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
#line 55 "parser.yy"
                                {
        root = std::make_unique<Node>("PROGRAM", "PROGRAM", yylineno);
        root->children.push_back(std::move((yyvsp[-1].node)));
        if ((yyvsp[0].node)) root->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1205 "parser.tab.cc"
    break;

  case 3: /* MainClass: CLASS IDENTIFIER LBRACE PUBLIC STATIC VOID MAIN LPAREN STRING LBRACKET RBRACKET RPAREN LBRACE StatementList RBRACE  */
#line 62 "parser.yy"
                                                                                                                       {
        (yyval.node) = std::make_unique<Node>("MainClass", *(yyvsp[-13].sval), yylineno);
        delete (yyvsp[-13].sval);
        (yyval.node)->children.push_back(std::make_unique<Node>("MainArgType", "String[]", yylineno));
        (yyval.node)->children.push_back(std::move((yyvsp[-1].node)));
    }
#line 1216 "parser.tab.cc"
    break;

  case 4: /* ClassDeclarations: ClassDeclarations ClassDeclaration  */
#line 70 "parser.yy"
                                       {
        (yyval.node) = std::move((yyvsp[-1].node));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1225 "parser.tab.cc"
    break;

  case 5: /* ClassDeclarations: %empty  */
#line 74 "parser.yy"
             {
        (yyval.node) = std::make_unique<Node>("ClassDeclarations", "Empty", yylineno);
    }
#line 1233 "parser.tab.cc"
    break;

  case 6: /* ClassDeclaration: CLASS IDENTIFIER LBRACE VarDeclarations MethodDeclarations RBRACE  */
#line 79 "parser.yy"
                                                                      {
        (yyval.node) = std::make_unique<Node>("CLASS_DECL", *(yyvsp[-4].sval), yylineno);
        delete (yyvsp[-4].sval);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[-1].node)));
    }
#line 1244 "parser.tab.cc"
    break;

  case 7: /* VarDeclarations: VarDeclarations VarDeclaration  */
#line 87 "parser.yy"
                                   {
        (yyval.node) = std::move((yyvsp[-1].node));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1253 "parser.tab.cc"
    break;

  case 8: /* VarDeclarations: %empty  */
#line 91 "parser.yy"
             {
        (yyval.node) = std::make_unique<Node>("VarDeclarations", "Empty", yylineno);
    }
#line 1261 "parser.tab.cc"
    break;

  case 9: /* VarDeclaration: Type IDENTIFIER SEMICOLON  */
#line 96 "parser.yy"
                              {
        (yyval.node) = std::make_unique<Node>("VAR_DECL", *(yyvsp[-1].sval), yylineno);
        delete (yyvsp[-1].sval);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
    }
#line 1271 "parser.tab.cc"
    break;

  case 10: /* MethodDeclarations: MethodDeclarations MethodDeclaration  */
#line 103 "parser.yy"
                                         {
        (yyval.node) = std::move((yyvsp[-1].node));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1280 "parser.tab.cc"
    break;

  case 11: /* MethodDeclarations: %empty  */
#line 107 "parser.yy"
             {
        (yyval.node) = std::make_unique<Node>("MethodDeclarations", "Empty", yylineno);
    }
#line 1288 "parser.tab.cc"
    break;

  case 12: /* MethodDeclaration: PUBLIC Type IDENTIFIER LPAREN ParamList RPAREN LBRACE VarDeclarations StatementList RETURN Expression SEMICOLON RBRACE  */
#line 112 "parser.yy"
                                                                                                                           {
        (yyval.node) = std::make_unique<Node>("MethodDeclaration", *(yyvsp[-10].sval), yylineno);
        delete (yyvsp[-10].sval);
        (yyval.node)->children.push_back(std::move((yyvsp[-11].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[-8].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[-5].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[-4].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
    }
#line 1302 "parser.tab.cc"
    break;

  case 13: /* Statement: PRINTLN LPAREN Expression RPAREN SEMICOLON  */
#line 123 "parser.yy"
                                               {
        (yyval.node) = std::make_unique<Node>("PRINTLN", "println", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
    }
#line 1311 "parser.tab.cc"
    break;

  case 14: /* Statement: IF LPAREN Expression RPAREN Statement  */
#line 128 "parser.yy"
                                                                  {
        (yyval.node) = std::make_unique<Node>("IF", "if", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node))); // Condition
        (yyval.node)->children.push_back(std::move((yyvsp[0].node))); // True branch
    }
#line 1321 "parser.tab.cc"
    break;

  case 15: /* Statement: IF LPAREN Expression RPAREN Statement ELSE Statement  */
#line 133 "parser.yy"
                                                           {
        (yyval.node) = std::make_unique<Node>("IF_ELSE", "if-else", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-4].node))); // Condition
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node))); // True branch
        (yyval.node)->children.push_back(std::move((yyvsp[0].node))); // False branch
    }
#line 1332 "parser.tab.cc"
    break;

  case 16: /* Statement: WHILE LPAREN Expression RPAREN Statement  */
#line 139 "parser.yy"
                                               {
        (yyval.node) = std::make_unique<Node>("WHILE", "while", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node))); // Condition
        (yyval.node)->children.push_back(std::move((yyvsp[0].node))); // Loop body
    }
#line 1342 "parser.tab.cc"
    break;

  case 17: /* Statement: LBRACE StatementList RBRACE  */
#line 144 "parser.yy"
                                  {
        (yyval.node) = std::make_unique<Node>("BLOCK", "{}", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-1].node)));
    }
#line 1351 "parser.tab.cc"
    break;

  case 18: /* StatementList: Statement StatementList  */
#line 150 "parser.yy"
                            {
        (yyval.node) = std::make_unique<Node>("StatementList", "StatementList", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-1].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1361 "parser.tab.cc"
    break;

  case 19: /* StatementList: %empty  */
#line 155 "parser.yy"
             {
        (yyval.node) = std::make_unique<Node>("StatementList", "Empty", yylineno);
    }
#line 1369 "parser.tab.cc"
    break;

  case 20: /* Type: INT  */
#line 160 "parser.yy"
        {
        (yyval.node) = std::make_unique<Node>("INT_TYPE", "int", yylineno);
    }
#line 1377 "parser.tab.cc"
    break;

  case 21: /* Type: BOOLEAN  */
#line 163 "parser.yy"
              {
        (yyval.node) = std::make_unique<Node>("BOOLEAN_TYPE", "boolean", yylineno);
    }
#line 1385 "parser.tab.cc"
    break;

  case 22: /* Type: IDENTIFIER  */
#line 166 "parser.yy"
                 {
        (yyval.node) = std::make_unique<Node>("IDENTIFIER", *(yyvsp[0].sval), yylineno);
        delete (yyvsp[0].sval);
    }
#line 1394 "parser.tab.cc"
    break;

  case 23: /* ParamList: Type IDENTIFIER  */
#line 172 "parser.yy"
                    {
        (yyval.node) = std::make_unique<Node>("ParamList", "", yylineno);
        (yyval.node)->children.push_back(std::make_unique<Node>("Param", *(yyvsp[0].sval), yylineno));
        delete (yyvsp[0].sval);
    }
#line 1404 "parser.tab.cc"
    break;

  case 24: /* ParamList: ParamList COMMA Type IDENTIFIER  */
#line 177 "parser.yy"
                                      {
        (yyval.node) = std::move((yyvsp[-3].node));
        (yyval.node)->children.push_back(std::make_unique<Node>("Param", *(yyvsp[0].sval), yylineno));
        delete (yyvsp[0].sval);
    }
#line 1414 "parser.tab.cc"
    break;

  case 25: /* ParamList: %empty  */
#line 182 "parser.yy"
             {
        (yyval.node) = std::make_unique<Node>("ParamList", "Empty", yylineno);
    }
#line 1422 "parser.tab.cc"
    break;

  case 26: /* Expression: Expression PLUS Expression  */
#line 187 "parser.yy"
                               {
        (yyval.node) = std::make_unique<Node>("PLUS", "+", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1432 "parser.tab.cc"
    break;

  case 27: /* Expression: Expression MINUS Expression  */
#line 192 "parser.yy"
                                  {
        (yyval.node) = std::make_unique<Node>("MINUS", "-", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1442 "parser.tab.cc"
    break;

  case 28: /* Expression: Expression MULT Expression  */
#line 197 "parser.yy"
                                 {
        (yyval.node) = std::make_unique<Node>("MULT", "*", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1452 "parser.tab.cc"
    break;

  case 29: /* Expression: Expression AND Expression  */
#line 202 "parser.yy"
                                {
        (yyval.node) = std::make_unique<Node>("AND", "&&", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1462 "parser.tab.cc"
    break;

  case 30: /* Expression: Expression OR Expression  */
#line 207 "parser.yy"
                               {
        (yyval.node) = std::make_unique<Node>("OR", "||", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1472 "parser.tab.cc"
    break;

  case 31: /* Expression: Expression EQUAL Expression  */
#line 212 "parser.yy"
                                  {
        (yyval.node) = std::make_unique<Node>("EQUAL", "==", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1482 "parser.tab.cc"
    break;

  case 32: /* Expression: Expression LT Expression  */
#line 217 "parser.yy"
                               {
        (yyval.node) = std::make_unique<Node>("LT", "<", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1492 "parser.tab.cc"
    break;

  case 33: /* Expression: Expression GT Expression  */
#line 222 "parser.yy"
                               {
        (yyval.node) = std::make_unique<Node>("GT", ">", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[-2].node)));
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1502 "parser.tab.cc"
    break;

  case 34: /* Expression: IDENTIFIER ASSIGN Expression  */
#line 227 "parser.yy"
                                   {
        (yyval.node) = std::make_unique<Node>("ASSIGN", "=", yylineno);
        (yyval.node)->children.push_back(std::make_unique<Node>("IDENTIFIER", *(yyvsp[-2].sval), yylineno));
        delete (yyvsp[-2].sval);
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1513 "parser.tab.cc"
    break;

  case 35: /* Expression: NOT Expression  */
#line 233 "parser.yy"
                     {
        (yyval.node) = std::make_unique<Node>("NOT", "!", yylineno);
        (yyval.node)->children.push_back(std::move((yyvsp[0].node)));
    }
#line 1522 "parser.tab.cc"
    break;

  case 36: /* Expression: IDENTIFIER LPAREN ParamList RPAREN  */
#line 237 "parser.yy"
                                         {
        (yyval.node) = std::make_unique<Node>("METHOD_CALL", *(yyvsp[-3].sval), yylineno);
        delete (yyvsp[-3].sval);
        (yyval.node)->children.push_back(std::move((yyvsp[-1].node)));
    }
#line 1532 "parser.tab.cc"
    break;

  case 37: /* Expression: IDENTIFIER LBRACKET Expression RBRACKET  */
#line 242 "parser.yy"
                                              {
        (yyval.node) = std::make_unique<Node>("ARRAY_ACCESS", *(yyvsp[-3].sval), yylineno);
        delete (yyvsp[-3].sval);
        (yyval.node)->children.push_back(std::move((yyvsp[-1].node)));
    }
#line 1542 "parser.tab.cc"
    break;

  case 38: /* Expression: LPAREN Expression RPAREN  */
#line 247 "parser.yy"
                               {
        (yyval.node) = std::move((yyvsp[-1].node)); // Return inner expression
    }
#line 1550 "parser.tab.cc"
    break;

  case 39: /* Expression: NUMBER  */
#line 250 "parser.yy"
             {
        (yyval.node) = std::make_unique<Node>("NUMBER", std::to_string((yyvsp[0].ival)), yylineno);
    }
#line 1558 "parser.tab.cc"
    break;

  case 40: /* Expression: TRUE  */
#line 253 "parser.yy"
           {
        (yyval.node) = std::make_unique<Node>("BOOLEAN", "true", yylineno);
    }
#line 1566 "parser.tab.cc"
    break;

  case 41: /* Expression: FALSE  */
#line 256 "parser.yy"
            {
        (yyval.node) = std::make_unique<Node>("BOOLEAN", "false", yylineno);
    }
#line 1574 "parser.tab.cc"
    break;

  case 42: /* Expression: IDENTIFIER  */
#line 259 "parser.yy"
                 {
        (yyval.node) = std::make_unique<Node>("IDENTIFIER", *(yyvsp[0].sval), yylineno);
        delete (yyvsp[0].sval);
    }
#line 1583 "parser.tab.cc"
    break;


#line 1587 "parser.tab.cc"

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

#line 264 "parser.yy"


