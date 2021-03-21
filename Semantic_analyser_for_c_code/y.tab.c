
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "yaccfile.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "lib/symbol_table.h"
#include "lib/scope.h"
// #include "lib/misc.h"

#define TRACE_ENABLED false

// Number of rows in Hash table for symbol and constant tables
#define MAX_NODES 1000

void yyerror(const char * s);

symbol_node_t *symbol_table[MAX_NODES];
symbol_node_t *constant_table[MAX_NODES];

// To track the current scope so that out of scope errors can be found
scope_node_t *curr_scope;

extern char *yytext;
extern int yylineno;

char datatype[100];
int num_params;

symbol_node_t * check_redefined_error(char *symbol);



/* Line 189 of yacc.c  */
#line 106 "yaccfile.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INCLUDE = 258,
     IDENTIFIER = 259,
     INT = 260,
     CHAR = 261,
     FLOAT = 262,
     DOUBLE = 263,
     VOID = 264,
     OR_ASSIGN = 265,
     XOR_ASSIGN = 266,
     AND_ASSIGN = 267,
     RIGHT_ASSIGN = 268,
     LEFT_ASSIGN = 269,
     MOD_ASSIGN = 270,
     DIV_ASSIGN = 271,
     MUL_ASSIGN = 272,
     SUB_ASSIGN = 273,
     ADD_ASSIGN = 274,
     DECREMENT_OPERATOR = 275,
     INCREMENT_OPERATOR = 276,
     NOT = 277,
     LOGIC_OR = 278,
     LOGIC_AND = 279,
     GREATER_THAN = 280,
     LESSER_THAN = 281,
     NOT_EQUAL = 282,
     DOUBLE_EQUAL = 283,
     GREATER_EQUAL = 284,
     LESSER_EQUAL = 285,
     SIGNED = 286,
     UNSIGNED = 287,
     LONG = 288,
     SHORT = 289,
     SWITCH = 290,
     BREAK = 291,
     CONTINUE = 292,
     CASE = 293,
     DEFAULT = 294,
     RETURN = 295,
     FOR = 296,
     WHILE = 297,
     DO = 298,
     IF = 299,
     ELSE = 300,
     CONSTANT_INTEGER = 301,
     CONSTANT_FLOAT = 302,
     CONSTANT_STRING = 303,
     CONSTANT_CHAR = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 37 "yaccfile.y"

	char char_pointer[100];



