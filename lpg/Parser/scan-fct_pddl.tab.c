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


/* Substitute the variable and function names.  */
#define yyparse         fct_pddlparse
#define yylex           fct_pddllex
#define yyerror         fct_pddlerror
#define yydebug         fct_pddldebug
#define yynerrs         fct_pddlnerrs

#define yylval          fct_pddllval
#define yychar          fct_pddlchar

/* Copy the first part of user declarations.  */
#line 19 "scan-fct_pddl.y" /* yacc.c:339  */

#ifdef YYDEBUG
   int yydebug = 1;
#define YYPRINT(file, type, value)   yyprint (file, type, value)  
#endif

#define YYMAXDEPTH 100000 
#define YY_NO_UNPUT

#define YYSTACK_USE_ALLOCA FALSE

#include <stdio.h>
#include <string.h> 
#include "ff.h"
#include "lpg.h"
#include "memory.h"
#include "parse.h"

#define yyin fct_pddlin
#define yytext fct_pddltext

#ifndef SCAN_ERR
#define SCAN_ERR
#define DEFINE_EXPECTED            0
#define PROBLEM_EXPECTED           1
#define PROBNAME_EXPECTED          2
#define LBRACKET_EXPECTED          3
#define RBRACKET_EXPECTED          4
#define DOMDEFS_EXPECTED           5
#define REQUIREM_EXPECTED          6
#define TYPEDLIST_EXPECTED         7
#define DOMEXT_EXPECTED            8
#define DOMEXTNAME_EXPECTED        9
#define TYPEDEF_EXPECTED          10
#define CONSTLIST_EXPECTED        11
#define PREDDEF_EXPECTED          12 
#define NAME_EXPECTED             13
#define VARIABLE_EXPECTED         14
#define ACTIONFUNCTOR_EXPECTED    15
#define ATOM_FORMULA_EXPECTED     16
#define EFFECT_DEF_EXPECTED       17
#define NEG_FORMULA_EXPECTED      18
#define NOT_SUPPORTED             19
#define SITUATION_EXPECTED        20
#define SITNAME_EXPECTED          21
#define BDOMAIN_EXPECTED          22
#define BADDOMAIN                 23
#define INIFACTS                  24
#define GOALDEF                   25
#define ADLGOAL                   26
#endif


static char * serrmsg[] = {
  "'define' expected",
  "'problem' expected",
  "problem name expected",
  "'(' expected",
  "')' expected",
  "additional domain definitions expected",
  "requirements (e.g. ':strips') expected",
  "typed list of <%s> expected",
  "domain extension expected",
  "domain to be extented expected",
  "type definition expected",
  "list of constants expected",
  "predicate definition expected",
  "<name> expected",
  "<variable> expected",
  "action functor expected",
  "atomic formula expected",
  "effect definition expected",
  "negated atomic formula expected",
  "requirement %s not supported by this IPP version",  
  "'situation' expected",
  "situation name expected",
  "':domain' expected",
  "this problem needs another domain file",
  "initial facts definition expected",
  "goal definition expected",
  "first order logic expression expected",
  NULL
};


static int sact_err;
static char *sact_err_par = NULL;
static Bool sis_negated = FALSE;

 int yylex(void);
 int yyerror(char *msg); 

/* 
 * call	bison -pfct -bscan-fct scan-fct.y
 */
void fcterr( int errno, char *par ) {

  sact_err = errno;

  if ( sact_err_par ) {
    free( sact_err_par );
  }
  if ( par ) {
    sact_err_par = new_Token( strlen(par)+1 );
    strcpy( sact_err_par, par);
  } else {
    sact_err_par = NULL;
  }

}

 extern void opserr( int errno, char *par );
 extern int supported( char *str );


