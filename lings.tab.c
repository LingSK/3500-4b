/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 11 "lings.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <stack>
#include "SymbolTable.h"
using namespace std;

int line_num = 1;
bool assignment_statement = false;


stack<SYMBOL_TABLE> scopeStack; // stack of scope hashtables

void beginScope();
void endScope();
void cleanUp();
TYPE_INFO findEntryInAnyScope(const string the_name);

void printTokenInfo(const char* token_type, const char* lexeme);

void printRule(const char *, const char *);

int yyerror(const char *s) 
{
    printf("Line %d: %s\n", line_num, s);
    cleanUp();
    exit(1);
}

extern "C" 
{
    int yyparse(void);
    int yylex(void);
    int yywrap() { return 1; }
}


#line 106 "lings.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_IDENT = 258,
    T_INTCONST = 259,
    T_FLOATCONST = 260,
    T_UNKNOWN = 261,
    T_STRCONST = 262,
    T_IF = 263,
    T_ELSE = 264,
    T_WHILE = 265,
    T_FUNCTION = 266,
    T_FOR = 267,
    T_IN = 268,
    T_NEXT = 269,
    T_BREAK = 270,
    T_TRUE = 271,
    T_FALSE = 272,
    T_QUIT = 273,
    T_PRINT = 274,
    T_CAT = 275,
    T_READ = 276,
    T_LPAREN = 277,
    T_RPAREN = 278,
    T_LBRACE = 279,
    T_RBRACE = 280,
    T_LBRACKET = 281,
    T_RBRACKET = 282,
    T_SEMICOLON = 283,
    T_COMMA = 284,
    T_ADD = 285,
    T_SUB = 286,
    T_MULT = 287,
    T_DIV = 288,
    T_MOD = 289,
    T_POW = 290,
    T_LT = 291,
    T_LE = 292,
    T_GT = 293,
    T_GE = 294,
    T_EQ = 295,
    T_NE = 296,
    T_NOT = 297,
    T_AND = 298,
    T_OR = 299,
    T_ASSIGN = 300,
    T_LIST = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 51 "lings.y" /* yacc.c:355  */

    char* text;
    TYPE_INFO typeInfo;
	int argnum;

#line 196 "lings.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 213 "lings.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   138

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    93,   100,   107,   114,   121,   128,   135,
     142,   149,   156,   163,   170,   180,   187,   194,   201,   208,
     217,   225,   245,   267,   290,   298,   321,   338,   346,   353,
     360,   367,   376,   395,   403,   408,   412,   425,   434,   440,
     439,   462,   491,   501,   506,   513,   512,   545,   554,   562,
     571,   584,   597,   608,   607,   626,   630,   637,   642,   659,
     677,   693,   699,   707,   712,   721,   730,   737,   744,   753,
     760,   767,   774,   781,   790,   794,   798,   802,   806,   810,
     816,   823,   832,   851
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IDENT", "T_INTCONST", "T_FLOATCONST",
  "T_UNKNOWN", "T_STRCONST", "T_IF", "T_ELSE", "T_WHILE", "T_FUNCTION",
  "T_FOR", "T_IN", "T_NEXT", "T_BREAK", "T_TRUE", "T_FALSE", "T_QUIT",
  "T_PRINT", "T_CAT", "T_READ", "T_LPAREN", "T_RPAREN", "T_LBRACE",
  "T_RBRACE", "T_LBRACKET", "T_RBRACKET", "T_SEMICOLON", "T_COMMA",
  "T_ADD", "T_SUB", "T_MULT", "T_DIV", "T_MOD", "T_POW", "T_LT", "T_LE",
  "T_GT", "T_GE", "T_EQ", "T_NE", "T_NOT", "T_AND", "T_OR", "T_ASSIGN",
  "T_LIST", "$accept", "N_START", "N_EXPR", "N_CONST", "N_ARITHLOGIC_EXPR",
  "N_SIMPLE_ARITHLOGIC", "N_ADD_OP_LIST", "N_TERM", "N_MULT_OP_LIST",
  "N_FACTOR", "N_COMPOUND_EXPR", "N_EXPR_LIST", "N_IF_EXPR", "N_COND_IF",
  "N_THEN_EXPR", "N_WHILE_EXPR", "$@1", "N_FOR_EXPR", "N_LIST_EXPR",
  "N_CONST_LIST", "N_ASSIGNMENT_EXPR", "$@2", "N_INDEX", "N_QUIT_EXPR",
  "N_OUTPUT_EXPR", "N_INPUT_EXPR", "N_FUNCTION_DEF", "$@3", "N_PARAM_LIST",
  "N_NO_PARAMS", "N_PARAMS", "N_FUNCTION_CALL", "N_ARG_LIST", "N_NO_ARGS",
  "N_ARGS", "N_ADD_OP", "N_MULT_OP", "N_REL_OP", "N_VAR",
  "N_SINGLE_ELEMENT", "N_ENTIRE_VAR", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -56

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-56)))

