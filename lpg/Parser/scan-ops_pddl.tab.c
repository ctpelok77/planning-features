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
#define yyparse         ops_pddlparse
#define yylex           ops_pddllex
#define yyerror         ops_pddlerror
#define yydebug         ops_pddldebug
#define yynerrs         ops_pddlnerrs

#define yylval          ops_pddllval
#define yychar          ops_pddlchar

/* Copy the first part of user declarations.  */
#line 19 "scan-ops_pddl.y" /* yacc.c:339  */


#define YYMAXDEPTH 100000 
#define YY_NO_UNPUT

#define YYSTACK_USE_ALLOCA FALSE

#include <stdio.h>
#include <string.h> 
#include "ff.h"
#include "memory.h"
#include "parse.h"


#define yyin ops_pddlin
#define yytext ops_pddltext

#ifndef SCAN_ERR
#define SCAN_ERR
#define DOMDEF_EXPECTED            0
#define DOMAIN_EXPECTED            1
#define DOMNAME_EXPECTED           2
#define LBRACKET_EXPECTED          3
#define RBRACKET_EXPECTED          4
#define DOMDEFS_EXPECTED           5
#define REQUIREM_EXPECTED          6
#define TYPEDLIST_EXPECTED         7
#define LITERAL_EXPECTED           8
#define PRECONDDEF_UNCORRECT       9
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
#define ACTION                    20
#define DERIVED_PRED_EXPECTED     21
#endif


#define NAME_STR "name\0"
#define VARIABLE_STR "variable\0"
#define STANDARD_TYPE "OBJECT\0"
 

static char *serrmsg[] = {
  "domain definition expected",
  "'domain' expected",
  "domain name expected",
  "'(' expected",
  "')' expected",
  "additional domain definitions expected",
  "requirements (e.g. ':STRIPS') expected",
  "typed list of <%s> expected",
  "literal expected",
  "uncorrect precondition definition",
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
  "action definition is not correct",
  "derived predicate definition is not correct",
  NULL
};


//void opserr( int errno, char *par );


static int sact_err;
static char *sact_err_par = NULL;
static PlOperator *scur_op = NULL;
static PlOperator *der_op = NULL;
static Bool sis_negated = FALSE;

 int yylex(void);
 int yyerror(char *msg); 

/* 
 * call	bison -pops -bscan-ops scan-ops.y
 */

void opserr( int errno, char *par )

{

  sact_err = errno;

  if ( sact_err_par ) {
    free(sact_err_par);
  }
  if ( par ) {
    sact_err_par = new_Token(strlen(par)+1);
    strcpy(sact_err_par, par);
  } else {
    sact_err_par = NULL;
  }

}
  
int supported( char *str )

{
  
  int i;
  
/*sositituito per pddl2 (negative-precontions oltre a negation*/
  /*  char * sup[] = { ":STRIPS", ":NEGATION", ":EQUALITY",":TYPING", 
		   ":CONDITIONAL-EFFECTS", ":DISJUNCTIVE-PRECONDITIONS", 
		   ":EXISTENTIAL-PRECONDITIONS", ":UNIVERSAL-PRECONDITIONS", 
		   ":QUANTIFIED-PRECONDITIONS", ":ADL",
		   NULL };     */
  char * sup[] = { ":STRIPS", ":NEGATIVE-PRECONDITIONS",":NEGATION",
		     ":EQUALITY",":TYPING", 
		   ":CONDITIONAL-EFFECTS", ":DISJUNCTIVE-PRECONDITIONS", 
		   ":EXISTENTIAL-PRECONDITIONS", ":UNIVERSAL-PRECONDITIONS", 
		   ":QUANTIFIED-PRECONDITIONS", ":ADL", ":DERIVED",
		   NULL };    

  return 1;
  for (i=0; NULL != sup[i]; i++) {
    if ( SAME == strcmp(sup[i], str) ) {
      return TRUE;
    }
  }
  
  return FALSE;

}


 

#line 218 "scan-ops_pddl.tab.c" /* yacc.c:339  */

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
extern int ops_pddldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DEFINE_TOK = 258,
    DOMAIN_TOK = 259,
    REQUIREMENTS_TOK = 260,
    TYPES_TOK = 261,
    EITHER_TOK = 262,
    CONSTANTS_TOK = 263,
    PREDICATES_TOK = 264,
    FUNCTIONS_TOK = 265,
    DURATIVE_ACTION_TOK = 266,
    CONDITION_TOK = 267,
    DURATION_TOK = 268,
    DURATION_VAR_TOK = 269,
    AT_START = 270,
    AT_END = 271,
    OVER_ALL = 272,
    INCREASE_TOK = 273,
    DECREASE_TOK = 274,
    TIME_TOK = 275,
    GREATER_OR_EQUAL_TOK = 276,
    LESS_THAN_OR_EQUAL_TOK = 277,
    INTVAL = 278,
    FLOATVAL = 279,
    ASSIGN_TOK = 280,
    SCALE_UP_TOK = 281,
    SCALE_DOWN_TOK = 282,
    PLUS_TOK = 283,
    MINUS_TOK = 284,
    MUL_TOK = 285,
    DIV_TOK = 286,
    EQUAL_TOK = 287,
    GREATER_TOK = 288,
    LESS_THAN_TOK = 289,
    ACTION_TOK = 290,
    VARS_TOK = 291,
    DERIVED_TOK = 292,
    PRECONDITION_TOK = 293,
    PARAMETERS_TOK = 294,
    EFFECT_TOK = 295,
    AND_TOK = 296,
    NOT_TOK = 297,
    WHEN_TOK = 298,
    FORALL_TOK = 299,
    IMPLY_TOK = 300,
    OR_TOK = 301,
    EXISTS_TOK = 302,
    NAME = 303,
    VARIABLE = 304,
    OPEN_PAREN = 305,
    CLOSE_PAREN = 306,
    UMINUS = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 167 "scan-ops_pddl.y" /* yacc.c:355  */


  char string[MAX_LENGTH];
  char *pstring;
  PlNode *pPlNode;
  FactList *pFactList;
  TokenList *pTokenList;
  TypedList *pTypedList;

    int ival;
    float fval;

