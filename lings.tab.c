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
bool isIntOrFloatOrBoolCompatible(const int theType);
bool isIntCompatible(const int theType);
bool isBoolCompatible(const int theType);
bool isFloatCompatible(const int theType);
bool isInvalidOperandType(const int theType);
bool isINTorSTRorFLOATorBOOLcompatible(const int theType);

stack<SYMBOL_TABLE> scopeStack; // stack of scope hashtables
int x=0;
void beginScope();
void endScope();
void cleanUp();
TYPE_INFO findEntryInAnyScope(const string the_name);
bool pdf;
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


#line 111 "lings.tab.c" /* yacc.c:339  */

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
#line 56 "lings.y" /* yacc.c:355  */

    char* text;
    TYPE_INFO typeInfo;
	int argnum;
	bool flag;

#line 202 "lings.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 219 "lings.tab.c" /* yacc.c:358  */

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
#define YYLAST   141

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  144

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
       0,    91,    91,    99,   106,   113,   121,   128,   135,   143,
     150,   157,   164,   171,   178,   188,   195,   202,   209,   216,
     225,   233,   253,   275,   298,   306,   329,   346,   354,   361,
     368,   375,   384,   403,   411,   416,   424,   439,   448,   456,
     455,   479,   478,   521,   531,   536,   543,   542,   612,   621,
     629,   638,   651,   664,   675,   674,   695,   699,   706,   711,
     728,   746,   776,   785,   793,   798,   810,   809,   826,   833,
     840,   849,   856,   863,   870,   877,   886,   890,   894,   898,
     902,   906,   912,   919,   928,   947
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
  "N_THEN_EXPR", "N_WHILE_EXPR", "$@1", "N_FOR_EXPR", "$@2", "N_LIST_EXPR",
  "N_CONST_LIST", "N_ASSIGNMENT_EXPR", "$@3", "N_INDEX", "N_QUIT_EXPR",
  "N_OUTPUT_EXPR", "N_INPUT_EXPR", "N_FUNCTION_DEF", "$@4", "N_PARAM_LIST",
  "N_NO_PARAMS", "N_PARAMS", "N_FUNCTION_CALL", "N_ARG_LIST", "N_NO_ARGS",
  "N_ARGS", "$@5", "N_ADD_OP", "N_MULT_OP", "N_REL_OP", "N_VAR",
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