#define YYTABLE_NINF -49

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       1,   -19,   -56,   -56,   -56,   -12,    -8,   -56,     2,   -56,
     -56,     8,    10,    11,    14,     1,     1,    24,    15,    38,
     -56,   -56,   -56,    33,     4,    25,   -56,   -56,    16,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,     1,    28,   -56,     1,     1,    20,    53,    39,     1,
       1,    44,    52,    23,    50,   -56,    48,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,    24,   -56,   -56,   -56,   -56,    24,
     -56,   -56,   -56,   -56,   -56,   -56,    24,     1,    49,    56,
     -56,   -56,     1,    35,   -56,   -56,    78,    70,   -56,    61,
      62,   -56,   -56,     1,    63,    60,    58,    66,   -56,     4,
      25,   -56,    81,     1,   -56,    64,     1,    69,    65,    72,
     -56,   -56,     1,   -56,   -56,    23,   -56,     1,    48,   -56,
     -56,   -56,     1,   -56,    71,   -56,     1,    78,    73,    76,
     -56,    74,   -56,   -56,    51,   -56,   -56,   -56,     1,    75,
     -56,   -56
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    83,    15,    17,    16,     0,     0,    53,     0,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    29,     7,    20,    24,    27,     6,     3,     0,     4,
       5,    11,     8,    14,     9,    10,    12,    13,    28,    81,
      80,    63,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    83,    31,     0,     1,    74,    76,
      75,    77,    78,    79,     0,    66,    67,    68,    22,     0,
      69,    70,    72,    73,    71,    25,     0,     0,    64,     0,
      62,    61,     0,     0,    37,    39,    57,     0,    49,     0,
       0,    52,    30,     0,     0,     0,    44,     0,    21,    24,
      27,    38,    35,     0,    60,     0,     0,     0,    58,     0,
      56,    55,     0,    50,    51,    34,    32,     0,     0,    42,
      23,    26,     0,    65,     0,    46,     0,     0,     0,     0,
      33,     0,    43,    36,    82,    40,    59,    54,     0,     0,
      41,    82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,     0,   -55,   -56,    36,     5,    34,     7,   -15,
     -23,    -7,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    -9,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -17,   -56,   -56,   -56,    12,   -56,   -56,   -56,   -56,   -56,
     -56
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    19,    78,    21,    22,    23,    68,    24,    75,    25,
      26,    94,    27,    28,   102,    29,   107,    30,    31,    97,
      32,    83,    43,    33,    34,    35,    36,    46,   109,   110,
     111,    37,    79,    80,    81,    69,    76,    64,    38,    39,
      40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    96,    55,    41,     1,     2,     3,    42,     4,     5,
      44,     6,     7,     8,    45,    52,    53,     9,    10,    11,
      12,    13,    14,    15,    47,    16,   -48,    54,     2,     3,
      48,     4,    49,    50,    65,    66,    51,    56,    57,    77,
       9,    10,    86,    17,    84,    85,    15,    18,    67,    89,
      90,    93,     2,     3,    82,     4,    87,    70,    71,    72,
      73,   100,    88,    96,     9,    10,    17,    91,    74,    58,
      59,    60,    61,    62,    63,    92,    95,   101,   103,   104,
     106,   108,   105,   112,   113,   114,   117,   118,   116,   119,
     122,   124,   126,   115,   127,   128,   -47,    16,   134,   138,
      98,   139,   141,    99,   120,   137,   125,   121,   130,   132,
     136,     0,   129,     0,     0,   123,     0,   131,     0,     0,
       0,     0,   133,     0,     0,     0,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   140
};