#line 321 "scan-ops_pddl.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ops_pddllval;

int ops_pddlparse (void);



/* Copy the second part of user declarations.  */

#line 338 "scan-ops_pddl.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   394

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  172
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  388

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   292,   292,   292,   303,   302,   318,   328,   330,   332,
     334,   336,   338,   341,   343,   347,   355,   354,   364,   367,
     366,   397,   396,   406,   409,   408,   438,   442,   437,   453,
     457,   456,   470,   469,   483,   482,   498,   505,   497,   519,
     523,   536,   539,   558,   557,   564,   563,   578,   591,   597,
     603,   609,   619,   634,   650,   661,   672,   678,   688,   700,
     713,   725,   737,   744,   755,   762,   772,   777,   782,   787,
     792,   799,   806,   813,   820,   827,   834,   842,   852,   864,
     908,   913,   918,   923,   928,   939,   943,   955,   968,   974,
     989,  1004,  1018,  1022,  1034,  1040,  1049,  1061,  1063,  1074,
    1080,  1090,  1097,  1108,  1114,  1125,  1127,  1140,  1151,  1171,
    1173,  1185,  1199,  1218,  1222,  1217,  1232,  1235,  1254,  1253,
    1262,  1261,  1268,  1267,  1278,  1277,  1314,  1342,  1347,  1355,
    1360,  1368,  1374,  1380,  1392,  1396,  1403,  1409,  1415,  1429,
    1444,  1469,  1475,  1481,  1487,  1493,  1503,  1515,  1530,  1537,
    1547,  1556,  1561,  1571,  1581,  1591,  1604,  1616,  1629,  1640,
    1646,  1654,  1659,  1667,  1682,  1687,  1694,  1703,  1712,  1723,
    1725,  1729,  1737
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEFINE_TOK", "DOMAIN_TOK",
  "REQUIREMENTS_TOK", "TYPES_TOK", "EITHER_TOK", "CONSTANTS_TOK",
  "PREDICATES_TOK", "FUNCTIONS_TOK", "DURATIVE_ACTION_TOK",
  "CONDITION_TOK", "DURATION_TOK", "DURATION_VAR_TOK", "AT_START",
  "AT_END", "OVER_ALL", "INCREASE_TOK", "DECREASE_TOK", "TIME_TOK",
  "GREATER_OR_EQUAL_TOK", "LESS_THAN_OR_EQUAL_TOK", "INTVAL", "FLOATVAL",
  "ASSIGN_TOK", "SCALE_UP_TOK", "SCALE_DOWN_TOK", "PLUS_TOK", "MINUS_TOK",
  "MUL_TOK", "DIV_TOK", "EQUAL_TOK", "GREATER_TOK", "LESS_THAN_TOK",
  "ACTION_TOK", "VARS_TOK", "DERIVED_TOK", "PRECONDITION_TOK",
  "PARAMETERS_TOK", "EFFECT_TOK", "AND_TOK", "NOT_TOK", "WHEN_TOK",
  "FORALL_TOK", "IMPLY_TOK", "OR_TOK", "EXISTS_TOK", "NAME", "VARIABLE",
  "OPEN_PAREN", "CLOSE_PAREN", "UMINUS", "$accept", "file", "$@1",
  "domain_definition", "$@2", "domain_name", "optional_domain_defs",
  "predicates_def", "$@3", "predicates_list", "$@4", "functions_def",
  "$@5", "functions_list", "$@6", "require_def", "$@7", "$@8",
  "require_key_star", "$@9", "types_def", "$@10", "constants_def", "$@11",
  "action_def", "$@12", "$@13", "param_def", "action_def_body", "$@14",
  "$@15", "adl_goal_description", "f_comp", "f_exp", "f_head",
  "binary_comp", "num_exp", "number", "function_symbol", "assign_op",
  "adl_goal_description_star", "adl_effect", "adl_effect_star",
  "literal_term", "atomic_formula_term", "term_star", "term", "name_plus",
  "predicate", "typed_list_name", "typed_list_variable",
  "durative_action_def", "$@16", "$@17", "durative_action_def_body",
  "$@18", "$@19", "$@20", "derived_def", "$@21", "derived_predicate_def",
  "da_adl_goal_description", "timed_adl_goal_description_plus",
  "timed_adl_goal_description", "da_adl_effect_star", "da_adl_effect",
  "timed_adl_effect", "f_assign_da", "f_exp_da", "binary_op", "f_exp_t",
  "duration_constraint", "simple_duration_constraint_plus",
  "simple_duration_constraint", "d_op", "d_value", "type", "either", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -262

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-262)))