#line 190 "scan-fct_pddl.tab.c" /* yacc.c:339  */

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
extern int fct_pddldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DEFINE_TOK = 258,
    PROBLEM_TOK = 259,
    SITUATION_TOK = 260,
    BSITUATION_TOK = 261,
    OBJECTS_TOK = 262,
    BDOMAIN_TOK = 263,
    INIT_TOK = 264,
    GOAL_TOK = 265,
    AND_TOK = 266,
    NOT_TOK = 267,
    NAME = 268,
    VARIABLE = 269,
    EQUAL_TOK = 270,
    FORALL_TOK = 271,
    IMPLY_TOK = 272,
    OR_TOK = 273,
    EXISTS_TOK = 274,
    EITHER_TOK = 275,
    OPEN_PAREN = 276,
    CLOSE_PAREN = 277,
    REQUIREMENTS_TOK = 278,
    GREATER_OR_EQUAL_TOK = 279,
    LESS_THAN_OR_EQUAL_TOK = 280,
    INTVAL = 281,
    FLOATVAL = 282,
    PLUS_TOK = 283,
    MINUS_TOK = 284,
    MUL_TOK = 285,
    DIV_TOK = 286,
    GREATER_TOK = 287,
    LESS_THAN_TOK = 288,
    METRIC_TOK = 289,
    MINIMIZE_TOK = 290,
    MAXIMIZE_TOK = 291,
    LENGTH_TOK = 292,
    SERIAL_TOK = 293,
    PARALLEL_TOK = 294,
    TOTAL_TIME_TOK = 295,
    TIMED_EL_TOK = 296,
    UMINUS = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 139 "scan-fct_pddl.y" /* yacc.c:355  */


  char string[MAX_LENGTH];
  char* pstring;
  PlNode* pPlNode;
  FactList* pFactList;
  TokenList* pTokenList;
  TypedList* pTypedList;

    int ival;
    float fval;

#line 283 "scan-fct_pddl.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE fct_pddllval;

int fct_pddlparse (void);



/* Copy the second part of user declarations.  */

#line 300 "scan-fct_pddl.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   258,   258,   261,   268,   267,   283,   293,   303,   306,
     308,   310,   312,   315,   317,   319,   326,   352,   351,   363,
     370,   380,   382,   394,   409,   408,   426,   439,   445,   451,
     457,   467,   482,   498,   510,   525,   531,   541,   553,   566,
     578,   590,   598,   605,   627,   632,   637,   642,   647,   655,
     662,   669,   676,   683,   690,   698,   708,   720,   765,   769,
     782,   788,   797,   809,   813,   824,   830,   840,   847,   859,
     861,   870,   881,   901,   903,   912,   923,   944,   950,   960,
     970,   980,   992,   994,  1006,  1015,  1020,  1027,  1037,  1049,
    1062,  1074,  1086,  1092,  1098,  1103,  1109,  1120,  1131,  1142,
    1153,  1164,  1175,  1186,  1200,  1203,  1205,  1207,  1211,  1219,
    1225,  1229,  1224,  1240,  1244,  1243
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEFINE_TOK", "PROBLEM_TOK",
  "SITUATION_TOK", "BSITUATION_TOK", "OBJECTS_TOK", "BDOMAIN_TOK",
  "INIT_TOK", "GOAL_TOK", "AND_TOK", "NOT_TOK", "NAME", "VARIABLE",
  "EQUAL_TOK", "FORALL_TOK", "IMPLY_TOK", "OR_TOK", "EXISTS_TOK",
  "EITHER_TOK", "OPEN_PAREN", "CLOSE_PAREN", "REQUIREMENTS_TOK",
  "GREATER_OR_EQUAL_TOK", "LESS_THAN_OR_EQUAL_TOK", "INTVAL", "FLOATVAL",
  "PLUS_TOK", "MINUS_TOK", "MUL_TOK", "DIV_TOK", "GREATER_TOK",
  "LESS_THAN_TOK", "METRIC_TOK", "MINIMIZE_TOK", "MAXIMIZE_TOK",
  "LENGTH_TOK", "SERIAL_TOK", "PARALLEL_TOK", "TOTAL_TIME_TOK",
  "TIMED_EL_TOK", "UMINUS", "$accept", "file", "problem_definition", "$@1",
  "problem_name", "base_domain_name", "problem_defs", "objects_def",
  "init_def", "$@2", "init_el_plus", "init_el", "goal_def", "$@3",
  "adl_goal_description", "f_comp", "f_exp", "f_head", "binary_comp",
  "num_exp", "number", "function_symbol", "adl_goal_description_star",
  "literal_term", "atomic_formula_term", "term_star", "term", "name_plus",
  "typed_list_name", "typed_list_variable", "predicate", "literal_name",
  "atomic_formula_name", "name_star", "metric_spec", "optimization",
  "ground_f_exp", "length_spec", "ser_par", "type", "either",
  "require_def", "$@4", "$@5", "require_key_star", "$@6", YY_NULLPTR
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
     295,   296,   297
};
# endif