static const yytype_int16 yycheck[] =
{
       0,    56,    17,    22,     3,     4,     5,    26,     7,     8,
      22,    10,    11,    12,    22,    15,    16,    16,    17,    18,
      19,    20,    21,    22,    22,    24,    45,     3,     4,     5,
      22,     7,    22,    22,    30,    31,    22,    22,     0,    23,
      16,    17,    22,    42,    44,    45,    22,    46,    44,    49,
      50,    28,     4,     5,    26,     7,     3,    32,    33,    34,
      35,    76,    23,   118,    16,    17,    42,    23,    43,    36,
      37,    38,    39,    40,    41,    23,    26,    77,    29,    23,
      45,     3,    82,    13,    23,    23,    26,    29,    25,    23,
       9,    27,    23,    93,    29,    23,    45,    24,    27,    23,
      64,    27,    27,    69,    99,   128,   106,   100,   115,   118,
     127,    -1,   112,    -1,    -1,   103,    -1,   117,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    16,
      17,    18,    19,    20,    21,    22,    24,    42,    46,    48,
      49,    50,    51,    52,    54,    56,    57,    59,    60,    62,
      64,    65,    67,    70,    71,    72,    73,    78,    85,    86,
      87,    22,    26,    69,    22,    22,    74,    22,    22,    22,
      22,    22,    49,    49,     3,    56,    22,     0,    36,    37,
      38,    39,    40,    41,    84,    30,    31,    44,    53,    82,
      32,    33,    34,    35,    43,    55,    83,    23,    49,    79,
      80,    81,    26,    68,    49,    49,    22,     3,    23,    49,
      49,    23,    23,    28,    58,    26,    50,    66,    52,    54,
      56,    49,    61,    29,    23,    49,    45,    63,     3,    75,
      76,    77,    13,    23,    23,    49,    25,    26,    29,    23,
      53,    55,     9,    81,    27,    49,    23,    29,    23,    49,
      58,    49,    66,    49,    27,    49,    77,    57,    23,    27,
      49,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    50,    50,    50,
      51,    51,    52,    53,    53,    54,    55,    55,    56,    56,
      56,    56,    57,    58,    58,    59,    59,    60,    61,    63,
      62,    64,    65,    66,    66,    68,    67,    69,    69,    70,
      71,    71,    72,    74,    73,    75,    75,    76,    77,    77,
      78,    79,    79,    80,    81,    81,    82,    82,    82,    83,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      85,    85,    86,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     0,     2,     3,     0,     1,     1,
       3,     2,     4,     3,     0,     3,     5,     3,     1,     0,
       6,     7,     4,     3,     1,     0,     5,     5,     0,     3,
       4,     4,     3,     0,     6,     1,     1,     0,     1,     3,
       4,     1,     1,     0,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 86 "lings.y" /* yacc.c:1646  */
    {
                    printRule("START", "EXPR");
                    endScope();
                    printf("\n---- Completed parsing ----\n\n");
                    return 0;
                }
#line 1406 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 94 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "IF_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
                }
#line 1417 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 101 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "WHILE_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
                }
#line 1428 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
                    printRule("EXPR", "FOR_EXPR");
                }
#line 1439 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "COMPOUND_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1450 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 122 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                    printRule("EXPR", "ARITHLOGIC_EXPR");
                }
#line 1461 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 129 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "ASSIGNMENT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1472 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 136 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "OUTPUT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1483 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 143 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "INPUT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;               
                }
#line 1494 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 150 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "LIST_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1505 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 157 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "FUNCTION_DEF");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1516 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 164 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "FUNCTION_CALL");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1527 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 171 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "QUIT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                    exit(1);
                }
#line 1539 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 181 "lings.y" /* yacc.c:1646  */
    {
                    printRule("CONST", "INTCONST");
                    (yyval.typeInfo).type = INT;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 1550 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 188 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = STR;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    printRule("CONST", "STRCONST");
                }
#line 1561 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 195 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = FLOAT;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                    printRule("CONST", "FLOATCONST");
                }
#line 1572 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 202 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                    printRule("CONST", "TRUE");
                }
#line 1583 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 209 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                    printRule("CONST", "FALSE");
                }