#define YYTABLE_NINF -105

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -262,    33,   -12,  -262,    45,  -262,     6,    57,  -262,    18,
     122,    69,    97,  -262,  -262,   122,   122,   122,   122,   122,
     122,   122,   122,  -262,  -262,  -262,  -262,    73,   109,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
      90,   116,   116,   126,  -262,   147,  -262,   156,   161,   120,
    -262,     3,   159,   168,   162,   169,   162,   176,  -262,  -262,
       2,   185,   164,    95,  -262,   116,   189,  -262,  -262,    88,
     190,  -262,   198,  -262,   211,   211,  -262,  -262,   162,   252,
     200,  -262,  -262,  -262,  -262,   201,  -262,   249,  -262,   189,
     208,  -262,   162,   189,  -262,  -262,   203,   129,    93,   218,
    -262,  -262,    99,  -262,  -262,   185,   185,   220,   185,   185,
     221,    63,   145,  -262,   164,  -262,  -262,  -262,   116,  -262,
     224,    73,   109,   162,   222,   226,   227,   229,   230,   237,
     185,   238,   240,  -262,   185,   241,   244,   258,   162,   185,
     259,   162,  -262,  -262,  -262,    15,    63,  -262,  -262,  -262,
    -262,  -262,  -262,   260,   145,  -262,  -262,   162,  -262,  -262,
     261,   160,  -262,  -262,   181,  -262,  -262,   162,   239,  -262,
    -262,  -262,   162,  -262,   173,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,   262,   263,  -262,   264,    63,    63,    63,    63,
     145,   265,  -262,  -262,  -262,  -262,   185,   185,   185,   267,
     129,   268,   268,  -262,  -262,  -262,   268,   275,   129,   269,
     271,   271,   104,   104,  -262,  -262,  -262,   229,   222,   272,
     104,   129,   273,    93,  -262,  -262,   238,   276,   185,   277,
     104,    93,   185,  -262,   185,    63,    86,    50,    71,    63,
      86,    63,    86,   274,  -262,   278,   279,   280,   151,   281,
     267,  -262,   246,   282,   283,   284,   268,    63,  -262,   129,
     173,   285,   287,   288,   289,   242,    -1,    -1,   290,   229,
     229,   162,    17,  -262,    93,  -262,   238,   291,     2,   258,
     238,   162,    63,  -262,   292,   293,   294,   202,   295,  -262,
    -262,   296,  -262,   297,   298,   299,   300,   301,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
     302,  -262,   104,  -262,  -262,  -262,  -262,  -262,   307,   303,
     304,  -262,  -262,   305,   306,  -262,   195,  -262,   308,  -262,
    -262,  -262,   309,   310,   311,  -262,  -262,  -262,    86,    86,
      86,    86,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
      17,     4,  -262,  -262,  -262,   229,    63,    17,    63,    63,
      17,  -262,  -262,   238,  -262,    86,    71,    86,    86,   311,
     312,    63,   338,   313,    50,   314,    17,   315,  -262,   316,
     317,  -262,  -262,   318,  -262,  -262,  -262,  -262
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     3,     0,     0,     4,     0,
       0,     0,     0,     7,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     6,    26,    32,    34,    18,    23,   113,
      36,   124,    12,    14,     8,    10,     9,    11,    13,    15,
       0,   105,   105,     0,    16,     0,    21,     0,     0,     0,
      27,   105,     0,     0,   109,     0,   109,     0,   114,    37,
       0,     0,    29,     0,   108,   105,     0,    33,    35,   109,
       0,    17,     0,    22,    39,    39,   104,   103,   109,     0,
       0,    54,    47,    95,    30,     0,   171,     0,   107,   101,
       0,   112,   109,     0,    19,    24,     0,   116,    41,     0,
      69,    70,    68,    66,    67,    85,     0,     0,     0,    85,
       0,     0,    97,   125,    29,    28,   172,   102,   105,   111,
       0,    18,    23,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   126,    85,     0,     0,     0,   109,     0,
       0,   109,    77,    78,    79,     0,     0,    62,    56,    63,
      65,    99,   100,     0,    97,    31,   106,   109,    20,    25,
       0,     0,   120,   127,     0,   118,   160,   109,     0,   122,
     137,   115,   109,    43,     0,    45,    87,    38,    86,    48,
      50,    94,     0,     0,    49,     0,     0,     0,     0,     0,
      97,     0,    96,    98,   110,    40,     0,     0,     0,     0,
     116,     0,     0,   167,   166,   168,     0,     0,   116,     0,
       0,     0,     0,     0,    80,    81,    82,   134,     0,     0,
       0,   116,     0,    41,    83,    84,    92,     0,     0,     0,
       0,    41,     0,    51,     0,     0,    56,     0,    56,     0,
      56,     0,    56,     0,    55,     0,     0,     0,     0,     0,
     129,   121,     0,     0,     0,     0,   161,     0,   119,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
       0,   109,     0,   123,    41,    44,    92,     0,     0,     0,
       0,   109,     0,    46,     0,     0,     0,     0,     0,    76,
      57,     0,    71,     0,     0,     0,     0,     0,    64,   131,
     132,   133,   128,   130,   164,   165,   159,   162,   170,    56,
       0,   117,     0,   141,   143,   142,   144,   158,     0,     0,
       0,   136,   135,     0,     0,   150,     0,   151,     0,    42,
      93,    88,     0,     0,     0,    53,    52,    59,     0,     0,
       0,     0,    73,    58,    72,    60,    74,    61,    75,   163,
       0,     0,   145,   146,   139,     0,   152,     0,   154,   155,
       0,   140,    90,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,     0,
       0,   138,   149,     0,    89,   157,   156,   148
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,  -262,  -262,  -262,  -262,  -262,   286,  -262,  -262,   207,
    -262,  -262,  -262,   197,  -262,  -262,  -262,  -262,   209,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,   319,  -205,  -262,
    -262,    10,  -262,  -111,  -200,  -262,  -178,  -183,  -140,  -167,
     -87,  -127,    94,  -129,  -100,  -118,  -262,    46,   320,   -28,
     -53,  -262,  -262,  -262,  -179,  -262,  -262,  -262,  -262,  -262,
    -262,   153,   123,  -182,   103,  -126,  -262,   163,  -261,  -262,
     108,  -262,   121,  -110,  -262,  -262,   321,   322
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    10,     8,    14,    15,    55,    44,
     121,    16,    57,    46,   122,    17,    40,    62,    85,   114,
      18,    41,    19,    42,    20,    48,    75,    97,   132,   223,
     231,   134,    81,   327,   147,   111,   148,   149,   150,   220,
     135,   276,   277,    82,    83,   153,   154,    90,   112,    52,
      70,    21,    47,    74,   128,   208,   200,   221,    22,    49,
      61,   162,   249,   163,   268,   269,   170,   262,   328,   360,
     319,   165,   255,   256,   207,   310,    65,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     146,   169,   176,    72,   175,   190,   137,   230,   236,   238,
     240,   242,   266,   267,    53,   166,    91,   250,   275,   317,
     272,   251,   140,    64,   371,    99,   283,   142,   143,   258,
     282,   325,    63,     3,    76,   191,   193,    88,     4,   119,
     142,   143,   273,   186,   187,   188,   189,   178,     6,   318,
      77,    51,   144,   289,   145,   289,     7,   289,   288,   289,
     293,     9,   295,   144,   297,   144,    11,   326,   250,   329,
     160,    80,   243,   142,   143,   235,   237,   239,   241,   309,
     311,   176,   176,   261,   263,   182,   142,   143,   185,   370,
     156,   253,   254,   312,   142,   143,   375,   176,   144,   376,
     145,   290,    24,    25,   194,    26,    27,    28,    29,   142,
     143,   144,   350,   145,   209,   383,   136,    63,   139,   222,
      23,   287,   292,    43,   286,   190,   291,   279,   294,   129,
     296,   130,    30,   131,    31,   117,   287,    69,    50,   120,
     173,   124,   125,    86,   323,    87,   308,   176,  -104,   183,
    -104,   176,   144,   332,   265,   289,   289,   289,   289,    45,
     365,   366,   367,   368,    51,   126,   196,   197,   198,   127,
      60,   334,    12,    13,    54,   196,   197,   198,   236,   238,
     240,   242,   289,   289,   289,   289,   190,   288,   293,   295,
     297,   224,   225,   151,   152,    56,   201,   202,   214,   215,
     216,   199,   203,   204,    58,    76,   245,   246,   247,    59,
      67,    69,    84,   205,   226,   227,   228,   229,   324,    68,
      71,    77,   206,   356,   357,   358,   359,    73,   333,   373,
     338,   339,   340,   341,   176,    79,   377,    89,   280,   369,
     372,    94,   284,   144,   285,   235,   374,   239,   241,    95,
      96,   113,   115,   123,   210,   211,   116,   212,   213,   118,
     379,   201,   202,   291,   214,   215,   216,   203,   204,   133,
     138,   141,   161,   100,   101,   157,   164,   167,   205,   168,
     217,   171,   218,   219,   102,   103,   104,   172,   174,   257,
     144,   177,   179,   105,   106,   180,   107,   108,   109,   110,
      77,    32,    33,    34,    35,    36,    37,    38,    39,   181,
     184,   192,   195,   232,   233,   234,   244,   248,   252,   159,
     259,   260,   271,   155,   274,   298,   278,   281,   158,   299,
     300,   301,   302,   304,   305,   306,   313,   351,   314,   315,
     316,   321,   331,   335,   336,   337,   342,   343,   344,   345,
     346,   347,   348,   349,   352,   353,   354,   355,   380,   361,
     362,   363,   364,   378,   381,   382,   384,   385,   386,   387,
     330,   270,   322,   303,   264,   320,     0,   307,     0,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    93,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
     111,   127,   131,    56,   131,   145,   106,   174,   186,   187,
     188,   189,   212,   213,    42,   125,    69,   199,   223,    20,
     220,   200,   109,    51,    20,    78,   231,    23,    24,   208,
     230,    14,    29,     0,    32,   146,   154,    65,    50,    92,
      23,    24,   221,    28,    29,    30,    31,   134,     3,    50,
      48,    48,    48,   236,    50,   238,    50,   240,   236,   242,
     238,     4,   240,    48,   242,    48,    48,    50,   250,   274,
     123,    61,   190,    23,    24,   186,   187,   188,   189,   257,
     259,   210,   211,   210,   211,   138,    23,    24,   141,   350,
     118,   201,   202,   260,    23,    24,   357,   226,    48,   360,
      50,    51,     5,     6,   157,     8,     9,    10,    11,    23,
      24,    48,   312,    50,   167,   376,   106,    29,   108,   172,
      51,    50,    51,    50,   235,   265,   237,   227,   239,    36,
     241,    38,    35,    40,    37,    89,    50,    49,    48,    93,
     130,    12,    13,    48,   270,    50,   257,   276,    49,   139,
      51,   280,    48,   280,    50,   338,   339,   340,   341,    50,
     338,   339,   340,   341,    48,    36,    15,    16,    17,    40,
      50,   282,    50,    51,    48,    15,    16,    17,   356,   357,
     358,   359,   365,   366,   367,   368,   326,   365,   366,   367,
     368,    18,    19,    48,    49,    48,    15,    16,    25,    26,
      27,    41,    21,    22,    48,    32,   196,   197,   198,    48,
      51,    49,    48,    32,    41,    42,    43,    44,   271,    51,
      51,    48,    41,    28,    29,    30,    31,    51,   281,   355,
      28,    29,    30,    31,   363,    50,   363,    48,   228,   350,
     351,    51,   232,    48,   234,   356,   357,   358,   359,    51,
      39,    51,    51,    50,    15,    16,     7,    18,    19,    51,
     371,    15,    16,   374,    25,    26,    27,    21,    22,    51,
      50,    50,    50,    21,    22,    51,    50,    50,    32,    50,
      41,    51,    43,    44,    32,    33,    34,    50,    50,    14,
      48,    51,    51,    41,    42,    51,    44,    45,    46,    47,
      48,    15,    16,    17,    18,    19,    20,    21,    22,    51,
      51,    51,    51,    51,    51,    51,    51,    50,    50,   122,
      51,    50,    50,   114,    51,    51,    50,    50,   121,    51,
      51,    51,    51,    51,    51,    51,    51,    30,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    20,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
     276,   218,   269,   250,   211,   267,    -1,   256,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    69,    -1,    -1,    75
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,    50,    56,     3,    50,    58,     4,
      57,    48,    50,    51,    59,    60,    64,    68,    73,    75,
      77,   104,   111,    51,     5,     6,     8,     9,    10,    11,
      35,    37,    59,    59,    59,    59,    59,    59,    59,    59,
      69,    74,    76,    50,    62,    50,    66,   105,    78,   112,
      48,    48,   102,   102,    48,    61,    48,    65,    48,    48,
      50,   113,    70,    29,   102,   129,   130,    51,    51,    49,
     103,    51,   103,    51,   106,    79,    32,    48,   101,    50,
      84,    85,    96,    97,    48,    71,    48,    50,   102,    48,
     100,   103,   129,   130,    51,    51,    39,    80,    80,   103,
      21,    22,    32,    33,    34,    41,    42,    44,    45,    46,
      47,    88,   101,    51,    72,    51,     7,   100,    51,   103,
     100,    63,    67,    50,    12,    13,    36,    40,   107,    36,
      38,    40,    81,    51,    84,    93,    84,    97,    50,    84,
      93,    50,    23,    24,    48,    50,    86,    87,    89,    90,
      91,    48,    49,    98,    99,    71,   102,    51,    62,    66,
     103,    50,   114,   116,    50,   124,   126,    50,    50,   118,
     119,    51,    50,    84,    50,    94,    96,    51,    93,    51,
      51,    51,   103,    84,    51,   103,    28,    29,    30,    31,
      91,    86,    51,    98,   103,    51,    15,    16,    17,    41,
     109,    15,    16,    21,    22,    32,    41,   127,   108,   103,
      15,    16,    18,    19,    25,    26,    27,    41,    43,    44,
      92,   110,   103,    82,    18,    19,    41,    42,    43,    44,
      92,    83,    51,    51,    51,    86,    89,    86,    89,    86,
      89,    86,    89,    98,    51,    84,    84,    84,    50,   115,
     116,   107,    50,   126,   126,   125,   126,    14,   107,    51,
      50,    94,   120,    94,   120,    50,    87,    87,   117,   118,
     114,    50,    87,   107,    51,    81,    94,    95,    50,    97,
      84,    50,    87,    81,    84,    84,    86,    50,    89,    90,
      51,    86,    51,    89,    86,    89,    86,    89,    51,    51,
      51,    51,    51,   115,    51,    51,    51,   125,    86,    89,
     128,   107,    92,    51,    51,    51,    51,    20,    50,   123,
     123,    51,   117,   118,   103,    14,    50,    86,   121,    81,
      95,    51,    94,   103,    86,    51,    51,    51,    28,    29,
      30,    31,    51,    51,    51,    51,    51,    51,    51,    51,
      87,    30,    51,    51,    51,    51,    28,    29,    30,    31,
     122,    51,    51,    51,    51,    89,    89,    89,    89,    86,
     121,    20,    86,   118,    86,   121,   121,    94,    51,    86,
      20,    51,    51,   121,    51,    51,    51,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    55,    54,    57,    56,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    61,    60,    62,    63,
      62,    65,    64,    66,    67,    66,    69,    70,    68,    71,
      72,    71,    74,    73,    76,    75,    78,    79,    77,    80,
      80,    81,    81,    82,    81,    83,    81,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    86,    86,    86,    86,
      86,    86,    86,    86,    87,    87,    88,    88,    88,    88,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    91,
      92,    92,    92,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   102,   102,   103,
     103,   103,   103,   105,   106,   104,   107,   107,   108,   107,
     109,   107,   110,   107,   112,   111,   113,   114,   114,   115,
     115,   116,   116,   116,   117,   117,   118,   118,   118,   118,
     118,   119,   119,   119,   119,   119,   119,   120,   121,   121,
     121,   121,   122,   122,   122,   122,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   126,   127,   127,   127,   128,
     128,   129,   130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     5,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     5,     0,     0,
       6,     0,     5,     0,     0,     6,     0,     0,     7,     0,
       0,     3,     0,     5,     0,     5,     0,     0,     8,     0,
       4,     0,     5,     0,     4,     0,     4,     1,     4,     4,
       4,     5,     7,     7,     1,     5,     1,     4,     5,     5,
       5,     5,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     4,     5,     5,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     4,     7,
       5,     5,     0,     2,     4,     1,     4,     0,     2,     1,
       1,     1,     2,     1,     1,     0,     5,     3,     2,     0,
       5,     3,     2,     0,     0,     8,     0,     5,     0,     4,
       0,     4,     0,     4,     0,     6,     4,     1,     4,     1,
       2,     4,     4,     4,     0,     2,     4,     1,     7,     5,
       5,     4,     4,     4,     4,     5,     5,     5,     5,     4,
       1,     1,     1,     1,     1,     1,     5,     5,     1,     4,
       1,     1,     2,     5,     4,     4,     1,     1,     1,     1,
       1,     2,     3
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
#line 292 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  opserr( DOMDEF_EXPECTED, NULL );
}
#line 1699 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 303 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
}
#line 1706 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 306 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  static int once=0;
  if ( gcmd_line.display_info >= 1 && once==0) {
    printf(" domain '%s' defined", gdomain_name);
    once=1;
  }
}
#line 1718 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 319 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  gdomain_name = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( gdomain_name, (yyvsp[-1].string));
}
#line 1727 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 355 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
}
#line 1734 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 358 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
}
#line 1741 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 364 "scan-ops_pddl.y" /* yacc.c:1646  */
    {}