#define YYPACT_NINF -127

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-127)))

#define YYTABLE_NINF -79

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    23,    33,    -5,  -127,  -127,  -127,    15,    70,    69,
      93,     1,    69,    88,    69,    69,    69,  -127,  -127,  -127,
      90,   112,   113,  -127,  -127,  -127,    22,   118,  -127,  -127,
    -127,  -127,  -127,  -127,     5,   131,   132,   119,   134,   150,
    -127,  -127,   124,    32,   145,    10,  -127,   112,   155,  -127,
    -127,     2,   152,   119,  -127,  -127,   166,   154,  -127,  -127,
    -127,  -127,  -127,    19,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,   171,   177,   182,  -127,  -127,   160,  -127,   155,   190,
     192,  -127,    63,    60,   201,  -127,  -127,   134,   134,    74,
     194,   134,   134,   196,  -127,  -127,  -127,  -127,   179,   102,
    -127,   203,   124,   124,   124,   124,   102,   197,  -127,   198,
     199,  -127,  -127,   112,    40,   200,   205,    87,   202,   201,
     204,   134,   206,   207,   208,   210,   134,   209,   210,    -1,
     179,  -127,  -127,  -127,  -127,   211,   102,  -127,   212,   124,
     124,    51,   122,   124,   124,   124,   124,   213,  -127,  -127,
    -127,  -127,  -127,  -127,   102,   158,   214,   189,   215,  -127,
    -127,  -127,  -127,  -127,  -127,     8,   216,   217,  -127,   218,
     179,   179,   179,   179,   219,  -127,  -127,   203,  -127,   220,
     221,   222,   223,  -127,   224,   225,  -127,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,  -127,    87,    87,
      87,    87,  -127,  -127,  -127,   210,   155,   134,  -127,   134,
     179,    87,   139,   120,   179,    87,   179,    87,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,    87,   120,    87,    87,
    -127,   236,   237,   238,   239,   220,  -127,   240,   224,   241,
     228,   242,   232,   210,  -127,  -127,  -127,  -127,  -127,  -127,
    -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     2,     4,     1,     3,     0,     0,     8,
       0,     0,     8,     0,     8,     8,     8,    14,    15,    13,
       0,    69,     0,    17,    24,   110,     0,   105,    12,     5,
       9,    10,    11,     6,    69,     0,     0,     0,     0,     0,
      85,    86,     0,     0,     0,     0,    72,    69,     0,    16,
       7,     0,     0,    19,    21,    80,     0,     0,    33,    26,
      61,   111,    57,     0,    55,    56,    94,    93,    92,    54,
      43,     0,     0,     0,   104,   108,     0,    71,    67,     0,
       0,    77,    78,     0,    82,    18,    20,    58,     0,    46,
       0,     0,    58,     0,    47,    48,    44,    45,     0,    63,
      25,   113,     0,     0,     0,     0,    43,     0,    84,     0,
       0,   109,    68,    69,     0,     0,     0,     0,     0,    82,
       0,    58,     0,     0,     0,    73,     0,     0,    73,     0,
       0,    41,    35,    65,    66,     0,    63,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,   106,
     107,    70,    78,    79,    63,     0,     0,     0,     0,    83,
      81,    59,    27,    29,    60,    73,     0,     0,    28,     0,
       0,     0,     0,     0,     0,    62,    64,   113,   112,     0,
       0,     0,     0,    49,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,    23,    22,    76,    73,     0,     0,    30,     0,
       0,    35,     0,    35,     0,    35,     0,    35,    34,   115,
      51,    98,    99,    89,    50,    96,    97,    88,    52,   102,
     103,    90,    53,   100,   101,    91,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,    73,    32,    31,    38,    37,    39,    40,
      74
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,   262,  -127,  -127,  -127,  -127,   195,  -127,  -127,  -127,
     172,  -127,  -127,  -127,   -37,  -127,  -105,   -78,  -127,   -42,
     144,   -60,   -79,  -127,   178,   -92,  -127,   -73,   -28,  -126,
     176,   149,   188,   151,  -127,  -127,   -22,  -127,  -127,   104,
     106,  -127,  -127,  -127,    95,  -127
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     9,    12,    13,    14,    15,    37,
      52,    53,    16,    38,   121,    58,   130,    67,    98,   132,
      69,    70,   122,    59,    60,   147,   136,    79,    35,   166,
      84,    54,    55,   120,    17,    42,    71,    18,    44,    47,
      48,    19,    39,   101,   138,   177
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      68,    57,   169,   106,   117,   112,    46,   135,    21,    22,
      23,    24,    62,   127,    80,    81,     1,    82,    34,    77,
     131,    68,   165,    75,    25,   174,     4,   170,   171,   172,
     173,    76,    62,     5,    45,    26,     8,    45,    27,   204,
      63,   107,   161,    83,   176,    64,    65,   102,   103,   104,
     105,   123,   131,    81,   126,   152,   154,    40,    41,    66,
     139,   141,   143,   145,    62,   210,   212,   214,   216,   154,
      72,    73,    63,   183,    10,   156,    62,    64,    65,   240,
     140,   142,   144,   146,   116,   151,    64,    65,   -78,   167,
      11,    66,   131,   131,   131,   131,   -78,   179,   181,   184,
     187,   189,   191,   193,   195,   244,    20,   247,   155,   249,
      29,   251,    33,    64,    65,   133,   134,   180,   182,   185,
     188,   190,   192,   194,   196,    34,    36,   260,   211,   213,
     215,   217,   131,   241,   131,    62,   131,    62,   131,    43,
      51,   155,   183,    63,   186,    63,    64,    65,    64,    65,
      64,    65,    62,    49,    50,    56,   236,   237,   238,   239,
     129,   246,    66,    61,    66,    64,    65,    74,    78,   245,
     242,   248,   243,   250,    85,   252,   100,    87,    88,    81,
     111,    89,    90,    91,    92,    93,   198,   199,   200,   201,
      94,    95,    62,   108,   245,   248,   250,   252,    96,    97,
     129,    80,    81,   109,   152,    64,    65,    28,   110,    30,
      31,    32,   113,   114,   119,   125,   137,   128,    62,   148,
     149,   150,   153,   157,   165,    86,   160,   118,   162,   163,
     164,   168,    99,   175,   178,   197,   202,   203,   207,   208,
     209,   218,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   253,   254,
     255,   256,   257,   258,   259,     6,   124,   158,   115,   205,
     159,   206,   219
};