#line 1594 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 218 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ARITHLOGIC_EXPR", 
                              "SIMPLE_ARITHLOGIC");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 1606 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 227 "lings.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].typeInfo).type != INT && (yyvsp[-2].typeInfo).type != BOOL && (yyvsp[-2].typeInfo).type != FLOAT && (yyvsp[-2].typeInfo).type != INT_OR_STR_OR_FLOAT_OR_BOOL)
                    {
                        yyerror("Arg 1 must be integer or float or bool");
                    }
                    if((yyvsp[0].typeInfo).type != INT && (yyvsp[0].typeInfo).type != BOOL && (yyvsp[0].typeInfo).type != FLOAT && (yyvsp[0].typeInfo).type != INT_OR_STR_OR_FLOAT_OR_BOOL)
                    {
                        yyerror("Arg 2 must be integer or float or bool");
                    }
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    printRule("ARITHLOGIC_EXPR", 
                              "SIMPLE_ARITHLOGIC REL_OP "
                              "SIMPLE_ARITHLOGIC");
                }
#line 1627 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 246 "lings.y" /* yacc.c:1646  */
    {
                    printRule("SIMPLE_ARITHLOGIC", 
                              "TERM ADD_OP_LIST");
                    if((yyvsp[0].typeInfo).type == NOT_APPLICABLE){
                        (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;                       
                    }else{
                        if((yyvsp[-1].typeInfo).type != INT && (yyvsp[-1].typeInfo).type != BOOL && (yyvsp[-1].typeInfo).type != FLOAT && (yyvsp[-1].typeInfo).type != INT_OR_STR_OR_FLOAT_OR_BOOL)
                        {
                            yyerror("Arg 1 must be integer or float or bool");
                        }
                        if((yyvsp[-1].typeInfo).type == FLOAT || (yyvsp[0].typeInfo).type == FLOAT){
                            (yyval.typeInfo).type = FLOAT;                       
                        }else{
                            (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;                       
                        }                       
                    }    
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                              
                }
#line 1651 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 268 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP_LIST", 
                              "ADD_OP TERM ADD_OP_LIST");
                    if((yyvsp[-1].typeInfo).type != INT && (yyvsp[-1].typeInfo).type != BOOL && (yyvsp[-1].typeInfo).type != FLOAT && (yyvsp[-1].typeInfo).type != INT_OR_STR_OR_FLOAT_OR_BOOL)
                    {
                        yyerror("Arg 2 must be integer or float or bool");
                    }
                    if((yyvsp[-2].typeInfo).type == LOGICAL){
                        (yyval.typeInfo).type = BOOL;
                        (yyval.typeInfo).numParams = NOT_APPLICABLE;
                        (yyval.typeInfo).returnType = NOT_APPLICABLE;                        
                    }else{
                        if((yyvsp[-1].typeInfo).type == FLOAT || (yyvsp[0].typeInfo).type == FLOAT){
                            (yyval.typeInfo).type = FLOAT;                       
                        }else{
                            (yyval.typeInfo).type = INT;                       
                        }   
                        (yyval.typeInfo).numParams = NOT_APPLICABLE;
                        (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }                    
                }
#line 1677 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 290 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP_LIST", "epsilon");
                    (yyval.typeInfo).type = NOT_APPLICABLE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 1688 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 299 "lings.y" /* yacc.c:1646  */
    {
                    printRule("TERM", 
                              "FACTOR MULT_OP_LIST");

                    if((yyvsp[0].typeInfo).type == NOT_APPLICABLE){
                        (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;                       
                    }else{
                        if((yyvsp[-1].typeInfo).type != INT && (yyvsp[-1].typeInfo).type != BOOL && (yyvsp[-1].typeInfo).type != FLOAT && (yyvsp[-1].typeInfo).type != INT_OR_STR_OR_FLOAT_OR_BOOL)
                        {
                            yyerror("Arg 1 must be integer or float or bool");
                        }
                        if((yyvsp[-1].typeInfo).type == FLOAT || (yyvsp[0].typeInfo).type == FLOAT){
                            (yyval.typeInfo).type = FLOAT;                       
                        }else{
                            (yyval.typeInfo).type = INT;                       
                        }   
                    }   
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                   
                }
#line 1713 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 322 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP_LIST", 
                              "MULT_OP FACTOR MULT_OP_LIST");
                    if((yyvsp[-1].typeInfo).type != INT && (yyvsp[-1].typeInfo).type != BOOL && (yyvsp[-1].typeInfo).type != FLOAT && (yyvsp[-1].typeInfo).type != INT_OR_STR_OR_FLOAT_OR_BOOL)
                    {
                        yyerror("Arg 2 must be integer or float or bool");
                    }
                    if((yyvsp[-1].typeInfo).type == FLOAT || (yyvsp[0].typeInfo).type == FLOAT){
                        (yyval.typeInfo).type = FLOAT;                       
                    }else{
                        (yyval.typeInfo).type = INT;                       
                    }   
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                     
                }