#line 1747 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 367 "scan-ops_pddl.y" /* yacc.c:1646  */
    {

  TypedListList *tll;

  if ( gparse_predicates ) {
    tll = gparse_predicates;
    while ( tll->next ) {
      tll = tll->next;
    }
    tll->next = new_TypedListList();
    tll = tll->next;
  } else {
    tll = new_TypedListList();
    gparse_predicates = tll;
  }

  tll->predicate = new_Token( strlen( (yyvsp[-2].string) ) + 1);
  strcpy( tll->predicate, (yyvsp[-2].string) );

  tll->args = (yyvsp[-1].pTypedList);

}
#line 1774 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 397 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
}
#line 1781 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 400 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
}
#line 1788 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 406 "scan-ops_pddl.y" /* yacc.c:1646  */
    {}
#line 1794 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 409 "scan-ops_pddl.y" /* yacc.c:1646  */
    {

  TypedListList *tll;

  if ( gparse_functions ) {
    tll = gparse_functions;
    while ( tll->next ) {
      tll = tll->next;
    }
    tll->next = new_TypedListList();
    tll = tll->next;
  } else {
    tll = new_TypedListList();
    gparse_functions = tll;
  }

  tll->predicate = new_Token( strlen( (yyvsp[-2].string) ) + 1);
  strcpy( tll->predicate, (yyvsp[-2].string) );

  tll->args = (yyvsp[-1].pTypedList);

}
#line 1821 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 438 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  opserr( REQUIREM_EXPECTED, NULL );
}
#line 1829 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 442 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  if ( !supported( (yyvsp[0].string) ) ) {
    opserr( NOT_SUPPORTED, (yyvsp[0].string) );
    yyerror(NULL);
  }
}
#line 1840 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 457 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  if ( !supported( (yyvsp[0].string) ) ) {
    opserr( NOT_SUPPORTED, (yyvsp[0].string) );
    yyerror(NULL);
  }
}
#line 1851 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 470 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  opserr( TYPEDEF_EXPECTED, NULL ); 
}
#line 1859 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 474 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  gparse_types = (yyvsp[-1].pTypedList);
}
#line 1867 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 483 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  opserr( CONSTLIST_EXPECTED, NULL ); 
}
#line 1875 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 487 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  gparse_constants = (yyvsp[-1].pTypedList);
}
#line 1883 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 498 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
#if YYDEBUG != 0
  printf("\n\nin action_def rule\n\n\n"); 