#define YYTABLE_NINF -67

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
      25,   -56,    81,    65,   -56,    64,     1,    69,    67,    72,
     -56,   -56,     1,   -56,   -56,    23,   -56,     1,    48,   -56,
     -56,   -56,     1,     1,    71,   -56,     1,    78,    73,    76,
     -56,    74,   -56,   -56,   -56,    55,   -56,   -56,   -56,   -56,
      75,     1,   -56,   -56
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    85,    15,    17,    16,     0,     0,    54,     0,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    29,     7,    20,    24,    27,     6,     3,     0,     4,
       5,    11,     8,    14,     9,    10,    12,    13,    28,    83,
      82,    64,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    85,    31,     0,     1,    76,    78,
      77,    79,    80,    81,     0,    68,    69,    70,    22,     0,
      71,    72,    74,    75,    73,    25,     0,     0,    65,     0,
      63,    62,     0,     0,    37,    39,    58,     0,    50,     0,
       0,    53,    30,     0,     0,     0,    45,     0,    21,    24,
      27,    38,    35,     0,    61,     0,     0,     0,    59,     0,
      57,    56,     0,    51,    52,    34,    32,     0,     0,    43,
      23,    26,     0,     0,     0,    47,     0,     0,     0,     0,
      33,     0,    44,    36,    67,    84,    40,    60,    55,    41,
       0,     0,    84,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,     0,   -55,   -56,    40,     6,    34,     7,   -15,
     -20,    -6,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
      -7,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -17,   -56,   -56,   -56,   -10,   -56,   -56,   -56,   -56,
     -56,   -56,   -56
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    78,    21,    22,    23,    68,    24,    75,    25,
      26,    94,    27,    28,   102,    29,   107,    30,   141,    31,
      97,    32,    83,    43,    33,    34,    35,    36,    46,   109,
     110,   111,    37,    79,    80,    81,   103,    69,    76,    64,
      38,    39,    40
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    96,    55,    41,     1,     2,     3,    42,     4,     5,
      44,     6,     7,     8,    45,    52,    53,     9,    10,    11,
      12,    13,    14,    15,    47,    16,   -49,    54,     2,     3,
      48,     4,    49,    50,    65,    66,    51,    56,    57,    77,
       9,    10,    86,    17,    84,    85,    15,    18,    67,    89,
      90,    93,     2,     3,    82,     4,    87,    70,    71,    72,
      73,   100,    88,    96,     9,    10,    17,    91,    74,    58,
      59,    60,    61,    62,    63,    92,    95,   101,   -66,   104,
     106,   108,   105,   112,   113,   114,   117,   118,   116,   119,
     122,   124,   126,   115,   123,   128,   127,    16,   135,   139,
     -48,   140,   142,    99,    98,   120,   125,   121,   138,   130,
     137,   132,   129,   134,     0,     0,     0,   131,     0,     0,
       0,     0,   133,     0,     0,     0,   136,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   143
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
       9,    27,    23,    93,    29,    23,    29,    24,    27,    23,
      45,    27,    27,    69,    64,    99,   106,   100,   128,   115,
     127,   118,   112,   123,    -1,    -1,    -1,   117,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    16,
      17,    18,    19,    20,    21,    22,    24,    42,    46,    48,
      49,    50,    51,    52,    54,    56,    57,    59,    60,    62,
      64,    66,    68,    71,    72,    73,    74,    79,    87,    88,
      89,    22,    26,    70,    22,    22,    75,    22,    22,    22,
      22,    22,    49,    49,     3,    56,    22,     0,    36,    37,
      38,    39,    40,    41,    86,    30,    31,    44,    53,    84,
      32,    33,    34,    35,    43,    55,    85,    23,    49,    80,
      81,    82,    26,    69,    49,    49,    22,     3,    23,    49,
      49,    23,    23,    28,    58,    26,    50,    67,    52,    54,
      56,    49,    61,    83,    23,    49,    45,    63,     3,    76,
      77,    78,    13,    23,    23,    49,    25,    26,    29,    23,
      53,    55,     9,    29,    27,    49,    23,    29,    23,    49,
      58,    49,    67,    49,    82,    27,    49,    78,    57,    23,
      27,    65,    27,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    50,    50,    50,
      51,    51,    52,    53,    53,    54,    55,    55,    56,    56,
      56,    56,    57,    58,    58,    59,    59,    60,    61,    63,
      62,    65,    64,    66,    67,    67,    69,    68,    70,    70,
      71,    72,    72,    73,    75,    74,    76,    76,    77,    78,
      78,    79,    80,    80,    81,    82,    83,    82,    84,    84,
      84,    85,    85,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,    88,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     0,     2,     3,     0,     1,     1,
       3,     2,     4,     3,     0,     3,     5,     3,     1,     0,
       6,     0,     8,     4,     3,     1,     0,     5,     5,     0,
       3,     4,     4,     3,     0,     6,     1,     1,     0,     1,
       3,     4,     1,     1,     0,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     1
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
#line 92 "lings.y" /* yacc.c:1646  */
    {
                    printRule("START", "EXPR");
                    endScope();
                    printf("\n---- Completed parsing ----\n\n");
                    return 0;
                }
#line 1414 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 100 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "IF_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
                }
#line 1425 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 107 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "WHILE_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
                }
#line 1436 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 114 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
					(yyval.typeInfo).param=(yyvsp[0].typeInfo).param;
                    printRule("EXPR", "FOR_EXPR");
                }
#line 1448 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 122 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "COMPOUND_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1459 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 129 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                    printRule("EXPR", "ARITHLOGIC_EXPR");
                }