static const yytype_uint8 yycheck[] =
{
      42,    38,   128,    63,    82,    78,    34,    99,     7,     8,
       9,    10,    13,    92,    12,    13,    21,    15,    13,    47,
      98,    63,    14,    13,    23,   130,     3,    28,    29,    30,
      31,    21,    13,     0,    29,    34,    21,    29,    37,   165,
      21,    63,   121,    41,   136,    26,    27,    28,    29,    30,
      31,    88,   130,    13,    91,    15,   116,    35,    36,    40,
     102,   103,   104,   105,    13,   170,   171,   172,   173,   129,
      38,    39,    21,    22,     4,   117,    13,    26,    27,   205,
     102,   103,   104,   105,    21,   113,    26,    27,    14,   126,
      21,    40,   170,   171,   172,   173,    22,   139,   140,   141,
     142,   143,   144,   145,   146,   210,    13,   212,    21,   214,
      22,   216,    22,    26,    27,    13,    14,   139,   140,   141,
     142,   143,   144,   145,   146,    13,    13,   253,   170,   171,
     172,   173,   210,   206,   212,    13,   214,    13,   216,    21,
      21,    21,    22,    21,    22,    21,    26,    27,    26,    27,
      26,    27,    13,    22,    22,    21,   198,   199,   200,   201,
      21,    22,    40,    13,    40,    26,    27,    22,    13,   211,
     207,   213,   209,   215,    22,   217,    22,    11,    12,    13,
      20,    15,    16,    17,    18,    19,    28,    29,    30,    31,
      24,    25,    13,    22,   236,   237,   238,   239,    32,    33,
      21,    12,    13,    26,    15,    26,    27,    12,    26,    14,
      15,    16,    22,    21,    13,    21,    13,    21,    13,    22,
      22,    22,    22,    21,    14,    53,    22,    83,    22,    22,
      22,    22,    56,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,     3,    88,   118,    80,   165,
     119,   165,   177
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    44,    45,     3,     0,    44,    46,    21,    47,
       4,    21,    48,    49,    50,    51,    55,    77,    80,    84,
      13,     7,     8,     9,    10,    23,    34,    37,    49,    22,
      49,    49,    49,    22,    13,    71,    13,    52,    56,    85,
      35,    36,    78,    21,    81,    29,    71,    82,    83,    22,
      22,    21,    53,    54,    74,    75,    21,    57,    58,    66,
      67,    13,    13,    21,    26,    27,    40,    60,    62,    63,
      64,    79,    38,    39,    22,    13,    21,    71,    13,    70,
      12,    13,    15,    41,    73,    22,    53,    11,    12,    15,
      16,    17,    18,    19,    24,    25,    32,    33,    61,    73,
      22,    86,    28,    29,    30,    31,    64,    79,    22,    26,
      26,    20,    70,    22,    21,    75,    21,    60,    63,    13,
      76,    57,    65,    57,    67,    21,    57,    65,    21,    21,
      59,    60,    62,    13,    14,    68,    69,    13,    87,    62,
      79,    62,    79,    62,    79,    62,    79,    68,    22,    22,
      22,    71,    15,    22,    64,    21,    62,    21,    74,    76,
      22,    65,    22,    22,    22,    14,    72,    57,    22,    72,
      28,    29,    30,    31,    59,    22,    68,    88,    22,    62,
      79,    62,    79,    22,    62,    79,    22,    62,    79,    62,
      79,    62,    79,    62,    79,    62,    79,    22,    28,    29,
      30,    31,    22,    22,    72,    82,    83,    22,    22,    22,
      59,    62,    59,    62,    59,    62,    59,    62,    22,    87,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    62,    62,    62,    62,
      72,    70,    57,    57,    59,    62,    22,    59,    62,    59,
      62,    59,    62,    22,    22,    22,    22,    22,    22,    22,
      72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    44,    46,    45,    47,    48,    49,    49,
      49,    49,    49,    49,    49,    49,    50,    52,    51,    53,
      53,    54,    54,    54,    56,    55,    57,    57,    57,    57,
      57,    57,    57,    57,    58,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    61,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    63,    63,    64,    65,    65,
      66,    66,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    71,    71,    72,    72,    72,    72,    73,    73,    74,
      74,    75,    76,    76,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    81,    81,    81,    82,    83,
      85,    86,    84,    87,    88,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     6,     4,     4,     0,     2,
       2,     2,     2,     1,     1,     1,     4,     0,     5,     1,
       2,     1,     5,     5,     0,     5,     1,     4,     4,     4,
       5,     7,     7,     1,     5,     1,     4,     5,     5,     5,
       5,     1,     4,     1,     1,     1,     1,     1,     1,     4,
       5,     5,     5,     5,     1,     1,     1,     1,     0,     2,
       4,     1,     4,     0,     2,     1,     1,     1,     2,     0,
       5,     3,     2,     0,     5,     3,     2,     1,     1,     4,
       1,     4,     0,     2,     5,     1,     1,     4,     5,     5,
       5,     5,     1,     1,     1,     3,     5,     5,     5,     5,
       5,     5,     5,     5,     4,     0,     4,     4,     2,     3,
       0,     0,     7,     0,     0,     3
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
        case 4:
#line 268 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  fcterr( PROBNAME_EXPECTED, NULL ); 
}
#line 1565 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 272 "scan-fct_pddl.y" /* yacc.c:1646  */
    {  
  gproblem_name = (yyvsp[-2].pstring);
  if ( gcmd_line.display_info >= 1 ) {
    printf(" problem '%s' defined", gproblem_name);
  }
}
#line 1576 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 284 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy((yyval.pstring), (yyvsp[-1].string));
}
#line 1585 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 294 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  if ( SAME != strcmp((yyvsp[-1].string), gdomain_name) ) {
    fcterr( BADDOMAIN, NULL );
    yyerror(NULL);
  }
}
#line 1596 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 327 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  gparse_objects = (yyvsp[-1].pTypedList);
}
#line 1604 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 352 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  fcterr( INIFACTS, NULL ); 
}
#line 1612 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 356 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  gorig_initial_facts = new_PlNode(AND);
  gorig_initial_facts->sons = (yyvsp[-1].pPlNode); /*4 perche' una mid rule action conta 1*/
}
#line 1621 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 365 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=(yyvsp[0].pPlNode);
}
#line 1629 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 372 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=(yyvsp[-1].pPlNode);
  (yyval.pPlNode)->next = (yyvsp[0].pPlNode);
}
#line 1638 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 383 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  /* gestisce i timed initial facts */
  PlNode *pln;
  (yyval.pPlNode)=new_PlNode(TIMED_FACT);
  (yyval.pPlNode)->sons=(yyvsp[-1].pPlNode);
  pln = new_PlNode(ATOM);
  pln->atom=(yyvsp[-2].pTokenList);
  (yyval.pPlNode)->sons->next=pln; 
  gnum_tmd_init_fcts++;
}
#line 1653 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 395 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  PlNode* pln;
  (yyval.pPlNode)=new_PlNode(EQUAL_CONN);
  pln = new_PlNode(FN_HEAD);
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->atom = (yyvsp[-2].pTokenList);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 1666 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 409 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  fcterr( GOALDEF, NULL ); 
}
#line 1674 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 413 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].pPlNode)->next = gorig_goal_facts;
  gorig_goal_facts = (yyvsp[-1].pPlNode);
}
#line 1683 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 427 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  if ( sis_negated ) {
    (yyval.pPlNode) = new_PlNode(NOT);
    (yyval.pPlNode)->sons = new_PlNode(ATOM);
    (yyval.pPlNode)->sons->atom = (yyvsp[0].pTokenList);
    sis_negated = FALSE;
  } else {
    (yyval.pPlNode) = new_PlNode(ATOM);
    (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
  }
}
#line 1699 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 440 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1708 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 446 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pPlNode) = new_PlNode(OR);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1717 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 452 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pPlNode) = new_PlNode(NOT);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1726 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 458 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *np = new_PlNode(NOT);
  np->sons = (yyvsp[-2].pPlNode);
  np->next = (yyvsp[-1].pPlNode);

  (yyval.pPlNode) = new_PlNode(OR);
  (yyval.pPlNode)->sons = np;
}
#line 1739 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 470 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 

  PlNode *pln;

  pln = new_PlNode(EX);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 1755 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 485 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 

  PlNode *pln;

  pln = new_PlNode(ALL);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 1771 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 511 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