#endif
  opserr( ACTION, NULL );
}
#line 1894 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 505 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  scur_op = new_PlOperator( (yyvsp[0].string) );
}
#line 1902 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 509 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  scur_op->next = gloaded_ops;
  gloaded_ops = scur_op; 
}
#line 1911 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 519 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  scur_op->params = NULL; 
}
#line 1919 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 524 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  TypedList *tl;
  scur_op->parse_params = (yyvsp[-1].pTypedList);
  for (tl = scur_op->parse_params; tl; tl = tl->next) {
    /* to be able to distinguish params from :VARS 
     */
    scur_op->number_of_real_params++;
  }
}
#line 1933 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 540 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  TypedList *tl = NULL;

  /* add vars as parameters 
   */
  if ( scur_op->parse_params ) {
    for( tl = scur_op->parse_params; tl->next; tl = tl->next ) {
      /* empty, get to the end of list 
       */
    }
    tl->next = (yyvsp[-2].pTypedList);
    tl = tl->next;
  } else {
    scur_op->parse_params = (yyvsp[-2].pTypedList);
  }
}
#line 1954 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 558 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  scur_op->preconds = (yyvsp[0].pPlNode); 
}
#line 1962 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 564 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  scur_op->effects = (yyvsp[0].pPlNode); 
}
#line 1970 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 579 "scan-ops_pddl.y" /* yacc.c:1646  */
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
#line 1986 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 592 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1995 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 598 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pPlNode) = new_PlNode(OR);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2004 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 604 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pPlNode) = new_PlNode(NOT);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2013 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 610 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *np = new_PlNode(NOT);
  np->sons = (yyvsp[-2].pPlNode);
  np->next = (yyvsp[-1].pPlNode);

  (yyval.pPlNode) = new_PlNode(OR);
  (yyval.pPlNode)->sons = np;
}
#line 2026 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 622 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 

  PlNode *pln;

  pln = new_PlNode(EX);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 2042 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 637 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 

  PlNode *pln;

  pln = new_PlNode(ALL);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 2058 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 662 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pPlNode) = new_PlNode(BIN_COMP);
  (yyval.pPlNode)->sons = (yyvsp[-3].pPlNode);
  (yyval.pPlNode)->sons->sons= (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next= (yyvsp[-1].pPlNode);
}
#line 2069 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 673 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
       (yyval.pPlNode)=new_PlNode(NUM_EXP);
       (yyval.pPlNode)->sons = (yyvsp[0].pPlNode);
}
#line 2078 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 679 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(UMINUS_CONN);
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-1].pPlNode);
}
#line 2091 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 689 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MINUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);

}
#line 2106 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 701 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(PLUS_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);


}
#line 2122 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 714 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MUL_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);

}
#line 2137 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 726 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(DIV_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);

}
#line 2152 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 738 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(FN_HEAD);
  (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
}
#line 2161 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 745 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
    (yyval.pPlNode)=new_PlNode(ATOM);
    (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
}
#line 2170 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 756 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-2].pstring);
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 2180 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 763 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[0].pstring);
}
#line 2189 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 773 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(GREATER_THAN_CONN);
}
#line 2197 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 778 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(LESS_THAN_CONN);
}
#line 2205 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 783 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(EQUAL_CONN);
}
#line 2213 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 788 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(GREATER_OR_EQUAL_CONN);
}
#line 2221 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 793 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(LESS_THAN_OR_EQUAL_CONN);
}
#line 2229 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 800 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(UMINUS_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
   
}
#line 2239 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 807 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(MINUS_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 2249 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 814 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(PLUS_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 2259 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 821 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(MUL_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 2269 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 828 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(DIV_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 2279 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 835 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
    (yyval.pPlNode)=new_PlNode(ATOM);
    (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
}
#line 2288 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 843 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  Token t;
  t = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy (t, (yyvsp[0].string));
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = t;

}
#line 2301 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 853 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  Token t;
  t = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy (t, (yyvsp[0].string));
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = t;

}
#line 2314 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 865 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pstring), (yyvsp[0].string) );
}
#line 2323 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 909 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(ASSIGN_CONN);
}
#line 2331 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 914 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(SCALE_UP_CONN);
}
#line 2339 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 919 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(SCALE_DOWN_CONN);
}
#line 2347 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 924 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(INCREASE_CONN);
}
#line 2355 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 929 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=new_PlNode(DECREASE_CONN);
}
#line 2363 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 939 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = NULL;
}
#line 2371 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 944 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].pPlNode)->next = (yyvsp[0].pPlNode);
  (yyval.pPlNode) = (yyvsp[-1].pPlNode);
}
#line 2380 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 956 "scan-ops_pddl.y" /* yacc.c:1646  */
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
#line 2396 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 969 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2405 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 977 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 

  PlNode *pln;

  pln = new_PlNode(ALL);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 2421 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 990 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  /* This will be conditional effects in FF representation, but here
   * a formula like (WHEN p q) will be saved as:
   *  [WHEN]
   *  [sons]
   *   /  \
   * [p]  [q]
   * That means, the first son is p, and the second one is q. 
   */
  (yyval.pPlNode) = new_PlNode(WHEN);
  (yyvsp[-2].pPlNode)->next = (yyvsp[-1].pPlNode);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
}
#line 2439 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1005 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode* pln;
  (yyval.pPlNode)=(yyvsp[-3].pPlNode);
  pln = new_PlNode(FN_HEAD);
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->atom = (yyvsp[-2].pTokenList);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 2452 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1018 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = NULL;
}
#line 2460 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1023 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].pPlNode)->next = (yyvsp[0].pPlNode);
  (yyval.pPlNode) = (yyvsp[-1].pPlNode);
}
#line 2469 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1035 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTokenList) = (yyvsp[-1].pTokenList);
  sis_negated = TRUE;
}
#line 2478 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1041 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = (yyvsp[0].pTokenList);
}
#line 2486 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1050 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-2].pstring);
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 2496 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1061 "scan-ops_pddl.y" /* yacc.c:1646  */
    { (yyval.pTokenList) = NULL; }