#line 1733 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 338 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP_LIST", "epsilon");
                    (yyval.typeInfo).type = NOT_APPLICABLE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }
#line 1744 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 347 "lings.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "VAR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).numParams;
                    }
#line 1755 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 354 "lings.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "CONST");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).numParams;
                    }
#line 1766 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 361 "lings.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "( EXPR )");
                    (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).numParams;
                    }
#line 1777 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 368 "lings.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "! FACTOR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).numParams;
                    }
#line 1788 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 377 "lings.y" /* yacc.c:1646  */
    {
                    printRule("COMPOUND_EXPR",
                              "{ EXPR EXPR_LIST }");
                    (yyval.typeInfo).type = (yyvsp[-2].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-2].typeInfo).numParams;
                    if((yyvsp[-1].typeInfo).type==NOT_APPLICABLE){
                        (yyval.typeInfo).type = (yyvsp[-2].typeInfo).type;
                        (yyval.typeInfo).numParams = (yyvsp[-2].typeInfo).numParams;
                        (yyval.typeInfo).returnType = (yyvsp[-2].typeInfo).returnType;
                        }
                    else{
                        (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
                        (yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
                        (yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).returnType;
                        }
                }
#line 1809 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 396 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR_LIST", "; EXPR EXPR_LIST");
                    (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).returnType;                   
                }
#line 1820 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 403 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR_LIST", "epsilon");
                }
#line 1828 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 409 "lings.y" /* yacc.c:1646  */
    {
                    printRule("IF_EXPR", "COND_IF ) THEN_EXPR");
                }
#line 1836 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 413 "lings.y" /* yacc.c:1646  */
    {
                    if(((yyvsp[-2].typeInfo).type == FUNCTION)){
                        yyerror("Arg 2 cannot be function");
                    }   
                    if(((yyvsp[0].typeInfo).type == FUNCTION)){
                        yyerror("Arg 3 cannot be function");
                    }   
                    printRule("IF_EXPR", 
                              "COND_IF ) THEN_EXPR ELSE EXPR");
                }
#line 1851 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 426 "lings.y" /* yacc.c:1646  */
    {
                    if(((yyvsp[0].typeInfo).type == FUNCTION) || ((yyvsp[0].typeInfo).type == STR) || ((yyvsp[0].typeInfo).type == NULL_TYPE) || ((yyvsp[0].typeInfo).type == LIST)){
                        yyerror("Arg 1 cannot be function or null or list or string");
                    }    
                    printRule("COND_IF","IF ) EXPR");
                }
#line 1862 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 435 "lings.y" /* yacc.c:1646  */
    {
                    printRule("THEN_EXPR","EXPR");
                }
#line 1870 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 440 "lings.y" /* yacc.c:1646  */
    {
                    printRule("WHILE_EXPR", 
                              "WHILE ( EXPR ) "
                              "LOOP_EXPR");
                    if(((yyvsp[0].typeInfo).type == FUNCTION) || ((yyvsp[0].typeInfo).type == STR) || ((yyvsp[0].typeInfo).type == NULL_TYPE) || ((yyvsp[0].typeInfo).type == LIST)){
                        yyerror("Arg 1 cannot be function or null or list or string");
                    }                
                }
#line 1883 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 449 "lings.y" /* yacc.c:1646  */
    {
                    /*
                    if(($6.type == FUNCTION) || ($6.type == STR) || ($6.type == NULL_TYPE) || ($6.type == LIST)){
                        yyerror("Arg 2 cannot be function or null or list or string");
                    } 
                    */
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                      
                }