#line 1470 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 136 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "ASSIGNMENT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
					(yyval.typeInfo).param=(yyvsp[0].typeInfo).param;
                }
#line 1482 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 144 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "OUTPUT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1493 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 151 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "INPUT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;               
                }
#line 1504 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 158 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "LIST_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1515 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 165 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "FUNCTION_DEF");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1526 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 172 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "FUNCTION_CALL");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1537 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 179 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "QUIT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                    exit(1);
                }
#line 1549 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 189 "lings.y" /* yacc.c:1646  */
    {
                    printRule("CONST", "INTCONST");
                    (yyval.typeInfo).type = INT;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 1560 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 196 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = STR;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    printRule("CONST", "STRCONST");
                }
#line 1571 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 203 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = FLOAT;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                    printRule("CONST", "FLOATCONST");
                }
#line 1582 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 210 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                    printRule("CONST", "TRUE");
                }
#line 1593 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 217 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                    printRule("CONST", "FALSE");
                }
#line 1604 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 226 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ARITHLOGIC_EXPR", 
                              "SIMPLE_ARITHLOGIC");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 1616 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 235 "lings.y" /* yacc.c:1646  */
    {
                    if(isInvalidOperandType((yyvsp[-2].typeInfo).type))
                    {
                        yyerror("Arg 1 must be integer or float or bool");
                    }
                    if(isInvalidOperandType((yyvsp[0].typeInfo).type))
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
#line 1637 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 254 "lings.y" /* yacc.c:1646  */
    {
                    printRule("SIMPLE_ARITHLOGIC", 
                              "TERM ADD_OP_LIST");
                    if((yyvsp[0].typeInfo).type == NOT_APPLICABLE){
                        (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;                       
                    }else{
                        if(isInvalidOperandType((yyvsp[-1].typeInfo).type))
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
#line 1661 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 276 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP_LIST", 
                              "ADD_OP TERM ADD_OP_LIST");
                    if(isInvalidOperandType((yyvsp[-1].typeInfo).type))
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
#line 1687 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 298 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP_LIST", "epsilon");
                    (yyval.typeInfo).type = NOT_APPLICABLE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 1698 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 307 "lings.y" /* yacc.c:1646  */
    {
                    printRule("TERM", 
                              "FACTOR MULT_OP_LIST");

                    if((yyvsp[0].typeInfo).type == NOT_APPLICABLE){
                        (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;                       
                    }else{
                        if(isInvalidOperandType((yyvsp[-1].typeInfo).type))
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
#line 1723 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 330 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP_LIST", 
                              "MULT_OP FACTOR MULT_OP_LIST");
                    if(isInvalidOperandType((yyvsp[-1].typeInfo).type))
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
#line 1743 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 346 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP_LIST", "epsilon");
                    (yyval.typeInfo).type = NOT_APPLICABLE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }
#line 1754 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 355 "lings.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "VAR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).numParams;
                    }
#line 1765 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 362 "lings.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "CONST");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).numParams;
                    }
#line 1776 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 369 "lings.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "( EXPR )");
                    (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).numParams;
                    }
#line 1787 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 376 "lings.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "! FACTOR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).numParams;
                    }
#line 1798 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 385 "lings.y" /* yacc.c:1646  */
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
#line 1819 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 404 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR_LIST", "; EXPR EXPR_LIST");
                    (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).returnType;                   
                }
#line 1830 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 411 "lings.y" /* yacc.c:1646  */
    {
                    printRule("EXPR_LIST", "epsilon");
                }
#line 1838 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 417 "lings.y" /* yacc.c:1646  */
    {
                    if(((yyvsp[0].typeInfo).type == FUNCTION)){
                        yyerror("Arg 2 cannot be function");
                    } 
					(yyval.typeInfo).type=(yyvsp[0].typeInfo).type;
					printRule("IF_EXPR", "COND_IF ) THEN_EXPR");
                }