#line 2502 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1064 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-1].pstring);
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 2512 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1075 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pstring), (yyvsp[0].string) );
}
#line 2521 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1081 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pstring), (yyvsp[0].string) );
}
#line 2530 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1091 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pTokenList)->item, (yyvsp[0].string) );
}
#line 2540 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1098 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTokenList)->item, (yyvsp[-1].string) );
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 2551 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1109 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pstring), (yyvsp[0].string) );
}
#line 2560 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1115 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  (yyval.pstring) = new_Token( strlen(EQ_STR)+1 );
  strcpy( (yyval.pstring), EQ_STR );
}
#line 2569 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1125 "scan-ops_pddl.y" /* yacc.c:1646  */
    { (yyval.pTypedList) = NULL; }
#line 2575 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1131 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 

  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-4].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-4].string) );
  (yyval.pTypedList)->type = (yyvsp[-2].pTokenList);
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2588 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1141 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-2].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-2].string) );
  (yyval.pTypedList)->type = new_TokenList();
  (yyval.pTypedList)->type->item = new_Token( strlen((yyvsp[-1].pstring))+1 );
  strcpy( (yyval.pTypedList)->type->item, (yyvsp[-1].pstring) );
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2602 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1152 "scan-ops_pddl.y" /* yacc.c:1646  */
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
#line 2620 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1171 "scan-ops_pddl.y" /* yacc.c:1646  */
    { (yyval.pTypedList) = NULL; }