#line 1898 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 463 "lings.y" /* yacc.c:1646  */
    {
                    if((scopeStack.top().findEntry(string((yyvsp[-4].text))).type == FUNCTION)||(scopeStack.top().findEntry(string((yyvsp[-4].text))).type == NULL_TYPE)||(scopeStack.top().findEntry(string((yyvsp[-4].text))).type == LIST))
                        yyerror("Arg 1 cannot be function or null or list");
                    if((yyvsp[-2].typeInfo).type != LIST)
                        yyerror("Arg 2 must be list");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;   
                    if(scopeStack.top().findEntry(string((yyvsp[-4].text))).type == NOT_APPLICABLE)
					{
                        string lexeme = string((yyvsp[-4].text));
                        if(assignment_statement){
                            printf("___Adding %s to symbol table\n", (yyvsp[-4].text));
                        }
                        TYPE_INFO typeinfo = {INT_OR_STR_OR_FLOAT_OR_BOOL, NOT_APPLICABLE, NOT_APPLICABLE};
                        bool success = scopeStack.top().addEntry(
                            SYMBOL_TABLE_ENTRY(lexeme, typeinfo));
							}
                    else{
                        if(scopeStack.top().findEntry(string((yyvsp[-4].text))).type != INT_OR_STR_OR_FLOAT_OR_BOOL)
                            yyerror("Arg 3 must be integer or string or float or bool"); 
                    }
                    printRule("FOR_EXPR", 
                              "FOR ( IDENT IN EXPR ) EXPR");
                }
#line 1928 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 492 "lings.y" /* yacc.c:1646  */
    {
                    printRule("LIST_EXPR", 
                              "LIST ( CONST_LIST )");
                    (yyval.typeInfo).type = LIST;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                               
                }
#line 1940 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 502 "lings.y" /* yacc.c:1646  */
    {
                    printRule("CONST_LIST", 
                              "CONST, CONST_LIST");
                }
#line 1949 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 507 "lings.y" /* yacc.c:1646  */
    {
                    printRule("CONST_LIST", "CONST");
                }
#line 1957 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 513 "lings.y" /* yacc.c:1646  */
    {
                    
                    if((scopeStack.top().findEntry(string((yyvsp[-1].text))).type!=INT)&&(scopeStack.top().findEntry(string((yyvsp[-1].text))).type!=NOT_APPLICABLE))
						yyerror("Arg 1 must be integer");
                    if((yyvsp[0].typeInfo).type != NULL_TYPE && (yyvsp[0].typeInfo).type == LIST)
                        yyerror("Arg 2 cannot be list");
                    printRule("ASSIGNMENT_EXPR", 
                              "IDENT INDEX ASSIGN EXPR");
                    
                    
                }
#line 1973 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 525 "lings.y" /* yacc.c:1646  */
    {
                    string lexeme = string((yyvsp[-4].text));
					
                    
						
				
                    TYPE_INFO typeinfo = {(yyvsp[0].typeInfo).type, (yyvsp[0].typeInfo).numParams, (yyvsp[0].typeInfo).returnType};
                    if(scopeStack.top().findEntry(lexeme).type == NOT_APPLICABLE) {
                        if(assignment_statement){
                            printf("___Adding %s to symbol table\n",
                               (yyvsp[-4].text));}
                        scopeStack.top().addEntry(
                            SYMBOL_TABLE_ENTRY(lexeme, typeinfo));
                    }       
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;	                    
                }
#line 1996 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 547 "lings.y" /* yacc.c:1646  */
    {
                    printRule("INDEX", " [[ EXPR ]]");
                    (yyval.typeInfo).type = (yyvsp[-2].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-2].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-2].typeInfo).returnType;			    
                }
#line 2007 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 554 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    printRule("INDEX", " epsilon");
                }
#line 2018 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 563 "lings.y" /* yacc.c:1646  */
    {
                    printRule("QUIT_EXPR", "QUIT()");
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                       
                }
#line 2029 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 572 "lings.y" /* yacc.c:1646  */
    {
                    printRule("OUTPUT_EXPR", 
                              "PRINT ( EXPR )");
                    if((yyvsp[-1].typeInfo).type == FUNCTION || (yyvsp[-1].typeInfo).type == NULL_TYPE)
                    {
                        yyerror("Arg 1 cannot be function or null");
                    }
                    (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).returnType;                      
                              
                }
#line 2046 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 585 "lings.y" /* yacc.c:1646  */
    {
                    printRule("OUTPUT_EXPR", 
                              "CAT ( EXPR )");
                    if((yyvsp[-1].typeInfo).type == NULL_TYPE || (yyvsp[-1].typeInfo).type == FUNCTION){
                        yyerror("Arg 1 cannot be function or null");
                    }
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                                
                }