//AGGIUNTALAZZA
  //    printf("\n\nNumeric goal still not allowed in the goal definition\n\n");
    // exit(1);
//FINEAGGIUNTALAZZA
  (yyval.pPlNode) = new_PlNode(BIN_COMP);
  (yyval.pPlNode)->sons = (yyvsp[-3].pPlNode);
  (yyval.pPlNode)->sons->sons= (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next= (yyvsp[-1].pPlNode);
}
#line 1786 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 526 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
       (yyval.pPlNode)=new_PlNode(NUM_EXP);
       (yyval.pPlNode)->sons = (yyvsp[0].pPlNode);
}
#line 1795 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 532 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(UMINUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-1].pPlNode);
}
#line 1808 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 542 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MINUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);

}
#line 1823 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 554 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(PLUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);


}
#line 1839 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 567 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MUL_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);

}
#line 1854 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 579 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(DIV_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);

}
#line 1869 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 591 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(FN_HEAD);
  (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
}
#line 1878 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 599 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-2].pstring);
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 1888 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 606 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[0].pstring);
}
#line 1897 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 628 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(GREATER_THAN_CONN);
}
#line 1905 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 633 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(LESS_THAN_CONN);
}
#line 1913 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 638 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(EQUAL_CONN);
}
#line 1921 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 643 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(GREATER_OR_EQUAL_CONN);
}
#line 1929 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 648 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(LESS_THAN_OR_EQUAL_CONN);
}
#line 1937 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 656 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(UMINUS_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
   
}
#line 1947 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 663 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(MINUS_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 1957 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 670 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(PLUS_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 1967 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 677 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(MUL_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 1977 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 684 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(DIV_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 1987 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 691 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
    (yyval.pPlNode)=new_PlNode(ATOM);
    (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
}
#line 1996 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 699 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  Token t;
  t = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy (t, (yyvsp[0].string));
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = t;

}
#line 2009 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 709 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  Token t;
  t = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy (t, (yyvsp[0].string));
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = t;

}
#line 2022 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 721 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pstring), (yyvsp[0].string) );
}
#line 2031 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 765 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = NULL;
}
#line 2039 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 770 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].pPlNode)->next = (yyvsp[0].pPlNode);
  (yyval.pPlNode) = (yyvsp[-1].pPlNode);
}
#line 2048 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 783 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTokenList) = (yyvsp[-1].pTokenList);
  sis_negated = TRUE;
}
#line 2057 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 789 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = (yyvsp[0].pTokenList);
}
#line 2065 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 798 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-2].pstring);
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 2075 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 809 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = NULL;
}
#line 2083 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 814 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-1].pstring);
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 2093 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 825 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pstring), (yyvsp[0].string));
}
#line 2102 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 831 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pstring), (yyvsp[0].string));
}
#line 2111 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 841 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pTokenList)->item, (yyvsp[0].string));
}
#line 2121 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 848 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token(strlen((yyvsp[-1].string)) + 1);
  strcpy((yyval.pTokenList)->item, (yyvsp[-1].string));
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 2132 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 859 "scan-fct_pddl.y" /* yacc.c:1646  */
    { (yyval.pTypedList) = NULL; }