#line 2626 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1177 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-4].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-4].string) );
  (yyval.pTypedList)->type = (yyvsp[-2].pTokenList);
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2638 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1189 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-2].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-2].string) );
  (yyval.pTypedList)->type = new_TokenList();
  (yyval.pTypedList)->type->item = new_Token( strlen((yyvsp[-1].pstring))+1 );
  strcpy( (yyval.pTypedList)->type->item, (yyvsp[-1].pstring) );
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2652 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1200 "scan-ops_pddl.y" /* yacc.c:1646  */
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
#line 2670 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1218 "scan-ops_pddl.y" /* yacc.c:1646  */
    { 
  opserr( ACTION, NULL ); 
}
#line 2678 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1222 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  scur_op = new_PlOperator( (yyvsp[0].string) );
}
#line 2686 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1226 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  scur_op->next = gloaded_ops;
  gloaded_ops = scur_op;
}
#line 2695 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1236 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  TypedList *tl = NULL;

  /* add vars as parameters
   */
  if ( scur_op->parse_params ) {
    for( tl = scur_op->parse_params; tl->next; tl = tl->next ) {
      /* empty, get to the end of list
       */
    }
    tl->next = (yyvsp[-2].pTypedList);
    tl = tl->next;
  } else {
    scur_op->parse_params = (yyvsp[-2].pTypedList);
  }
}
#line 2716 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1254 "scan-ops_pddl.y" /* yacc.c:1646  */
    {

  scur_op->duration = (yyvsp[0].pPlNode);

}
#line 2726 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1262 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  scur_op->preconds = (yyvsp[0].pPlNode);
}
#line 2734 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1268 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  scur_op->effects = (yyvsp[0].pPlNode);
}
#line 2742 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1278 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  opserr(DERIVED_PRED_EXPECTED, NULL);
}
#line 2750 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1282 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  der_op = new_PlOperator((yyvsp[-2].pPlNode) -> atom -> item);
  der_op -> parse_params = (yyvsp[-2].pPlNode) -> parse_vars;
  (yyvsp[-2].pPlNode) -> parse_vars = NULL;
  der_op -> effects  = (yyvsp[-2].pPlNode);
  der_op -> preconds = (yyvsp[-1].pPlNode);
  der_op -> next = gderived_predicates;
  gderived_predicates = der_op;
  gnum_derived_predicates++;
}
#line 2765 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1315 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;
  TokenList *a;
  TypedList *t;
  pln = new_PlNode(ATOM);
  pln -> atom = new_TokenList();
  pln -> atom -> item = (yyvsp[-2].pstring);
  pln -> parse_vars = (yyvsp[-1].pTypedList);
  for (a = pln -> atom, t = (yyvsp[-1].pTypedList); t; t = t -> next) {
    a -> next = new_TokenList();
    a = a -> next;
    a -> item = (char *) calloc(strlen(t -> name) + 1 ,sizeof(char));
    strcpy(a -> item, t -> name);
  }

  (yyval.pPlNode) = pln;
}
#line 2787 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1343 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = (yyvsp[0].pPlNode);
}
#line 2795 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1348 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2804 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1356 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=(yyvsp[0].pPlNode);
}
#line 2812 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1361 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = (yyvsp[-1].pPlNode);
  (yyval.pPlNode)->next = (yyvsp[0].pPlNode);
}
#line 2821 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1369 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AT_START_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2830 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1375 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AT_END_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2839 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1381 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(OVER_ALL_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2848 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1392 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = NULL;
}
#line 2856 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1397 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = (yyvsp[-1].pPlNode);
  (yyval.pPlNode)->next = (yyvsp[0].pPlNode);
}
#line 2865 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1404 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2874 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1410 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = (yyvsp[0].pPlNode);
}
#line 2882 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1418 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  pln = new_PlNode(ALL);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);
}
#line 2896 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1430 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  /* This will be conditional effects in FF representation, but here
   * a formula like (WHEN p q) will be saved as:
   *  [WHEN]
   *  [sons]
   *   /  \
   * [p]  [q]
   * That means, the first son is p, and the second one is q.
   */
  (yyval.pPlNode) = new_PlNode(WHEN);
  (yyvsp[-2].pPlNode)->next = (yyvsp[-1].pPlNode);
  (yyval.pPlNode)->sons = (yyvsp[-2].pPlNode);
}
#line 2914 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1445 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode* pln;
  (yyval.pPlNode)=(yyvsp[-3].pPlNode);
  pln = new_PlNode(FN_HEAD);
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->atom = (yyvsp[-2].pTokenList);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);
}
#line 2927 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1470 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AT_START_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2936 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1476 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AT_END_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2945 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1482 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AT_START_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2954 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1488 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AT_END_CONN);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 2963 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1494 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *tmp;
  tmp = new_PlNode(INCREASE_CONN);
  tmp->sons = new_PlNode(FN_HEAD);
  tmp->sons->atom = (yyvsp[-2].pTokenList);
  tmp->sons->next = (yyvsp[-1].pPlNode);
  (yyval.pPlNode) = tmp;
}
#line 2976 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1504 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *tmp;
  tmp = new_PlNode(DECREASE_CONN);
  tmp->sons = new_PlNode(FN_HEAD);
  tmp->sons->atom = (yyvsp[-2].pTokenList);
  tmp->sons->next = (yyvsp[-1].pPlNode);
  (yyval.pPlNode) = tmp;
}
#line 2989 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1516 "scan-ops_pddl.y" /* yacc.c:1646  */
    {

  PlNode* pln;
  (yyval.pPlNode)=(yyvsp[-3].pPlNode);
  pln = new_PlNode(FN_HEAD);
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->atom = (yyvsp[-2].pTokenList);
  (yyval.pPlNode)->sons->next = (yyvsp[-1].pPlNode);

}
#line 3004 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1531 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = (yyvsp[-3].pPlNode);
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 3014 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1538 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(UMINUS_CONN);
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-1].pPlNode);
}
#line 3027 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1548 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(DURATION_VAR_ATOM);
  (yyval.pPlNode)->sons = pln;
}
#line 3039 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1562 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(PLUS_CONN);
  (yyval.pPlNode)->sons = pln;

}
#line 3052 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1572 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MINUS_CONN);
  (yyval.pPlNode)->sons = pln;

}
#line 3065 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1582 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(MUL_CONN);
  (yyval.pPlNode)->sons = pln;

}
#line 3078 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1592 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(F_EXP);
  pln=new_PlNode(DIV_CONN);
  (yyval.pPlNode)->sons = pln;

}
#line 3091 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1605 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode) = new_PlNode(F_EXP_T);
  pln = new_PlNode(MUL_CONN);
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = (yyvsp[-2].pPlNode);
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);  

}
#line 3106 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1617 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln, *pln2;

  (yyval.pPlNode) = new_PlNode(F_EXP_T);
  pln2 = new_PlNode(TIME_VAR);
  pln=new_PlNode(MUL_CONN); 
  (yyval.pPlNode)->sons = pln;
  (yyval.pPlNode)->sons->sons = pln2;
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);  

}
#line 3122 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1630 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  pln = new_PlNode(TIME_VAR);
  (yyval.pPlNode) = pln;
}
#line 3133 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1641 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 3142 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1647 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[0].pPlNode);
}
#line 3151 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1655 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = (yyvsp[0].pPlNode);
}
#line 3159 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1660 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode)=(yyvsp[-1].pPlNode);
  (yyval.pPlNode)->next = (yyvsp[0].pPlNode);
}
#line 3168 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1672 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode) = (yyvsp[-3].pPlNode);
  pln = new_PlNode(DURATION_VAR_ATOM);
  (yyval.pPlNode)->sons->sons = pln;
  (yyval.pPlNode)->sons->sons->next = (yyvsp[-1].pPlNode);
}
#line 3181 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1683 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AND);
}
#line 3189 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1688 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pPlNode) = new_PlNode(AND);
}
#line 3197 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1695 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(DURATION_CONSTRAINT_CONN);
  pln=new_PlNode(LESS_THAN_OR_EQUAL_CONN); 
  (yyval.pPlNode)->sons = pln;
}
#line 3209 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1704 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(DURATION_CONSTRAINT_CONN);
  pln=new_PlNode(GREATER_OR_EQUAL_CONN); 
  (yyval.pPlNode)->sons = pln;
}
#line 3221 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1713 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  PlNode *pln;

  (yyval.pPlNode)=new_PlNode(DURATION_CONSTRAINT_CONN);
  pln=new_PlNode(EQUAL_CONN); 
  (yyval.pPlNode)->sons = pln;
}
#line 3233 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1730 "scan-ops_pddl.y" /* yacc.c:1646  */
    {
  (yyval.pstring) = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pstring), (yyvsp[0].string));
}
#line 3242 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
    break;