#line 2061 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 598 "lings.y" /* yacc.c:1646  */
    {
                    printRule("INPUT_EXPR", "READ ( )");
					
                    (yyval.typeInfo).type = NOT_APPLICABLE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;  
                }
#line 2073 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 608 "lings.y" /* yacc.c:1646  */
    {
                    beginScope();
                }
#line 2081 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 612 "lings.y" /* yacc.c:1646  */
    {
                    if((yyvsp[0].typeInfo).type == FUNCTION)
                            yyerror("Arg 2 cannot be function"); 
                    
                    printRule("FUNCTION_DEF",
                              "FUNCTION ( PARAM_LIST )"
                              " COMPOUND_EXPR");
                    (yyval.typeInfo).type = FUNCTION;
                    (yyval.typeInfo).numParams = scopeStack.top().getSize();
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType; 
                    endScope();
                }
#line 2098 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 627 "lings.y" /* yacc.c:1646  */
    {
                    printRule("PARAM_LIST", "PARAMS");
                }
#line 2106 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 631 "lings.y" /* yacc.c:1646  */
    {
                    printRule("PARAM_LIST", "NO PARAMS");
                }
#line 2114 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 637 "lings.y" /* yacc.c:1646  */
    {
                    printRule("NO_PARAMS", "epsilon");
                }
#line 2122 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 643 "lings.y" /* yacc.c:1646  */
    {
                    printRule("PARAMS", "IDENT");
                    string lexeme = string((yyvsp[0].text));
                    if(assignment_statement){
                        printf("___Adding %s to symbol table\n", (yyvsp[0].text));
                    }
                    TYPE_INFO typeinfo = {INT, NOT_APPLICABLE, NOT_APPLICABLE};
                    bool success = scopeStack.top().addEntry(
                        SYMBOL_TABLE_ENTRY(lexeme, typeinfo));
                    if(!success) {
                        yyerror("Multiply defined identifier");
                        return(0);
                    }
                    
                    
                }
#line 2143 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 660 "lings.y" /* yacc.c:1646  */
    {
                    printRule("PARAMS", "IDENT, PARAMS");
                    string lexeme = string((yyvsp[-2].text));
                    if(assignment_statement){
                    printf("___Adding %s to symbol table\n", (yyvsp[-2].text));}
                    
                    TYPE_INFO typeinfo = {INT, NOT_APPLICABLE, NOT_APPLICABLE};
                    bool success = scopeStack.top().addEntry(
                        SYMBOL_TABLE_ENTRY(lexeme, typeinfo));
                    if(!success) {
                        yyerror("Multiply defined identifier");
                        return(0);
                    }
                    
                }
#line 2163 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 678 "lings.y" /* yacc.c:1646  */
    {
                    if(scopeStack.top().findEntry(string((yyvsp[-3].text))).type != FUNCTION)
                            yyerror("Arg 2 must be function"); 
                    if((yyvsp[-1].argnum)!=(yyval.typeInfo).numParams)
						yyerror("Too many parameters in function call");
                    printRule("FUNCTION_CALL", "IDENT"
                              " ( ARG_LIST )");
                    if (findEntryInAnyScope((yyvsp[-3].text)).type == NOT_APPLICABLE) {
                        yyerror("Undefined identifier");
                        return(0);
                    }
                    
                }
#line 2181 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 694 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ARG_LIST", "ARGS");
					(yyval.argnum) = (yyvsp[0].argnum);
					
                }
#line 2191 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 700 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ARG_LIST", "NO_ARGS");
					(yyval.argnum) = 0;
                }
#line 2200 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 707 "lings.y" /* yacc.c:1646  */
    {
                    printRule("NO_ARGS", "epsilon");
                }
#line 2208 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 713 "lings.y" /* yacc.c:1646  */
    {
                    
					if(((yyvsp[0].typeInfo).type != INT)){
                        yyerror("Arg 1 must be integer");
                    } 
					(yyval.argnum) = (yyval.argnum) + 1;
                    printRule("ARGS", "EXPR");
                }