#line 1850 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 425 "lings.y" /* yacc.c:1646  */
    {
                    if(((yyvsp[-2].typeInfo).type == FUNCTION)){
                        yyerror("Arg 1 cannot be function");
                    }   
                    else if(((yyvsp[0].typeInfo).type == FUNCTION)){
                        yyerror("Arg 3 cannot be function");
                    }  
					else
					(yyval.typeInfo).type=(yyvsp[-2].typeInfo).type|(yyvsp[0].typeInfo).type;
                    printRule("IF_EXPR", 
                              "COND_IF ) THEN_EXPR ELSE EXPR");
                }
#line 1867 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 440 "lings.y" /* yacc.c:1646  */
    {
                    if(((yyvsp[0].typeInfo).type == FUNCTION) || ((yyvsp[0].typeInfo).type == STR) || ((yyvsp[0].typeInfo).type == NULL_TYPE) || ((yyvsp[0].typeInfo).type == LIST)){
                        yyerror("Arg 1 cannot be function or null or list or string");
                    }    
                    printRule("COND_IF","IF ) EXPR");
                }
#line 1878 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 449 "lings.y" /* yacc.c:1646  */
    {
                    printRule("THEN_EXPR","EXPR");
					if((yyvsp[0].typeInfo).type==FUNCTION)
						yyerror("Arg 2 cannot be function");
                }
#line 1888 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 456 "lings.y" /* yacc.c:1646  */
    {
                    printRule("WHILE_EXPR", 
                              "WHILE ( EXPR ) "
                              "LOOP_EXPR");
                    if(((yyvsp[0].typeInfo).type == FUNCTION) || ((yyvsp[0].typeInfo).type == STR) || ((yyvsp[0].typeInfo).type == NULL_TYPE) || ((yyvsp[0].typeInfo).type == LIST)){
                        yyerror("Arg 1 cannot be function or null or list or string");
                    }                
                }
#line 1901 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 465 "lings.y" /* yacc.c:1646  */
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
#line 1916 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 479 "lings.y" /* yacc.c:1646  */
    {
                    string lexeme=string((yyvsp[-3].text));
					if(scopeStack.top().findEntry(string((yyvsp[-3].text))).type==UNDEFINED)
						scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(lexeme,{INT_OR_STR_OR_FLOAT_OR_BOOL, 0,NOT_APPLICABLE,false}));
					else 
					{
					if(!isINTorSTRorFLOATorBOOLcompatible(scopeStack.top().findEntry(string((yyvsp[-3].text))).type))
                        yyerror("Arg 1 cannot be function or null or list");
                    }
					if((yyvsp[-1].typeInfo).type != LIST)
                        yyerror("Arg 2 must be list");
                     /*
                    if(scopeStack.top().findEntry(string($3)).type == NOT_APPLICABLE)
					{
                        string lexeme = string($3);
                        if(assignment_statement){
                            //printf("___Adding %s to symbol table\n", $3);
                        }
                        TYPE_INFO typeinfo = {INT_OR_STR_OR_FLOAT_OR_BOOL, NOT_APPLICABLE, NOT_APPLICABLE,false};
                        bool success = scopeStack.top().addEntry(
                            SYMBOL_TABLE_ENTRY(lexeme, typeinfo));
							}
                    
					else{
                        if(isInvalidOperandType($3.type))
                            yyerror("Arg 3 must be integer or string or float or bool"); 
					}
					*/
                    
                    
                }