#line 3246 "scan-ops_pddl.tab.c" /* yacc.c:1646  */
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
#line 1740 "scan-ops_pddl.y" /* yacc.c:1906  */

#include "lex.ops_pddl.c"


/**********************************************************************
 * Functions
 **********************************************************************/



int yyerror( char *msg )

{

  if (msg)
    printf("\n%s", msg);

  fprintf(stderr, "\n%s: syntax error in line %d, '%s':\n", 
	  gact_filename, lineno, yytext);

  if ( NULL != sact_err_par ) {
    fprintf(stderr, "%s %s\n", serrmsg[sact_err], sact_err_par);
  } else {
    fprintf(stderr, "%s\n", serrmsg[sact_err]);
  }

  fflush(stdout);
  exit( 1 );

  return 0;

}



void load_ops_file( char *filename )

{

  FILE * fp;/* pointer to input files */
  char tmp[MAX_LENGTH] = "";

  /* open operator file 
   */
  if( ( fp = fopen( filename, "r" ) ) == NULL ) {
    sprintf(tmp, "\n Can't find operator file: %s\n\n", filename );
    perror(tmp);
    exit( 1 );
  }

  gact_filename = filename;
  lineno = 1; 
  yyin = fp;

  yyparse();

  fclose( fp );/* and close file again */

}