#line 2138 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 862 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-4].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-4].string) );
  (yyval.pTypedList)->type = (yyvsp[-2].pTokenList);
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2150 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 871 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-2].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-2].string) );
  (yyval.pTypedList)->type = new_TokenList();
  (yyval.pTypedList)->type->item = new_Token( strlen((yyvsp[-1].pstring))+1 );
  strcpy( (yyval.pTypedList)->type->item, (yyvsp[-1].pstring) );
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2164 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 882 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-1].string) );
  if ( (yyvsp[0].pTypedList) ) {/* another element (already typed) is following */
    (yyval.pTypedList)->type = copy_TokenList( (yyvsp[0].pTypedList)->type );
  } else {/* no further element - it must be an untyped list */
    (yyval.pTypedList)->type = new_TokenList();
    (yyval.pTypedList)->type->item = new_Token( strlen(STANDARD_TYPE)+1 );
    strcpy( (yyval.pTypedList)->type->item, STANDARD_TYPE );
  }
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2182 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 901 "scan-fct_pddl.y" /* yacc.c:1646  */
    { (yyval.pTypedList) = NULL; }
#line 2188 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 904 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-4].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-4].string) );
  (yyval.pTypedList)->type = (yyvsp[-2].pTokenList);
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2200 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 913 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-2].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-2].string) );
  (yyval.pTypedList)->type = new_TokenList();
  (yyval.pTypedList)->type->item = new_Token( strlen((yyvsp[-1].pstring))+1 );
  strcpy( (yyval.pTypedList)->type->item, (yyvsp[-1].pstring) );
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2214 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 924 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-1].string) );
  if ( (yyvsp[0].pTypedList) ) {/* another element (already typed) is following */
    (yyval.pTypedList)->type = copy_TokenList( (yyvsp[0].pTypedList)->type );
  } else {/* no further element - it must be an untyped list */
    (yyval.pTypedList)->type = new_TokenList();
    (yyval.pTypedList)->type->item = new_Token( strlen(STANDARD_TYPE)+1 );
    strcpy( (yyval.pTypedList)->type->item, STANDARD_TYPE );
  }
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2232 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 945 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pstring), (yyvsp[0].string));
}
#line 2241 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 951 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token( strlen(EQ_STR)+1 );
  strcpy( (yyval.pstring), EQ_STR );
}
#line 2250 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 961 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *tmp;

  tmp = new_PlNode(ATOM);
  tmp->atom = (yyvsp[-1].pTokenList);
  (yyval.pPlNode) = new_PlNode(NOT);
  (yyval.pPlNode)->sons = tmp;
}
#line 2263 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 971 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(ATOM);
  (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
}
#line 2272 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 981 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-2].pstring);
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 2282 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 992 "scan-fct_pddl.y" /* yacc.c:1646  */
    { (yyval.pTokenList) = NULL; }