#line 2221 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 722 "lings.y" /* yacc.c:1646  */
    {
                    if(((yyvsp[-2].typeInfo).type != INT))
                        yyerror("Arg 1 must be integer");
					(yyval.argnum) = (yyval.argnum) + 1 + (yyvsp[0].argnum);
                    printRule("ARGS", "EXPR, ARGS");
                }
#line 2232 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 731 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP", "+");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2243 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 738 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP", "-");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }
#line 2254 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 745 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP", "|");
                    (yyval.typeInfo).type = LOGICAL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }
#line 2265 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 754 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "*");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2276 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 761 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "/");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2287 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 768 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "&");
                    (yyval.typeInfo).type = LOGICAL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2298 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 775 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "\%\%");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2309 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 782 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "^");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                }
#line 2320 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 791 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "<");
                }
#line 2328 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 795 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", ">");
                }
#line 2336 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 799 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "<=");
                }
#line 2344 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 803 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", ">=");
                }
#line 2352 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 807 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "==");
                }
#line 2360 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 811 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "!=");
                }
#line 2368 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 817 "lings.y" /* yacc.c:1646  */
    {
                    printRule("VAR", "ENTIRE_VAR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                     
                }
#line 2379 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 824 "lings.y" /* yacc.c:1646  */
    {
                    printRule("VAR", "SINGLE_ELEMENT");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;  
                    }
#line 2390 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 834 "lings.y" /* yacc.c:1646  */
    {
                    printRule("SINGLE_ELEMENT", "IDENT"
                              " [[ EXPR ]]");
                    if (findEntryInAnyScope((yyvsp[-5].text)).type == NOT_APPLICABLE) {
                        yyerror("Undefined identifier");
                        return(0);
                    }
                    /*
                    if(scopeStack.top().findEntry(string($1)).type != LIST)
                        yyerror("Arg 1 must be list");
                        */
                    (yyval.typeInfo).type = INT_OR_STR_OR_FLOAT_OR_BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                  
                }
#line 2410 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 852 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ENTIRE_VAR", "IDENT");
                    if(findEntryInAnyScope((yyvsp[0].text)).type == NOT_APPLICABLE)
                    {
                        yyerror("Undefined identifier");
                        return(0);
                    }
                    (yyval.typeInfo).type = findEntryInAnyScope((yyvsp[0].text)).type;
                    (yyval.typeInfo).numParams = findEntryInAnyScope((yyvsp[0].text)).numParams;
                    (yyval.typeInfo).returnType = findEntryInAnyScope((yyvsp[0].text)).returnType; 
                }
#line 2426 "lings.tab.c" /* yacc.c:1646  */
    break;


#line 2430 "lings.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
  return yyresult;
}
#line 865 "lings.y" /* yacc.c:1906  */


#include "lex.yy.c"
extern FILE *yyin;

void printTokenInfo(const char* token_type, const char* lexeme)
{
    if(assignment_statement)
        printf("TOKEN: %s \t\t LEXEME: %s\n", token_type, lexeme);
}

void printRule(const char *lhs, const char *rhs)
{
    if(assignment_statement)
        printf("%s -> %s\n", lhs, rhs);
    return;
}

void beginScope() {
    scopeStack.push(SYMBOL_TABLE());
    if(assignment_statement)
        printf("\n___Entering new scope...\n\n");
}

void endScope() {
    scopeStack.pop();
    if(assignment_statement)
        printf("\n___Exiting scope...\n\n");
}

void cleanUp() {
    if (scopeStack.empty())
        return;
    else {
        scopeStack.pop();
        cleanUp();
    }
}

TYPE_INFO findEntryInAnyScope(const string the_name) {
    TYPE_INFO defaultType;
    if (scopeStack.empty())
    {    
        defaultType = {NOT_APPLICABLE, NOT_APPLICABLE, NOT_APPLICABLE};
        return(defaultType);
    }
    TYPE_INFO found = scopeStack.top().findEntry(the_name);
    if (found.type != NOT_APPLICABLE)
        return(found);
    else {
        SYMBOL_TABLE symbolTable = scopeStack.top();
        scopeStack.pop();
        found = findEntryInAnyScope(the_name);
        scopeStack.push(symbolTable); // restore stack to original state
        return(found);
    }
}

int main() 
{
    beginScope();
    do {
        yyparse();
    } while (!feof(yyin));

    cleanUp();

    return 0;
}