#line 1952 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 511 "lings.y" /* yacc.c:1646  */
    {
					(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;  
					printRule("FOR_EXPR", 
                              "FOR ( IDENT IN EXPR ) EXPR");
				}
#line 1964 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 522 "lings.y" /* yacc.c:1646  */
    {
                    printRule("LIST_EXPR", 
                              "LIST ( CONST_LIST )");
                    (yyval.typeInfo).type = LIST;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                               
                }
#line 1976 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 532 "lings.y" /* yacc.c:1646  */
    {
                    printRule("CONST_LIST", 
                              "CONST, CONST_LIST");
                }
#line 1985 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 537 "lings.y" /* yacc.c:1646  */
    {
                    printRule("CONST_LIST", "CONST");
                }
#line 1993 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 543 "lings.y" /* yacc.c:1646  */
    {
                    
                    /*
					if((scopeStack.top().findEntry(string($1)).type!=INT)&&(scopeStack.top().findEntry(string($1)).type!=NOT_APPLICABLE))
						yyerror("Arg 1 must be integer");
                    if($2.type != NULL_TYPE && $2.type == LIST)
                        yyerror("Arg 2 cannot be list");
					*/
                    printRule("ASSIGNMENT_EXPR", 
                              "IDENT INDEX ASSIGN EXPR");
                    string lexeme = string((yyvsp[-1].text));
                    TYPE_INFO exprTypeInfo =
                        scopeStack.top().findEntry(lexeme);
                    if(exprTypeInfo.type == UNDEFINED) 
					{
                      //if(scopeStack.top().findEntry(string($1)).type==NOT_APPLICABLE)
                      
                      scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(lexeme,{NOT_APPLICABLE, NOT_APPLICABLE,NOT_APPLICABLE,false}));
               
						pdf = false;
					}
                    else 
					{ 
						pdf = true;
                    }
                    
                }
#line 2025 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 571 "lings.y" /* yacc.c:1646  */
    {
                    
                    string lexeme = string((yyvsp[-4].text));
                    TYPE_INFO exprTypeInfo = scopeStack.top().findEntry(lexeme);
					if(exprTypeInfo.type == UNDEFINED) 
					{
                      //if(scopeStack.top().findEntry(string($5)).type==NOT_APPLICABLE)
                      
                      scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(lexeme,{(yyvsp[0].typeInfo).type, (yyvsp[0].typeInfo).numParams,(yyvsp[0].typeInfo).returnType,(yyvsp[0].typeInfo).param}));
               
						
					}
						else if(exprTypeInfo.param==true)
						{
							if(!isIntCompatible(exprTypeInfo.type)&&pdf)
								yyerror("Arg 1 must be integer");
							else
							{
							if((isIntCompatible((yyvsp[0].typeInfo).type)==false)&&pdf)
								yyerror("Arg 1 must be integer");
							}
						}
						
					/*	
                    cout<<exprTypeInfo.param<<"isparam"<<endl;
						cout<<isIntCompatible($5.type)<<"intcompatible"<<endl;
						cout<<pdf<<"pdf"<<endl;
					*/
                    scopeStack.top().changeEntry(SYMBOL_TABLE_ENTRY(lexeme,{(yyvsp[0].typeInfo).type, (yyvsp[0].typeInfo).numParams,(yyvsp[0].typeInfo).returnType}));
			    if (((yyvsp[-3].typeInfo).type==LIST) &&(exprTypeInfo.type != LIST))
					yyerror("Arg 1 must be list");
				if (((yyvsp[-3].typeInfo).type==LIST) &&((yyvsp[0].typeInfo).type == LIST))
					yyerror("Arg 1 cannot be list");
                (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType; 
				(yyval.typeInfo).param=(yyvsp[0].typeInfo).param;
                }
#line 2068 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 614 "lings.y" /* yacc.c:1646  */
    {
                    printRule("INDEX", " [[ EXPR ]]");
                    (yyval.typeInfo).type = (yyvsp[-2].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-2].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-2].typeInfo).returnType;			    
                }
#line 2079 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 621 "lings.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    printRule("INDEX", " epsilon");
                }
#line 2090 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 630 "lings.y" /* yacc.c:1646  */
    {
                    printRule("QUIT_EXPR", "QUIT()");
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                       
                }