#line 2288 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 995 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token(strlen((yyvsp[-1].string)) + 1);
  strcpy((yyval.pTokenList)->item, (yyvsp[-1].string));
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 2299 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1007 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  gmetric_exp = new_PlNode (METRIC_CONN);
  gmetric_exp->sons = (yyvsp[-2].pPlNode);
  gmetric_exp->sons->sons = (yyvsp[-1].pPlNode);
}
#line 2309 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1016 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode ( MINIMIZE_CONN);
}
#line 2317 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1021 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode ( MAXIMIZE_CONN);
}
#line 2325 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1028 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(UMINUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-1].pPlNode);
}
#line 2338 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1038 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MINUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);

}
#line 2353 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1050 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(PLUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);


}
#line 2369 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1063 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MUL_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);

}
#line 2384 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1075 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(DIV_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);

}
#line 2399 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1087 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
       (yyval.pPlNode)=new_PlNode(NUM_EXP);
       (yyval.pPlNode)->sons = (yyvsp[0].pPlNode);
}
#line 2408 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1093 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(FN_HEAD);
  (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
}
#line 2417 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1099 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(TOTAL_TIME_CONN);
}
#line 2425 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1104 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = (yyvsp[-1].pPlNode);
}
#line 2433 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1110 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MINUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 2447 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1121 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MINUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 2461 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1132 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(PLUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 2475 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1143 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(PLUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 2489 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1154 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(DIV_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 2503 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1165 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(DIV_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 2517 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1176 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MUL_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 2531 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1187 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MUL_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 2545 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1212 "scan-fct_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pstring) = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pstring), (yyvsp[0].string));
}
#line 2554 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1225 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  opserr( REQUIREM_EXPECTED, NULL ); 
}
#line 2562 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1229 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  if ( !supported( (yyvsp[0].string) ) ) {
    opserr( NOT_SUPPORTED, (yyvsp[0].string) );
    yyerror(NULL);
  }
}
#line 2573 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1244 "scan-fct_pddl.y" /* yacc.c:1646  */
    { 
  if ( !supported( (yyvsp[0].string) ) ) {
    opserr( NOT_SUPPORTED, (yyvsp[0].string) );
    yyerror(NULL);
  }
}
#line 2584 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
    break;