/* Line 214 of yacc.c  */
#line 197 "yaccfile.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 209 "yaccfile.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   471

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  138
/* YYNRULES -- Number of states.  */
#define YYNSTATES  246

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    66,     2,    36,    38,     2,
      60,    59,    34,    32,    61,    33,    67,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
       2,    10,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,    65,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    15,    18,    20,
      23,    27,    34,    41,    43,    45,    49,    54,    58,    60,
      63,    67,    69,    71,    74,    78,    81,    86,    92,    97,
      98,   100,   102,   104,   106,   111,   117,   123,   129,   136,
     143,   145,   147,   149,   151,   153,   156,   159,   162,   165,
     169,   174,   178,   180,   184,   185,   189,   194,   198,   200,
     202,   204,   206,   208,   210,   212,   214,   216,   218,   220,
     222,   224,   226,   230,   234,   237,   240,   242,   246,   250,
     254,   258,   262,   266,   268,   272,   276,   278,   282,   286,
     290,   294,   296,   298,   301,   304,   305,   307,   309,   311,
     313,   316,   319,   321,   323,   326,   329,   331,   335,   341,
     347,   355,   365,   375,   382,   389,   392,   395,   396,   401,
     407,   415,   417,   421,   425,   427,   429,   431,   433,   435,
     438,   441,   444,   447,   449,   451,   454,   457,   460
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      69,     0,    -1,   101,    -1,   101,    69,    -1,    70,    -1,
      70,    69,    -1,    72,    -1,    72,    69,    -1,    71,    -1,
      71,    69,    -1,    78,    74,    58,    -1,    78,     4,    73,
      75,    59,    58,    -1,    78,     4,    73,    75,    59,    88,
      -1,    60,    -1,    77,    -1,     4,    61,    74,    -1,    34,
       4,    61,    74,    -1,    77,    61,    74,    -1,     4,    -1,
      34,     4,    -1,    79,    61,    74,    -1,    79,    -1,     9,
      -1,    78,     4,    -1,    78,    34,     4,    -1,    78,    77,
      -1,    78,     4,    61,    75,    -1,    78,    34,     4,    61,
      75,    -1,    78,    77,    61,    75,    -1,    -1,    42,    -1,
      41,    -1,    40,    -1,    39,    -1,     4,    62,    54,    63,
      -1,    34,     4,    62,    54,    63,    -1,    38,     4,    62,
      54,    63,    -1,     4,    62,    33,    54,    63,    -1,    34,
       4,    62,    33,    54,    63,    -1,    38,     4,    62,    33,
      54,    63,    -1,     5,    -1,     7,    -1,     9,    -1,     6,
      -1,     8,    -1,    76,     5,    -1,    76,     7,    -1,    76,
       8,    -1,    76,     6,    -1,     4,    82,    83,    -1,    34,
       4,    82,    83,    -1,    77,    82,    83,    -1,    83,    -1,
      83,    61,    80,    -1,    -1,     4,    82,    83,    -1,    34,
       4,    82,    83,    -1,    77,    82,    83,    -1,   102,    -1,
      10,    -1,    20,    -1,    19,    -1,    18,    -1,    17,    -1,
      16,    -1,    15,    -1,    14,    -1,    13,    -1,    12,    -1,
      11,    -1,    84,    -1,    85,    -1,    84,    25,    85,    -1,
      84,    24,    85,    -1,    23,    85,    -1,    23,     4,    -1,
      86,    -1,    85,    26,    86,    -1,    85,    27,    86,    -1,
      85,    30,    86,    -1,    85,    31,    86,    -1,    85,    29,
      86,    -1,    85,    28,    86,    -1,    87,    -1,    86,    32,
      87,    -1,    86,    33,    87,    -1,   102,    -1,    87,    34,
     102,    -1,    87,    35,   102,    -1,    87,    36,   102,    -1,
      89,    91,    90,    -1,    64,    -1,    65,    -1,    92,    91,
      -1,    88,    91,    -1,    -1,    94,    -1,    70,    -1,    96,
      -1,    97,    -1,    81,    58,    -1,    83,    58,    -1,    93,
      -1,    95,    -1,    44,    58,    -1,    45,    58,    -1,    58,
      -1,    48,    83,    58,    -1,    50,    60,    83,    59,    92,
      -1,    50,    60,    83,    59,    88,    -1,    51,    88,    50,
      60,    83,    59,    58,    -1,    49,    60,    81,    58,    83,
      58,    81,    59,    92,    -1,    49,    60,    81,    58,    83,
      58,    81,    59,    88,    -1,    52,    60,    83,    59,    92,
      98,    -1,    52,    60,    83,    59,    88,    98,    -1,    53,
      88,    -1,    53,    92,    -1,    -1,     4,    73,    80,    59,
      -1,    66,     3,    27,     4,    26,    -1,    66,     3,    27,
       4,    67,     4,    26,    -1,   100,    -1,    60,    83,    59,
      -1,    60,    81,    59,    -1,    54,    -1,    55,    -1,    57,
      -1,    56,    -1,     4,    -1,    34,     4,    -1,    38,     4,
      -1,    33,   102,    -1,    32,   102,    -1,    77,    -1,    99,
      -1,    22,     4,    -1,     4,    22,    -1,    21,     4,    -1,
       4,    21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    72,    73,    74,    75,    76,    77,    78,
      82,    87,    98,   114,   118,   119,   122,   130,   131,   134,
     142,   143,   148,   149,   150,   151,   152,   153,   154,   155,
     160,   160,   160,   160,   164,   170,   181,   188,   191,   194,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   213,
     217,   221,   225,   226,   227,   231,   232,   233,   234,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     254,   258,   259,   260,   261,   262,   266,   267,   268,   269,
     270,   271,   272,   276,   277,   278,   282,   283,   284,   285,
     289,   293,   298,   302,   303,   304,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   322,   326,   327,
     331,   336,   337,   341,   342,   346,   347,   348,   352,   356,
     357,   361,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUDE", "IDENTIFIER", "INT", "CHAR",
  "FLOAT", "DOUBLE", "VOID", "'='", "OR_ASSIGN", "XOR_ASSIGN",
  "AND_ASSIGN", "RIGHT_ASSIGN", "LEFT_ASSIGN", "MOD_ASSIGN", "DIV_ASSIGN",
  "MUL_ASSIGN", "SUB_ASSIGN", "ADD_ASSIGN", "DECREMENT_OPERATOR",
  "INCREMENT_OPERATOR", "NOT", "LOGIC_OR", "LOGIC_AND", "GREATER_THAN",
  "LESSER_THAN", "NOT_EQUAL", "DOUBLE_EQUAL", "GREATER_EQUAL",
  "LESSER_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'&'",
  "SIGNED", "UNSIGNED", "LONG", "SHORT", "SWITCH", "BREAK", "CONTINUE",
  "CASE", "DEFAULT", "RETURN", "FOR", "WHILE", "DO", "IF", "ELSE",
  "CONSTANT_INTEGER", "CONSTANT_FLOAT", "CONSTANT_STRING", "CONSTANT_CHAR",
  "';'", "')'", "'('", "','", "'['", "']'", "'{'", "'}'", "'#'", "'.'",
  "$accept", "Begin", "Declaration", "Function_Declaration",
  "Function_Definition", "Bracket_open", "Identifier_List",
  "Formal_Param_List", "Modifiers", "Array_Notation", "Type",
  "Define_Assign", "Param_List", "Assignment", "Assignment_Operator",
  "Expression", "Logical_Expression", "Relational_Expression",
  "Additive_Expression", "Multiplicative_Expression", "Compound_Statement",
  "Scope_Start", "Scope_End", "Statement_List", "Statement",
  "Return_Statement", "While_Statement", "Do_While_Statement",
  "For_Statement", "If_Statement", "Else_Statement", "Function_Call",
  "Include_Statement", "Include", "Primary", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      61,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,    43,    45,    42,    47,    37,    94,    38,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,    59,    41,
      40,    44,    91,    93,   123,   125,    35,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      70,    71,    72,    73,    74,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      83,    84,    84,    84,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      88,    89,    90,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    94,    94,
      95,    96,    96,    97,    97,    98,    98,    98,    99,   100,
     100,   101,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       3,     6,     6,     1,     1,     3,     4,     3,     1,     2,
       3,     1,     1,     2,     3,     2,     4,     5,     4,     0,
       1,     1,     1,     1,     4,     5,     5,     5,     6,     6,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     3,
       4,     3,     1,     3,     0,     3,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     2,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     2,     2,     0,     1,     1,     1,     1,
       2,     2,     1,     1,     2,     2,     1,     3,     5,     5,
       7,     9,     9,     6,     6,     2,     2,     0,     4,     5,
       7,     1,     3,     3,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    40,    43,    41,    44,    42,    33,    32,    31,    30,
       0,     0,     4,     8,     6,     0,     0,   121,     2,     0,
       1,     5,     9,     7,    45,    48,    46,    47,    18,     0,
       0,     0,    14,    21,     3,     0,    59,    69,    68,    67,
      66,    65,    64,    63,    62,    61,    60,    13,     0,     0,
      29,     0,    19,     0,    10,     0,     0,     0,     0,    18,
      15,     0,     0,    42,     0,     0,   128,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   127,   126,     0,   133,
      49,    70,    71,    76,    83,   134,    86,     0,     0,     0,
       0,    17,    51,    20,   119,     0,     0,    34,     0,    23,
       0,    25,   138,   136,    54,   137,   135,   128,    74,   132,
     131,   129,   130,   128,     0,   133,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,    50,     0,     0,     0,    37,
      11,    91,    12,    95,    29,    24,    29,     0,    52,     0,
     129,     0,   123,   122,    73,    72,    77,    78,    82,    81,
      79,    80,    84,    85,    87,    88,    89,     0,    35,     0,
      36,   120,     0,     0,     0,     0,     0,     0,     0,   106,
      97,     0,     0,     0,    95,     0,    95,   102,    96,   103,
      98,    99,    26,    29,    28,   118,    54,    55,     0,    57,
      38,    39,   104,   105,     0,     0,     0,     0,     0,   100,
     101,    94,    92,    90,    93,    27,    53,    56,   107,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,   109,
     108,     0,   117,   117,     0,     0,     0,   114,   113,     0,
     110,   115,   116,     0,   112,   111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,   180,    13,    14,   104,    31,    64,    15,    79,
     181,    33,   147,   182,    51,   183,    81,    82,    83,    84,
     184,   143,   213,   185,   186,   187,   188,   189,   190,   191,
     237,    85,    17,    18,    86
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -127
static const yytype_int16 yypact[] =
{
      15,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
       4,    27,    15,    15,    15,   149,    39,  -127,    15,     3,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,   324,    34,
      38,   -13,   410,   -11,  -127,    63,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,   101,   -28,
     393,    42,   346,    10,  -127,   101,    42,   101,    -1,   357,
    -127,    25,    21,    28,    31,   103,    26,    91,    99,   248,
     255,   255,   124,   132,  -127,  -127,  -127,  -127,   240,  -127,
    -127,    76,   292,    89,     0,  -127,  -127,   101,   -17,    42,
       7,  -127,  -127,  -127,  -127,   134,    30,  -127,   -46,   115,
     136,    85,  -127,  -127,    42,  -127,  -127,   388,   292,  -127,
    -127,    86,    10,    98,   148,   441,   108,   110,   129,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,  -127,   117,   111,  -127,   126,   120,   152,  -127,
    -127,  -127,  -127,   191,   393,   130,   393,   147,   154,    42,
     377,    42,  -127,  -127,   292,   292,    89,    89,    89,    89,
      89,    89,     0,     0,  -127,  -127,  -127,   145,  -127,   153,
    -127,  -127,   104,   135,    42,   150,   157,   155,   161,  -127,
    -127,   101,   164,   168,   191,   163,   191,  -127,  -127,  -127,
    -127,  -127,  -127,   393,  -127,  -127,    42,  -127,    42,  -127,
    -127,  -127,  -127,  -127,   176,   295,    42,   187,    42,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,   180,
    -127,   194,   190,   195,    42,   191,    42,   191,   198,  -127,
    -127,   199,   204,   204,   295,   202,   191,  -127,  -127,   205,
    -127,  -127,  -127,   191,  -127,  -127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,   189,   172,  -127,  -127,   237,    37,  -115,  -127,   -16,
       1,  -127,    70,   -75,   -24,   -45,  -127,   -67,   257,    77,
     -94,  -127,  -127,  -126,   -93,  -127,  -127,  -127,  -127,  -127,
      35,  -127,  -127,  -127,   -61
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
      32,    16,   108,   116,   142,    61,    80,    19,    56,   109,
     110,    92,   140,    16,    16,    16,   133,   118,   141,    16,
       1,     2,     3,     4,     5,    94,    62,    20,    89,   192,
      35,   194,    32,   117,   129,   130,   131,   134,    52,    32,
     136,    32,    53,    28,   135,    54,    66,   102,   103,   101,
      57,    65,   154,   155,     6,     7,     8,     9,   211,   148,
     214,   137,   115,    67,    68,    69,    95,    58,   164,   165,
     166,    32,    90,    29,    70,    71,    72,    30,   215,    96,
      73,    10,   118,   207,    97,    60,    47,   -22,    49,   149,
      98,   151,    91,   139,    93,   105,    74,    75,    76,    77,
     119,   120,    78,   106,   197,    59,   199,    99,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   102,
     103,   127,   128,   118,   132,   118,   198,   115,   111,   204,
     219,   229,   230,   232,   233,    29,   112,   100,   138,    30,
     145,    30,   241,   242,   220,    65,   146,    65,    88,   244,
     245,   148,   150,   217,    24,    25,    26,    27,    47,   239,
      49,   221,   202,   223,   118,    32,   118,   152,   115,   153,
     115,   167,    12,   220,   168,   118,   144,    49,   171,   228,
     169,   231,   118,   170,    12,    12,    12,   -58,   -58,   115,
      12,   193,    88,   203,    65,   113,     1,     2,     3,     4,
       5,    21,    22,    23,   162,   163,   195,    34,   200,   115,
     205,   115,    67,    68,    69,   196,   201,   206,   115,   141,
     115,   208,   209,    70,    71,   114,   210,   115,   212,    73,
       6,     7,     8,     9,   218,   172,   173,   222,   224,   174,
     175,   176,   177,   178,   113,    74,    75,    76,    77,   179,
     226,    78,   107,   225,   227,   141,   234,   236,   235,    66,
     240,    67,    68,    69,   243,    50,   216,     0,   238,    67,
      68,     0,    70,    71,   114,     0,    67,    68,    73,     0,
      70,    71,    72,     0,     0,     0,    73,    70,    71,    72,
       0,     0,     0,    73,    74,    75,    76,    77,     0,   113,
      78,     0,    74,    75,    76,    77,     0,     0,    78,    74,
      75,    76,    77,     0,     0,    78,    67,    68,   121,   122,
     123,   124,   125,   126,     0,     0,     0,    70,    71,   114,
       0,     0,     0,    73,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,     0,     0,     0,     0,    74,
      75,    76,    77,     0,     0,    78,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,   156,   157,
     158,   159,   160,   161,    47,    48,    49,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,     1,     2,
       3,     4,    63,     0,     0,     0,     0,    87,    88,   102,
     103,     0,   -75,   -75,     0,     0,     0,     0,    48,    49,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     0,     6,     7,     8,     9,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,   -75,   -75,    47,   -75,
      49,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55
};