#line 2101 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 639 "lings.y" /* yacc.c:1646  */
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
#line 2118 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 652 "lings.y" /* yacc.c:1646  */
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
#line 2133 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 665 "lings.y" /* yacc.c:1646  */
    {
                    printRule("INPUT_EXPR", "READ ( )");
					
                    (yyval.typeInfo).type = INT_OR_STR_OR_FLOAT;
					(yyval.typeInfo).numParams = NOT_APPLICABLE;
					(yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2145 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 675 "lings.y" /* yacc.c:1646  */
    {
                    beginScope();
                }
#line 2153 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 679 "lings.y" /* yacc.c:1646  */
    {
                    x=scopeStack.top().getSize();
					//cout<<$6.type;
					if((yyvsp[0].typeInfo).type == FUNCTION)
                            yyerror("Arg 2 cannot be function"); 
                    
                    printRule("FUNCTION_DEF",
                              "FUNCTION ( PARAM_LIST )"
                              " COMPOUND_EXPR");
                    (yyval.typeInfo).type = FUNCTION;
                    (yyval.typeInfo).numParams = x;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).type; 
                    endScope();
                }
#line 2172 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 696 "lings.y" /* yacc.c:1646  */
    {
                    printRule("PARAM_LIST", "PARAMS");
                }
#line 2180 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 700 "lings.y" /* yacc.c:1646  */
    {
                    printRule("PARAM_LIST", "NO PARAMS");
                }
#line 2188 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 706 "lings.y" /* yacc.c:1646  */
    {
                    printRule("NO_PARAMS", "epsilon");
                }
#line 2196 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 712 "lings.y" /* yacc.c:1646  */
    {
                    printRule("PARAMS", "IDENT");
                    string lexeme = string((yyvsp[0].text));
                   
                    // assuming params are ints
					//cout<<lexeme.param<<" before"<<endl;
                    TYPE_INFO exprTypeInfo = 
                     {INT, NOT_APPLICABLE, NOT_APPLICABLE,true};
                    bool success = 
                     scopeStack.top().
                      addEntry(SYMBOL_TABLE_ENTRY
                        (lexeme, exprTypeInfo));
                    if(!success) 
                    yyerror("Multiply defined identifier");
					//cout<<lexeme.param<<" after"<<endl;
                }
#line 2217 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 729 "lings.y" /* yacc.c:1646  */
    {
                    printRule("PARAMS", "IDENT, PARAMS");
                    string lexeme = string((yyvsp[-2].text));
                    //cout<<lexeme.param<<" before"<<endl;
                    // assuming params are ints 
                    TYPE_INFO exprTypeInfo = 
                     {INT, NOT_APPLICABLE, NOT_APPLICABLE,true};
                    bool success =
                     scopeStack.top().addEntry(
                      SYMBOL_TABLE_ENTRY(lexeme, exprTypeInfo));
                    if(!success) 
				yyerror("Multiply defined identifier");
				//cout<<lexeme.param<<" after"<<endl;
                }
#line 2236 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 747 "lings.y" /* yacc.c:1646  */
    {
                    string lexeme = string((yyvsp[-3].text));
					/*
					if (findEntryInAnyScope($1).type == NOT_APPLICABLE) {
                        yyerror("Undefined identifier");
                        return(0);
					*/
					TYPE_INFO temp=scopeStack.top().findEntry(lexeme);
					if(scopeStack.top().findEntry(string((yyvsp[-3].text))).type != FUNCTION)
                            yyerror("Arg 1 must be function");
					//cout<<$3.numParams<<endl;
					//cout<<temp.numParams<<endl;
					if((yyvsp[-1].typeInfo).numParams>temp.numParams)
						yyerror("Too many parameters in function call");
					else if((yyvsp[-1].typeInfo).numParams<temp.numParams)
						yyerror("Too few parameters in function call");
					else
						(yyval.typeInfo).type=scopeStack.top().findEntry(string((yyvsp[-3].text))).returnType;
                    printRule("FUNCTION_CALL", "IDENT"
                              " ( ARG_LIST )");
					
					
                    
                    
					
                    
                }
#line 2268 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 777 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ARG_LIST", "ARGS");
					(yyval.typeInfo).numParams=(yyvsp[0].typeInfo).numParams+1;
					
					
					
					
                }