#line 2588 "scan-fct_pddl.tab.c" /* yacc.c:1646  */
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
#line 1255 "scan-fct_pddl.y" /* yacc.c:1906  */



#include "lex.fct_pddl.c"


/**********************************************************************
 * Functions
 **********************************************************************/



int fct_pddlerror(char *msg)

{

  if (msg)
    printf("\n%s", msg);

  fprintf(stderr,"\n%s: syntax error in line %d, '%s':\n", 
	  gact_filename, lineno, yytext );
  
  if ( sact_err_par ) {
    fprintf(stderr, "%s%s\n", serrmsg[sact_err], sact_err_par );
  } else {
    fprintf(stderr,"%s\n", serrmsg[sact_err] );
  }
  fflush( stdout );
  
  exit( 1 );

}



void load_fct_file( char *filename ) 

{

  FILE *fp;/* pointer to input files */
  char tmp[MAX_LENGTH] = "";

  /* open fact file 
   */
  if( ( fp = fopen( filename, "r" ) ) == NULL ) {
    sprintf(tmp, "\n Can't find fact file: %s\n\n", filename );
    perror(tmp);
    exit ( 1 );
  }

  gact_filename = filename;
  lineno = 1; 
  yyin = fp;

  yyparse();

  fclose( fp );/* and close file again */

}

#ifdef YYDEBUG
void yyprint (thisfile, mytype, value)
     FILE *thisfile;
     int mytype;
     YYSTYPE value;
{
  fprintf (thisfile, " %s", value.string);
  /*
    if (type == VAR)
    fprintf (file, " %s", value.tptr->name);
    else if (type == NUM)
    fprintf (file, " %d", value.val);
  */
}
#endif