static const yytype_int16 yycheck[] =
{
      16,     0,    69,    78,    98,    33,    51,     3,    32,    70,
      71,    56,    58,    12,    13,    14,    33,    78,    64,    18,
       5,     6,     7,     8,     9,    26,    54,     0,    52,   144,
      27,   146,    48,    78,    34,    35,    36,    54,     4,    55,
      33,    57,     4,     4,    89,    58,     4,    21,    22,    65,
      61,    50,   119,   120,    39,    40,    41,    42,   184,   104,
     186,    54,    78,    21,    22,    23,    67,     4,   129,   130,
     131,    87,    62,    34,    32,    33,    34,    38,   193,    54,
      38,    66,   143,   177,    63,    48,    60,    59,    62,   113,
      59,   115,    55,    63,    57,     4,    54,    55,    56,    57,
      24,    25,    60,     4,   149,     4,   151,     4,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    32,    33,   184,    87,   186,   150,   143,     4,   174,
     205,   225,   225,   227,   227,    34,     4,    34,     4,    38,
       4,    38,   236,   236,   205,   144,    61,   146,    62,   243,
     243,   196,     4,   198,     5,     6,     7,     8,    60,   234,
      62,   206,    58,   208,   225,   181,   227,    59,   184,    59,
     186,    54,     0,   234,    63,   236,    61,    62,    26,   224,
      54,   226,   243,    63,    12,    13,    14,    58,    59,   205,
      18,    61,    62,    58,   193,     4,     5,     6,     7,     8,
       9,    12,    13,    14,   127,   128,    59,    18,    63,   225,
      60,   227,    21,    22,    23,    61,    63,    60,   234,    64,
     236,    60,    58,    32,    33,    34,    58,   243,    65,    38,
      39,    40,    41,    42,    58,    44,    45,    50,    58,    48,
      49,    50,    51,    52,     4,    54,    55,    56,    57,    58,
      60,    60,     4,    59,    59,    64,    58,    53,    59,     4,
      58,    21,    22,    23,    59,    28,   196,    -1,   233,    21,
      22,    -1,    32,    33,    34,    -1,    21,    22,    38,    -1,
      32,    33,    34,    -1,    -1,    -1,    38,    32,    33,    34,
      -1,    -1,    -1,    38,    54,    55,    56,    57,    -1,     4,
      60,    -1,    54,    55,    56,    57,    -1,    -1,    60,    54,
      55,    56,    57,    -1,    -1,    60,    21,    22,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,    38,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    -1,    -1,    60,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   121,   122,
     123,   124,   125,   126,    60,    61,    62,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    61,    62,    21,
      22,    -1,    24,    25,    -1,    -1,    -1,    -1,    61,    62,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    39,    40,    41,    42,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    39,    40,    41,    42,
      66,    69,    70,    71,    72,    76,    78,   100,   101,     3,
       0,    69,    69,    69,     5,     6,     7,     8,     4,    34,
      38,    74,    77,    79,    69,    27,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    60,    61,    62,
      73,    82,     4,     4,    58,    61,    82,    61,     4,     4,
      74,    33,    54,     9,    75,    78,     4,    21,    22,    23,
      32,    33,    34,    38,    54,    55,    56,    57,    60,    77,
      83,    84,    85,    86,    87,    99,   102,    61,    62,    82,
      62,    74,    83,    74,    26,    67,    54,    63,    59,     4,
      34,    77,    21,    22,    73,     4,     4,     4,    85,   102,
     102,     4,     4,     4,    34,    77,    81,    83,   102,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    74,    33,    54,    83,    33,    54,     4,    63,
      58,    64,    88,    89,    61,     4,    61,    80,    83,    82,
       4,    82,    59,    59,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,   102,   102,   102,    54,    63,    54,
      63,    26,    44,    45,    48,    49,    50,    51,    52,    58,
      70,    78,    81,    83,    88,    91,    92,    93,    94,    95,
      96,    97,    75,    61,    75,    59,    61,    83,    82,    83,
      63,    63,    58,    58,    83,    60,    60,    88,    60,    58,
      58,    91,    65,    90,    91,    75,    80,    83,    58,    81,
     102,    83,    50,    83,    58,    59,    60,    59,    83,    88,
      92,    83,    88,    92,    58,    59,    53,    98,    98,    81,
      58,    88,    92,    59,    88,    92
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 11:

/* Line 1455 of yacc.c  */
#line 87 "yaccfile.y"
    {          
                                                        check_redeclaration_error((yyvsp[(2) - (6)].char_pointer));                  
                                                        char funcType[100] = "Function: ";
                                                        strcat(funcType, datatype);
                                                        symbol_node_t *node = sym_tab_insert(symbol_table,(yyvsp[(2) - (6)].char_pointer), curr_scope->scope_num, funcType, "", yylineno);
                                                        node->is_function_defined = false;
                                                        node->num_params = num_params;
                                                    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 98 "yaccfile.y"
    {          
                                                                            symbol_node_t *node = check_redefined_error((yyvsp[(2) - (6)].char_pointer));
                                                                            char funcType[100] = "Function: ";
                                                                            strcat(funcType, datatype);
                                                                            if(!node) {
                                                                                symbol_node_t *node = sym_tab_insert(symbol_table,(yyvsp[(2) - (6)].char_pointer), curr_scope->scope_num, funcType, "", yylineno);
                                                                                node->num_params = num_params;
                                                                            }
                                                                            else {
                                                                                node->is_function_defined = true;
                                                                                node->num_params = num_params;
                                                                            }
                                                                        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 114 "yaccfile.y"
    { num_params = 0; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 119 "yaccfile.y"
    {   check_redeclaration_error((yyvsp[(1) - (3)].char_pointer));
                                                sym_tab_insert(symbol_table,(yyvsp[(1) - (3)].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);
                                            ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 122 "yaccfile.y"
    {
                                                check_redeclaration_error((yyvsp[(2) - (4)].char_pointer));
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                sym_tab_insert(symbol_table,(yyvsp[(2) - (4)].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);
                                                datatype[len] = '\0';
                                            ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 131 "yaccfile.y"
    {   
                                                check_redeclaration_error((yyvsp[(1) - (1)].char_pointer));
                                                sym_tab_insert(symbol_table,(yyvsp[(1) - (1)].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 134 "yaccfile.y"
    {
                                                check_redeclaration_error((yyvsp[(2) - (2)].char_pointer));
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                sym_tab_insert(symbol_table,(yyvsp[(2) - (2)].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);
                                                datatype[len] = '\0';
                                            ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 149 "yaccfile.y"
    { num_params++; check_void_parameter_error((yyvsp[(1) - (2)].char_pointer)); sym_tab_insert(symbol_table,(yyvsp[(2) - (2)].char_pointer) , curr_scope->scope_num, (yyvsp[(1) - (2)].char_pointer), "", yylineno);trace("Formal_Param_List Rule 1\n");;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 150 "yaccfile.y"
    { num_params++; check_void_parameter_error((yyvsp[(1) - (3)].char_pointer)); sym_tab_insert(symbol_table,(yyvsp[(3) - (3)].char_pointer) , curr_scope->scope_num, (yyvsp[(1) - (3)].char_pointer), "", yylineno);trace("Formal_Param_List Rule 2\n");;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 151 "yaccfile.y"
    { num_params++; check_void_parameter_error((yyvsp[(1) - (2)].char_pointer)); trace("Formal_Param_List Rule 3\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 152 "yaccfile.y"
    { num_params++; check_void_parameter_error((yyvsp[(1) - (4)].char_pointer)); sym_tab_insert(symbol_table,(yyvsp[(2) - (4)].char_pointer) , curr_scope->scope_num, (yyvsp[(1) - (4)].char_pointer), "", yylineno);trace("Formal_Param_List Rule 4\n");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 153 "yaccfile.y"
    { num_params++; check_void_parameter_error((yyvsp[(1) - (5)].char_pointer)); sym_tab_insert(symbol_table,(yyvsp[(3) - (5)].char_pointer) , curr_scope->scope_num, (yyvsp[(1) - (5)].char_pointer), "", yylineno);trace("Formal_Param_List Rule 5\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 154 "yaccfile.y"
    { num_params++; check_void_parameter_error((yyvsp[(1) - (4)].char_pointer)); trace("Formal_Param_List Rule 6\n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 164 "yaccfile.y"
    {   
                                        char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                        check_array_dimension_error((yyvsp[(1) - (4)].char_pointer), (yyvsp[(3) - (4)].char_pointer));
                                        sym_tab_insert(symbol_table,(yyvsp[(1) - (4)].char_pointer), curr_scope->scope_num, arrayType, (yyvsp[(3) - (4)].char_pointer), yylineno);
                                        check_array_subscript_error((yyvsp[(1) - (4)].char_pointer));
                                    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 170 "yaccfile.y"
    {   
                                        check_redeclaration_error((yyvsp[(2) - (5)].char_pointer));
                                        check_array_dimension_error((yyvsp[(2) - (5)].char_pointer), (yyvsp[(4) - (5)].char_pointer));
                                        int len = strlen(datatype);
                                        datatype[len] = '*';
                                        datatype[len +1] = '\0';                                
                                        char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                        sym_tab_insert(symbol_table,(yyvsp[(2) - (5)].char_pointer), curr_scope->scope_num, arrayType, (yyvsp[(4) - (5)].char_pointer), yylineno);
                                        datatype[len] = '\0';
                                        check_array_subscript_error((yyvsp[(2) - (5)].char_pointer));
                                    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 181 "yaccfile.y"
    {
                                        check_redeclaration_error((yyvsp[(2) - (5)].char_pointer));
                                        check_array_dimension_error((yyvsp[(2) - (5)].char_pointer), (yyvsp[(4) - (5)].char_pointer));
                                        char arrayType[100] = "Array: ";strcat(arrayType, datatype);
                                        sym_tab_insert(symbol_table,(yyvsp[(2) - (5)].char_pointer), curr_scope->scope_num, arrayType, (yyvsp[(4) - (5)].char_pointer), yylineno);
                                        check_array_subscript_error((yyvsp[(2) - (5)].char_pointer));
                                    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 188 "yaccfile.y"
    {   
                                        yyerror(strcat((yyvsp[(1) - (5)].char_pointer), " has non-positive array size"));
                                    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 191 "yaccfile.y"
    {   
                                        yyerror(strcat((yyvsp[(2) - (6)].char_pointer), " has non-positive array size"));
                                    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 194 "yaccfile.y"
    {
                                        yyerror(strcat((yyvsp[(2) - (6)].char_pointer), " has non-positive array size"));
                                    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 200 "yaccfile.y"
    { strcpy((yyval.char_pointer), (yyvsp[(1) - (1)].char_pointer)); strcpy(datatype, (yyvsp[(1) - (1)].char_pointer));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 201 "yaccfile.y"
    { strcpy((yyval.char_pointer), (yyvsp[(1) - (1)].char_pointer)); strcpy(datatype, (yyvsp[(1) - (1)].char_pointer));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 202 "yaccfile.y"
    { strcpy((yyval.char_pointer), (yyvsp[(1) - (1)].char_pointer)); strcpy(datatype, (yyvsp[(1) - (1)].char_pointer));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 203 "yaccfile.y"
    { strcpy((yyval.char_pointer), (yyvsp[(1) - (1)].char_pointer)); strcpy(datatype, (yyvsp[(1) - (1)].char_pointer));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 204 "yaccfile.y"
    { strcpy((yyval.char_pointer), (yyvsp[(1) - (1)].char_pointer)); strcpy(datatype, (yyvsp[(1) - (1)].char_pointer));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 205 "yaccfile.y"
    { strcpy(datatype, (yyvsp[(2) - (2)].char_pointer));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 206 "yaccfile.y"
    { strcpy(datatype, (yyvsp[(2) - (2)].char_pointer));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 207 "yaccfile.y"
    { strcpy(datatype, (yyvsp[(2) - (2)].char_pointer));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 208 "yaccfile.y"
    { strcpy(datatype, (yyvsp[(2) - (2)].char_pointer));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 213 "yaccfile.y"
    {
                                                                //check_redeclaration_error($1);
                                                                sym_tab_insert(symbol_table,(yyvsp[(1) - (3)].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);trace("Define_Assign Rule 1\n");
                                                            ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 217 "yaccfile.y"
    {
                                                                //check_redeclaration_error($2);
                                                                sym_tab_insert(symbol_table,(yyvsp[(2) - (4)].char_pointer) , curr_scope->scope_num, datatype, "", yylineno);
                                                            ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 225 "yaccfile.y"
    { num_params++; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 226 "yaccfile.y"
    { num_params++; ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 231 "yaccfile.y"
    { check_scope_error((yyvsp[(1) - (3)].char_pointer)); trace("Assignment Rule 1\n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 232 "yaccfile.y"
    { check_scope_error((yyvsp[(2) - (4)].char_pointer)); trace("Assignment Rule 2\n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 233 "yaccfile.y"
    { trace("Array Element Assign Rule"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 293 "yaccfile.y"
    {   curr_scope = add_child_scope(curr_scope);   ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 298 "yaccfile.y"
    {   curr_scope = goto_parent_scope(curr_scope);   ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 322 "yaccfile.y"
    {trace("Return_Statement Call\n");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 352 "yaccfile.y"
    { check_scope_error((yyvsp[(1) - (4)].char_pointer)); parameter_check((yyvsp[(1) - (4)].char_pointer)); is_function((yyvsp[(1) - (4)].char_pointer)); /*sym_tab_insert(symbol_table, $1, curr_scope->scope_num, "Function", "", yylineno);trace("Function Call\n"); */;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 356 "yaccfile.y"
    {check_scope_error((yyvsp[(4) - (5)].char_pointer));;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 357 "yaccfile.y"
    {check_scope_error((yyvsp[(4) - (7)].char_pointer));check_scope_error((yyvsp[(6) - (7)].char_pointer));;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 369 "yaccfile.y"
    {sym_tab_insert(constant_table, (yyvsp[(1) - (1)].char_pointer), -1, "int", "", yylineno); trace("CONSTANT_INTEGER\n");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 370 "yaccfile.y"
    {sym_tab_insert(constant_table, (yyvsp[(1) - (1)].char_pointer), -1, "float", "", yylineno); trace("CONSTANT_FLOAT\n");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 371 "yaccfile.y"
    {sym_tab_insert(constant_table, (yyvsp[(1) - (1)].char_pointer), -1, "char", "", yylineno); trace("CONSTANT_CHAR\n");;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 372 "yaccfile.y"
    {sym_tab_insert(constant_table, (yyvsp[(1) - (1)].char_pointer), -1, "string", "", yylineno); trace("CONSTANT_STRING\n");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 373 "yaccfile.y"
    {check_scope_error((yyvsp[(1) - (1)].char_pointer));trace("Primary Identifier\n");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 374 "yaccfile.y"
    {check_scope_error((yyvsp[(2) - (2)].char_pointer));trace("Pointer Identifier\n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 375 "yaccfile.y"
    {check_scope_error((yyvsp[(2) - (2)].char_pointer));trace("Address of Identifier\n");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 380 "yaccfile.y"
    {check_scope_error((yyvsp[(2) - (2)].char_pointer));;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 381 "yaccfile.y"
    {check_scope_error((yyvsp[(1) - (2)].char_pointer));;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 382 "yaccfile.y"
    {check_scope_error((yyvsp[(2) - (2)].char_pointer));;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 383 "yaccfile.y"
    {check_scope_error((yyvsp[(1) - (2)].char_pointer));;}
    break;



/* Line 1455 of yacc.c  */
#line 2120 "yaccfile.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 387 "yaccfile.y"


// The function check_scope_error() is used to check wheather a identifier(symbol) is declared in the legal scope or not

inline void check_scope_error(char *symbol){
    if(!scope_check(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " is not defined in the legal scope"));
    }
}

// The function parameter_check() checks the count of the total number of parameter of a function i:e wheather there are less arguments // or extra arguments 

inline void parameter_check(char *symbol) {

    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);
    if(node != NULL && num_params > node->num_params) {
        char msg[100] = "Too many arguments for the function ";
        yyerror(strcat(msg, symbol));
    }
    else if(node != NULL && num_params < node->num_params) {
        char msg[100] = "Too few arguments arguments for the function  ";
        yyerror(strcat(msg, symbol));
    }
}

// The function check_redeclaration_error checks wheather a identifier or a function is already declared or not. If it is already     // declared, it throws an error

inline void check_redeclaration_error(char *symbol){
    if(check_in_current_scope(symbol_table, symbol, curr_scope)){
        yyerror(strcat(symbol, " already declared in current scope"));
    }
}

// The function check_redefined_error checks wheather a function is already defined or not. If it is already defined, it throws an error

symbol_node_t * check_redefined_error(char *symbol){
    symbol_node_t *node = scope_check(symbol_table, symbol, curr_scope);
    if(node != NULL && node->is_function_defined)
        yyerror(strcat(symbol, " is already defined in the current scope"));

    return node;
}


// The function is check_array_dimension_error is responsible for checking thee dimension of the error such that the dimension would be // >=0, If it is not it throws an error

inline void check_array_dimension_error(char *symbol, char *arr_size){
    if(atoi(arr_size) < 1){
        yyerror(strcat(symbol, " has array size <=0 "));
    }
}


// The function check_array_subscript_error checks wheather the symbol is an array or not by checking the syntax of array

inline void check_array_subscript_error(char *symbol){
    symbol_node_t *node = sym_tab_arrayLook(symbol_table, symbol);
    if(!strstr(node->type, "Array")){
        yyerror(strcat(symbol, " is not an array"));
    }
}


// This function checks wheather a function's parameter's datatype should not be void

inline void check_void_parameter_error(char *type) {
    if(!strcmp(type, "void")) {
        yyerror("Parameter of function has void datatype");
    }
}


// The function is_function checks wheather a symbol is a function or not

inline void is_function(char *func_name) {
    
    symbol_node_t *node = sym_tab_arrayLook(symbol_table, func_name);
    if(node == NULL) {
        yyerror(strcat(func_name, " function is not declared"));                                        
    }
    if(!strstr(node->type, "Function")) {
        yyerror(strcat(func_name, " is not a function"));
    }
}

inline void trace(char *s){
    if(TRACE_ENABLED)
        {
	fprintf(stderr, "%-20.20s%20.20s%20d\n", s, yytext, yylineno);
}
}


int main()
{
	// initialising current scope
    curr_scope = init_scope();    
    sym_tab_init(symbol_table);
    sym_tab_init(constant_table);

    yyparse();
	printf( "\n\n output: your code is semantically correct \n\n" );
    //printf(FORE_GRN "\n\n your code is sementically correct \n\n" RESET); #1
    
    sym_tab_free(symbol_table);
    sym_tab_free(constant_table);
    // TODO: Free Scope
    
    return 0;
}


//This function is the error  function. Whenever any error is found in during parsing, the corresponding function calls this function // to display the error and to stop parsing.

void yyerror(const char *s) {
    //printf(FORE_RED "%d : %s %s\n" RESET, yylineno, s, yytext );#2
    //printf(FORE_RED "\nParsing failed because of symantic error  \n\n" RESET);#3
    printf( "%d : %s %s\n" ,yylineno, s, yytext );
    printf("\n output: Parsing failed because of symantic error  \n\n" );
    exit(-2);
}