#line 2281 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 786 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ARG_LIST", "NO_ARGS");
					(yyval.typeInfo).numParams = 0;
                }
#line 2290 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 793 "lings.y" /* yacc.c:1646  */
    {
                    printRule("NO_ARGS", "epsilon");
                }
#line 2298 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 799 "lings.y" /* yacc.c:1646  */
    {
                    
					if(!isIntCompatible((yyvsp[0].typeInfo).type))
					{
                        yyerror("Function parameters must be integer");
                    } 
					(yyval.typeInfo).numParams=(yyval.typeInfo).numParams+1;
					
                    printRule("ARGS", "EXPR");
                }
#line 2313 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 810 "lings.y" /* yacc.c:1646  */
    {
					if(!isIntCompatible((yyvsp[0].typeInfo).type))
					{
                        yyerror("Function parameters must be integer");
                    } 
				}
#line 2324 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 818 "lings.y" /* yacc.c:1646  */
    {
                    if(!isIntCompatible((yyvsp[-3].typeInfo).type))
                        yyerror("Function parameters must be integer");
					(yyval.typeInfo).numParams = 1+(yyvsp[0].typeInfo).numParams;
                    printRule("ARGS", "EXPR, ARGS");
                }
#line 2335 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 827 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP", "+");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2346 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 834 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP", "-");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }
#line 2357 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 841 "lings.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP", "|");
                    (yyval.typeInfo).type = LOGICAL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }
#line 2368 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 850 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "*");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2379 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 857 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "/");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2390 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 864 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "&");
                    (yyval.typeInfo).type = LOGICAL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2401 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 871 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "\%\%");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2412 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 878 "lings.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "^");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                }
#line 2423 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 887 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "<");
                }
#line 2431 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 891 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", ">");
                }
#line 2439 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 895 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "<=");
                }
#line 2447 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 899 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", ">=");
                }
#line 2455 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 903 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "==");
                }
#line 2463 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 907 "lings.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "!=");
                }
#line 2471 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 913 "lings.y" /* yacc.c:1646  */
    {
                    printRule("VAR", "ENTIRE_VAR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                     
                }
#line 2482 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 920 "lings.y" /* yacc.c:1646  */
    {
                    printRule("VAR", "SINGLE_ELEMENT");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;  
                    }
#line 2493 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 930 "lings.y" /* yacc.c:1646  */
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
#line 2513 "lings.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 948 "lings.y" /* yacc.c:1646  */
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
#line 2529 "lings.tab.c" /* yacc.c:1646  */
    break;


#line 2533 "lings.tab.c" /* yacc.c:1646  */
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
#line 961 "lings.y" /* yacc.c:1906  */


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

bool isIntOrFloatOrBoolCompatible(const int theType)
{
    return((theType == INT) || (theType == FLOAT) ||
		 (theType == BOOL) ||
           (theType == INT_OR_STR_OR_FLOAT_OR_BOOL));
}

bool isINTorSTRorFLOATorBOOLcompatible(const int theType)
{
	return((theType==INT)||(theType==FLOAT)||(theType==BOOL)||(theType==STR)||(theType==INT_OR_STR_OR_FLOAT_OR_BOOL));
}
// Determine whether given type is compatible with INT.
bool isIntCompatible(const int theType)
{
    return((theType & INT) ||(theType & BOOL));
          
}

// Determine whether given type is compatible with BOOL.
bool isBoolCompatible(const int theType)
{
    return(theType & BOOL);
}

// Determine whether given type is compatible with FLOAT.
bool isFloatCompatible(const int theType)
{
    return(theType & FLOAT);
}

bool isInvalidOperandType(const int theType)
{
    return((theType == FUNCTION) ||
           (theType == NULL_TYPE) ||
		(theType == LIST) ||
           (theType == STR));
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
