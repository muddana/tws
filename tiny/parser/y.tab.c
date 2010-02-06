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
     END = 258,
     TO = 259,
     EQSWAP = 260,
     VAR = 261,
     IDENTIFIER = 262,
     CHR = 263,
     POW = 264,
     POOL = 265,
     IF = 266,
     FUNCTION = 267,
     CHARACTER_ALPHA = 268,
     STR_ALPHA = 269,
     READ = 270,
     REPEAT = 271,
     RANGE = 272,
     ELSE = 273,
     RETURN = 274,
     CAPIDENTIFIER = 275,
     UNTIL = 276,
     FOR = 277,
     THEN = 278,
     OF = 279,
     NE = 280,
     MOD = 281,
     GT = 282,
     CASE = 283,
     WHILE = 284,
     OUTPUT = 285,
     EQ = 286,
     EXIT = 287,
     PROCEDURE = 288,
     CONST = 289,
     Eof = 290,
     GTE = 291,
     PRED = 292,
     NOT = 293,
     DO = 294,
     BEGINX = 295,
     ORD = 296,
     AND = 297,
     INTEGER_NUM = 298,
     LTE = 299,
     LOOP = 300,
     SUCC = 301,
     TYPE = 302,
     OR = 303,
     LT = 304,
     OTHERWISE = 305,
     ASSIGNMENT = 306,
     PROGRAM = 307,
     DOWNTO = 308
   };
#endif
/* Tokens.  */
#define END 258
#define TO 259
#define EQSWAP 260
#define VAR 261
#define IDENTIFIER 262
#define CHR 263
#define POW 264
#define POOL 265
#define IF 266
#define FUNCTION 267
#define CHARACTER_ALPHA 268
#define STR_ALPHA 269
#define READ 270
#define REPEAT 271
#define RANGE 272
#define ELSE 273
#define RETURN 274
#define CAPIDENTIFIER 275
#define UNTIL 276
#define FOR 277
#define THEN 278
#define OF 279
#define NE 280
#define MOD 281
#define GT 282
#define CASE 283
#define WHILE 284
#define OUTPUT 285
#define EQ 286
#define EXIT 287
#define PROCEDURE 288
#define CONST 289
#define Eof 290
#define GTE 291
#define PRED 292
#define NOT 293
#define DO 294
#define BEGINX 295
#define ORD 296
#define AND 297
#define INTEGER_NUM 298
#define LTE 299
#define LOOP 300
#define SUCC 301
#define TYPE 302
#define OR 303
#define LT 304
#define OTHERWISE 305
#define ASSIGNMENT 306
#define PROGRAM 307
#define DOWNTO 308




/* Copy the first part of user declarations.  */
#line 1 "code.y"

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <DLists.h>
#include <Tokenizer.h>
#include <Trees.h>

extern TREENODE *root;
typedef struct {
    DNODE mynode;
    TREENODE *nodeptr;
} T_NODE;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "code.y"
{
   TOKEN_INFO info;
   DLIST dlist;
}
/* Line 187 of yacc.c.  */
#line 223 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 236 "y.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   418

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  246

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,    58,    62,    60,    59,    61,    55,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,    56,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    14,    17,    18,    19,    23,    27,    31,
      34,    37,    41,    44,    45,    46,    50,    52,    56,    60,
      63,    64,    65,    69,    73,    75,    77,    79,    81,    82,
      85,    96,   109,   112,   113,   115,   117,   120,   124,   127,
     130,   134,   138,   142,   148,   153,   156,   159,   161,   165,
     174,   183,   188,   192,   195,   197,   199,   200,   201,   203,
     206,   210,   212,   215,   217,   220,   223,   227,   231,   235,
     236,   239,   242,   246,   250,   251,   253,   258,   260,   264,
     266,   270,   274,   278,   282,   286,   290,   292,   296,   300,
     304,   306,   310,   314,   318,   322,   324,   327,   330,   333,
     335,   339,   341,   343,   345,   347,   352,   357,   362,   367,
     369,   371,   375,   377,   379,   383,   385,   387,   390
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    52,   106,    54,    75,    66,    71,    79,
      85,   106,    55,    -1,    47,    67,    -1,    -1,    -1,    68,
      56,    67,    -1,   106,    31,   106,    -1,   106,    31,    69,
      -1,    57,    70,    -1,   106,    58,    -1,   106,    59,    70,
      -1,     6,    72,    -1,    -1,    -1,    73,    56,    72,    -1,
      74,    -1,   106,    54,   106,    -1,   106,    59,    74,    -1,
      34,    76,    -1,    -1,    -1,    77,    56,    76,    -1,   106,
      31,    78,    -1,    43,    -1,    13,    -1,   106,    -1,    80,
      -1,    -1,    81,    80,    -1,    33,   106,    82,    56,    75,
      66,    71,    85,   106,    56,    -1,    12,   106,    82,    54,
     106,    56,    75,    66,    71,    85,   106,    56,    -1,    57,
      83,    -1,    -1,    58,    -1,    84,    -1,    73,    58,    -1,
      73,    56,    84,    -1,    40,    86,    -1,    87,     3,    -1,
      87,    56,    86,    -1,   106,    51,   100,    -1,    30,    57,
      95,    -1,    11,   100,    23,    87,    94,    -1,    29,   100,
      39,    87,    -1,    16,    93,    -1,    45,    92,    -1,    32,
      -1,   105,     5,   105,    -1,    22,   106,    51,   100,     4,
     100,    39,    87,    -1,    22,   106,    51,   100,    53,   100,
      39,    87,    -1,    28,   100,    24,    90,    -1,    15,    57,
      89,    -1,    19,    88,    -1,   107,    -1,    85,    -1,    -1,
      -1,   100,    -1,   106,    58,    -1,   106,    59,    89,    -1,
      91,    -1,    98,    90,    -1,     3,    -1,    96,     3,    -1,
      87,    10,    -1,    87,    56,    92,    -1,    87,    21,   100,
      -1,    87,    56,    93,    -1,    -1,    18,    87,    -1,   100,
      58,    -1,   100,    59,    95,    -1,    50,    87,    97,    -1,
      -1,    56,    -1,    99,    54,    87,    56,    -1,   105,    -1,
     105,    17,   105,    -1,   101,    -1,   101,    27,   101,    -1,
     101,    49,   101,    -1,   101,    36,   101,    -1,   101,    25,
     101,    -1,   101,    31,   101,    -1,   101,    44,   101,    -1,
     102,    -1,   102,    48,   101,    -1,   102,    60,   101,    -1,
     102,    61,   101,    -1,   103,    -1,   103,    26,   102,    -1,
     103,    42,   102,    -1,   103,    62,   102,    -1,   103,    63,
     102,    -1,   104,    -1,    38,   103,    -1,    60,   103,    -1,
      61,   103,    -1,   105,    -1,   105,     9,   104,    -1,    35,
      -1,   106,    -1,    43,    -1,    13,    -1,    37,    57,   100,
      58,    -1,    46,    57,   100,    58,    -1,     8,    57,   100,
      58,    -1,    41,    57,   100,    58,    -1,    14,    -1,   107,
      -1,    57,   100,    58,    -1,     7,    -1,    20,    -1,   106,
      57,   108,    -1,    58,    -1,   109,    -1,   100,    58,    -1,
     100,    59,   109,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   118,   118,   175,   212,   234,   242,   259,   298,   339,
     364,   376,   393,   430,   452,   460,   477,   502,   517,   534,
     571,   593,   601,   618,   659,   692,   725,   739,   765,   773,
     790,   844,   903,   927,   948,   957,   971,   983,  1000,  1038,
    1061,  1078,  1117,  1153,  1206,  1256,  1292,  1328,  1361,  1400,
    1478,  1556,  1606,  1642,  1678,  1690,  1703,  1725,  1733,  1747,
    1759,  1776,  1788,  1805,  1825,  1850,  1873,  1890,  1916,  1934,
    1942,  1967,  1979,  1996,  2038,  2046,  2057,  2085,  2097,  2138,
    2150,  2189,  2228,  2267,  2306,  2345,  2386,  2398,  2437,  2463,
    2491,  2503,  2542,  2581,  2607,  2635,  2647,  2683,  2695,  2720,
    2732,  2773,  2806,  2818,  2851,  2884,  2920,  2956,  2992,  3028,
    3061,  3073,  3087,  3120,  3155,  3183,  3192,  3206,  3218
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "TO", "EQSWAP", "VAR",
  "IDENTIFIER", "CHR", "POW", "POOL", "IF", "FUNCTION", "CHARACTER_ALPHA",
  "STR_ALPHA", "READ", "REPEAT", "RANGE", "ELSE", "RETURN",
  "CAPIDENTIFIER", "UNTIL", "FOR", "THEN", "OF", "NE", "MOD", "GT", "CASE",
  "WHILE", "OUTPUT", "EQ", "EXIT", "PROCEDURE", "CONST", "Eof", "GTE",
  "PRED", "NOT", "DO", "BEGINX", "ORD", "AND", "INTEGER_NUM", "LTE",
  "LOOP", "SUCC", "TYPE", "OR", "LT", "OTHERWISE", "ASSIGNMENT", "PROGRAM",
  "DOWNTO", "':'", "'.'", "';'", "'('", "')'", "','", "'+'", "'-'", "'*'",
  "'/'", "$accept", "Tiny", "TypesRule", "TypesRule_1", "TypeRule",
  "LitRule", "LitRule_1", "Dclns", "Dclns_1", "Dcln", "Dcln_1", "Consts",
  "Consts_1", "ConstDcln", "ConstVals", "SubProgs", "SubProgs_1",
  "FuncsAndProcs", "OptionalParams", "OptionalParams_1",
  "OptionalParams_1_1", "Body", "Body_1", "Statement",
  "Statement_1_1_1_1_1_1_1", "Statement_1_1_1_1_1_1",
  "Statement_1_1_1_1_1", "Statement_1_1_1_1_1_1_1_1", "Statement_1_1_1_1",
  "Statement_1_1_1", "Statement_1_1", "Statement_1", "Otherwise",
  "Otherwise_1", "CaseClause", "Clause", "Expression", "Term",
  "ModAndMulDiv", "Unary", "Misc", "Primary", "Name", "FuncCall",
  "FuncCall_1", "FuncCall_1_1", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    58,    46,    59,    40,    41,    44,
      43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    68,    68,    69,
      70,    70,    71,    71,    72,    72,    73,    74,    74,    75,
      75,    76,    76,    77,    78,    78,    78,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    97,    97,    98,    99,    99,   100,
     100,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   103,   103,   103,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   107,   108,   108,   109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    10,     2,     0,     0,     3,     3,     3,     2,
       2,     3,     2,     0,     0,     3,     1,     3,     3,     2,
       0,     0,     3,     3,     1,     1,     1,     1,     0,     2,
      10,    12,     2,     0,     1,     1,     2,     3,     2,     2,
       3,     3,     3,     5,     4,     2,     2,     1,     3,     8,
       8,     4,     3,     2,     1,     1,     0,     0,     1,     2,
       3,     1,     2,     1,     2,     2,     3,     3,     3,     0,
       2,     2,     3,     3,     0,     1,     4,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     2,     2,     2,     1,
       3,     1,     1,     1,     1,     4,     4,     4,     4,     1,
       1,     3,     1,     1,     3,     1,     1,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,   112,   113,     0,     1,    20,    21,     4,
      19,     0,     0,     5,    13,    21,     0,     3,     0,     0,
      14,    28,    22,    25,    24,    23,    26,     5,     0,    12,
       0,    16,     0,     0,     0,     0,    27,    28,     6,     0,
       8,     7,    14,     0,     0,    33,    33,    56,     0,    29,
       9,     0,    15,    17,    18,     0,     0,     0,     0,     0,
     104,   109,     0,    56,    57,     0,     0,     0,     0,    47,
     101,     0,     0,   103,    56,     0,     0,    55,    38,     0,
       0,   102,    54,     0,    10,     0,    34,     0,    32,    35,
       0,    20,     0,     0,     0,     0,     0,    79,    86,    90,
      95,    99,   102,   110,     0,     0,    45,    53,    58,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     0,    39,
      56,     0,     0,     0,     2,    11,     0,    36,     0,     4,
       0,    96,    97,    98,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,    56,     0,     0,    56,    42,     0,     0,     0,
      65,    56,     0,   111,    40,    48,    41,   115,     0,   114,
     116,    37,    20,    13,   107,    69,    83,    80,    84,    82,
      85,    81,    87,    88,    89,    91,    92,    93,    94,   100,
      59,     0,    67,    68,     0,    63,    56,    51,    61,     0,
       0,     0,    77,    44,    71,     0,   105,   108,    66,   106,
     117,     0,     4,     0,    56,    43,    60,     0,     0,    74,
      64,    62,    56,     0,    72,   118,    13,     0,    70,     0,
       0,    75,    73,     0,    78,     0,     0,    56,    56,    76,
       0,    30,    49,    50,     0,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    14,    17,    18,    40,    50,    21,    29,    30,
      31,     9,    10,    11,    25,    35,    36,    37,    56,    88,
      89,    77,    78,    79,   107,   149,   197,   198,   116,   106,
     215,   156,   199,   232,   200,   201,   157,    97,    98,    99,
     100,   101,   102,   103,   169,   170
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -168
static const yytype_int16 yypact[] =
{
     -24,    33,    36,  -168,  -168,    16,  -168,    42,    33,    43,
    -168,     7,    63,    33,    90,    33,    58,  -168,    44,    73,
      33,    -3,  -168,  -168,  -168,  -168,  -168,    33,     3,  -168,
      50,  -168,    -4,    33,    33,    74,  -168,    -3,  -168,    33,
    -168,  -168,    33,    33,    33,    60,    60,   321,    33,  -168,
    -168,    10,  -168,  -168,  -168,     9,    67,    71,    77,   239,
    -168,  -168,    78,   321,   239,    33,   239,   239,    82,  -168,
    -168,    83,    84,  -168,   321,    86,   239,  -168,  -168,     2,
     123,   -26,   126,    75,  -168,    33,  -168,   -19,  -168,  -168,
      33,    42,   239,   239,   239,   239,   121,    93,    49,    30,
    -168,   137,    91,  -168,    33,    -8,  -168,  -168,  -168,    96,
     128,   110,   239,   239,   239,     1,  -168,   239,    92,  -168,
     321,   361,   239,   197,  -168,  -168,    33,  -168,    97,    43,
      98,  -168,  -168,  -168,   321,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   361,  -168,
      21,   239,   321,   239,   281,   321,  -168,    29,   100,   101,
    -168,   321,   104,  -168,  -168,  -168,  -168,  -168,    53,  -168,
    -168,  -168,    42,    90,  -168,   146,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,    33,  -168,  -168,    13,  -168,   321,  -168,  -168,   152,
     281,   111,   156,  -168,  -168,   239,  -168,  -168,  -168,  -168,
    -168,   239,    43,    74,   321,  -168,  -168,   239,   239,   118,
    -168,  -168,   321,   361,  -168,  -168,    90,    33,  -168,   138,
     139,  -168,  -168,   120,  -168,    74,   124,   321,   321,  -168,
      33,  -168,  -168,  -168,   130,  -168
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -126,   154,  -168,  -168,   102,  -167,   140,   -51,
     144,   -89,   174,  -168,  -168,  -168,   155,  -168,   145,  -168,
      68,   -34,    80,    11,  -168,     6,    12,  -168,    45,    62,
    -168,    14,  -168,  -168,  -168,  -168,   -15,   125,    24,   -73,
      70,   -39,    -1,   -29,  -168,     4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -111
static const yytype_int16 yytable[] =
{
       5,    48,   129,   173,    87,   119,   213,    12,    80,    33,
       3,   160,    19,   151,    12,    26,     3,   217,    82,    32,
     131,   132,   133,     4,    80,   122,    19,    41,     1,     4,
      34,   123,    45,    46,    82,    80,     6,   126,    51,   127,
       3,    32,    53,    32,    96,    82,    81,    83,   152,   108,
      43,   110,   111,     4,    32,    44,   144,   161,   120,   235,
      39,   118,    81,    15,   109,     3,   218,    86,    84,    85,
       7,    23,   145,    81,   105,    87,     8,   130,     4,   190,
     191,    80,   165,   212,    51,   115,   226,   204,   205,   128,
      13,    82,   146,   147,    16,    80,    20,   141,   158,   159,
      27,    24,   162,   150,    28,    82,    42,   166,   168,   142,
     143,   210,   211,    80,    47,   202,    80,    55,   135,    81,
     136,    90,    80,    82,   137,    32,    82,    91,   121,   138,
     124,  -110,    82,    81,    92,   104,   192,   139,   194,   112,
     113,   114,   140,   117,   134,   175,   148,   153,   123,   155,
     163,    81,   154,   172,    81,   220,   174,    80,   206,   207,
      81,   202,   209,   105,   214,   222,   203,    82,   185,   186,
     187,   188,   115,   223,   231,    80,   239,   237,   238,   227,
     241,    38,    52,    80,   234,    82,   245,   125,    54,    22,
     150,    57,    49,    82,   171,    81,   168,   216,    80,    80,
     164,   240,   229,   230,     3,    58,   208,   219,    82,    82,
      60,    61,   221,    81,   193,   225,     0,     4,   189,   224,
       0,    81,     0,     0,     0,   228,   236,     0,     0,     0,
       0,     0,    70,   233,    71,    93,    81,    81,    72,   244,
      73,     0,     0,    75,     0,     0,     3,    58,   242,   243,
       0,     0,    60,    61,    76,   167,     0,    94,    95,     4,
     176,   177,   178,   179,   180,   181,   182,   183,   184,     0,
       0,     0,     0,     0,    70,     0,    71,    93,     0,     0,
      72,     0,    73,     0,   195,    75,     0,     0,     3,    58,
       0,     0,     0,     0,    60,    61,    76,     0,     0,    94,
      95,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,    71,     0,
       0,     0,    72,     0,    73,     0,     0,    75,     3,    58,
       0,   196,    59,     0,    60,    61,    62,    63,    76,     0,
      64,     4,     0,    65,     0,     0,     0,     0,     0,    66,
      67,    68,     0,    69,     0,     0,    70,     0,    71,     0,
       0,    47,    72,     0,    73,     0,    74,    75,     3,    58,
       0,     0,     0,     0,    60,    61,     0,     0,    76,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,    71,     0,
       0,     0,    72,     0,    73,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
       1,    35,    91,   129,    55,     3,   173,     8,    47,    12,
       7,    10,    13,    21,    15,    16,     7,     4,    47,    20,
      93,    94,    95,    20,    63,    51,    27,    28,    52,    20,
      33,    57,    33,    34,    63,    74,     0,    56,    39,    58,
       7,    42,    43,    44,    59,    74,    47,    48,    56,    64,
      54,    66,    67,    20,    55,    59,    26,    56,    56,   226,
      57,    76,    63,    56,    65,     7,    53,    58,    58,    59,
      54,    13,    42,    74,    63,   126,    34,    92,    20,    58,
      59,   120,   121,   172,    85,    74,   212,    58,    59,    90,
      47,   120,    62,    63,    31,   134,     6,    48,   113,   114,
      56,    43,   117,   104,    31,   134,    56,   122,   123,    60,
      61,    58,    59,   152,    40,   154,   155,    57,    25,   120,
      27,    54,   161,   152,    31,   126,   155,    56,     5,    36,
      55,     5,   161,   134,    57,    57,   151,    44,   153,    57,
      57,    57,    49,    57,    23,   134,     9,    51,    57,    39,
      58,   152,    24,    56,   155,     3,    58,   196,    58,    58,
     161,   200,    58,   152,    18,    54,   155,   196,   144,   145,
     146,   147,   161,    17,    56,   214,    56,    39,    39,   213,
      56,    27,    42,   222,   223,   214,    56,    85,    44,    15,
     191,    46,    37,   222,   126,   196,   211,   191,   237,   238,
     120,   235,   217,   218,     7,     8,   161,   196,   237,   238,
      13,    14,   200,   214,   152,   211,    -1,    20,   148,   205,
      -1,   222,    -1,    -1,    -1,   214,   227,    -1,    -1,    -1,
      -1,    -1,    35,   222,    37,    38,   237,   238,    41,   240,
      43,    -1,    -1,    46,    -1,    -1,     7,     8,   237,   238,
      -1,    -1,    13,    14,    57,    58,    -1,    60,    61,    20,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    38,    -1,    -1,
      41,    -1,    43,    -1,     3,    46,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    57,    -1,    -1,    60,
      61,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    46,     7,     8,
      -1,    50,    11,    -1,    13,    14,    15,    16,    57,    -1,
      19,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    35,    -1,    37,    -1,
      -1,    40,    41,    -1,    43,    -1,    45,    46,     7,     8,
      -1,    -1,    -1,    -1,    13,    14,    -1,    -1,    57,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    52,    65,     7,    20,   106,     0,    54,    34,    75,
      76,    77,   106,    47,    66,    56,    31,    67,    68,   106,
       6,    71,    76,    13,    43,    78,   106,    56,    31,    72,
      73,    74,   106,    12,    33,    79,    80,    81,    67,    57,
      69,   106,    56,    54,    59,   106,   106,    40,    85,    80,
      70,   106,    72,   106,    74,    57,    82,    82,     8,    11,
      13,    14,    15,    16,    19,    22,    28,    29,    30,    32,
      35,    37,    41,    43,    45,    46,    57,    85,    86,    87,
     105,   106,   107,   106,    58,    59,    58,    73,    83,    84,
      54,    56,    57,    38,    60,    61,   100,   101,   102,   103,
     104,   105,   106,   107,    57,    87,    93,    88,   100,   106,
     100,   100,    57,    57,    57,    87,    92,    57,   100,     3,
      56,     5,    51,    57,    55,    70,    56,    58,   106,    75,
     100,   103,   103,   103,    23,    25,    27,    31,    36,    44,
      49,    48,    60,    61,    26,    42,    62,    63,     9,    89,
     106,    21,    56,    51,    24,    39,    95,   100,   100,   100,
      10,    56,   100,    58,    86,   105,   100,    58,   100,   108,
     109,    84,    56,    66,    58,    87,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   102,   104,
      58,    59,   100,    93,   100,     3,    50,    90,    91,    96,
      98,    99,   105,    87,    58,    59,    58,    58,    92,    58,
      58,    59,    75,    71,    18,    94,    89,     4,    53,    87,
       3,    90,    54,    17,    95,   109,    66,    85,    87,   100,
     100,    56,    97,    87,   105,    71,   106,    39,    39,    56,
      85,    56,    87,    87,   106,    56
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
#line 119 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (10)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (10)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (10)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (10)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (10)].dlist)));

		while (DCount(&(yyvsp[(4) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(4) - (10)].dlist)));

		while (DCount(&(yyvsp[(5) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(5) - (10)].dlist)));

		while (DCount(&(yyvsp[(6) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(6) - (10)].dlist)));

		while (DCount(&(yyvsp[(7) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(7) - (10)].dlist)));

		while (DCount(&(yyvsp[(8) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(8) - (10)].dlist)));

		while (DCount(&(yyvsp[(9) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(9) - (10)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"program",
		                                TREETAG_LINE,(yyvsp[(1) - (10)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (10)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		t->mynode = *(DHead(&r));
		root = t->nodeptr;

             }
    break;

  case 3:
#line 176 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"types",
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 4:
#line 212 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"types",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 5:
#line 234 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 6:
#line 243 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 7:
#line 260 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 8:
#line 299 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 9:
#line 340 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"lit",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 10:
#line 365 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 11:
#line 377 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 12:
#line 394 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 13:
#line 430 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 14:
#line 452 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 15:
#line 461 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 16:
#line 478 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"var",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 17:
#line 503 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 18:
#line 518 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 19:
#line 535 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<consts>",
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 20:
#line 571 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<consts>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 21:
#line 593 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 22:
#line 602 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 23:
#line 619 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"const",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 24:
#line 660 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 25:
#line 693 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<char>",
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 26:
#line 726 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 27:
#line 740 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<subprogs>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 28:
#line 765 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 29:
#line 774 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 30:
#line 791 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (10)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (10)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (10)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (10)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (10)].dlist)));

		while (DCount(&(yyvsp[(3) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (10)].dlist)));

		while (DCount(&(yyvsp[(5) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(5) - (10)].dlist)));

		while (DCount(&(yyvsp[(6) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(6) - (10)].dlist)));

		while (DCount(&(yyvsp[(7) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(7) - (10)].dlist)));

		while (DCount(&(yyvsp[(8) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(8) - (10)].dlist)));

		while (DCount(&(yyvsp[(9) - (10)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(9) - (10)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<prc>",
		                                TREETAG_LINE,(yyvsp[(1) - (10)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (10)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 31:
#line 845 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (12)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (12)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (12)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (12)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (12)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (12)].dlist)));

		while (DCount(&(yyvsp[(3) - (12)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (12)].dlist)));

		while (DCount(&(yyvsp[(5) - (12)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(5) - (12)].dlist)));

		while (DCount(&(yyvsp[(7) - (12)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(7) - (12)].dlist)));

		while (DCount(&(yyvsp[(8) - (12)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(8) - (12)].dlist)));

		while (DCount(&(yyvsp[(9) - (12)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(9) - (12)].dlist)));

		while (DCount(&(yyvsp[(10) - (12)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(10) - (12)].dlist)));

		while (DCount(&(yyvsp[(11) - (12)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(11) - (12)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<fnc>",
		                                TREETAG_LINE,(yyvsp[(1) - (12)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (12)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 32:
#line 904 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<params>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 33:
#line 927 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<params>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 34:
#line 949 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 35:
#line 958 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 36:
#line 972 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 37:
#line 984 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 38:
#line 1001 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"block",
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 39:
#line 1039 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		if ((yyvsp[(2) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
    break;

  case 40:
#line 1062 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 41:
#line 1079 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"assign",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 42:
#line 1118 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"output",
		                                TREETAG_LINE,(yyvsp[(1) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 43:
#line 1154 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (5)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (5)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (5)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (5)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (5)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (5)].dlist)));

		if ((yyvsp[(3) - (5)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(3) - (5)].info).string,
		                                TREETAG_LINE,(yyvsp[(3) - (5)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(3) - (5)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(4) - (5)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(4) - (5)].dlist)));

		while (DCount(&(yyvsp[(5) - (5)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(5) - (5)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"if",
		                                TREETAG_LINE,(yyvsp[(1) - (5)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (5)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 44:
#line 1207 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (4)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (4)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (4)].dlist)));

		if ((yyvsp[(3) - (4)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(3) - (4)].info).string,
		                                TREETAG_LINE,(yyvsp[(3) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(3) - (4)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(4) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(4) - (4)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"while",
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 45:
#line 1257 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"repeat",
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 46:
#line 1293 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"loop",
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 47:
#line 1329 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"exit",
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 48:
#line 1362 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<swap>",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 49:
#line 1401 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (8)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (8)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (8)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (8)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (8)].dlist)));

		if ((yyvsp[(3) - (8)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(3) - (8)].info).string,
		                                TREETAG_LINE,(yyvsp[(3) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(3) - (8)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(4) - (8)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(4) - (8)].dlist)));

		if ((yyvsp[(5) - (8)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(5) - (8)].info).string,
		                                TREETAG_LINE,(yyvsp[(5) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(5) - (8)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(6) - (8)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(6) - (8)].dlist)));

		if ((yyvsp[(7) - (8)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(7) - (8)].info).string,
		                                TREETAG_LINE,(yyvsp[(7) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(7) - (8)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(8) - (8)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(8) - (8)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<upto>",
		                                TREETAG_LINE,(yyvsp[(1) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (8)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 50:
#line 1479 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (8)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (8)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (8)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (8)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (8)].dlist)));

		if ((yyvsp[(3) - (8)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(3) - (8)].info).string,
		                                TREETAG_LINE,(yyvsp[(3) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(3) - (8)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(4) - (8)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(4) - (8)].dlist)));

		if ((yyvsp[(5) - (8)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(5) - (8)].info).string,
		                                TREETAG_LINE,(yyvsp[(5) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(5) - (8)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(6) - (8)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(6) - (8)].dlist)));

		if ((yyvsp[(7) - (8)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(7) - (8)].info).string,
		                                TREETAG_LINE,(yyvsp[(7) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(7) - (8)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(8) - (8)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(8) - (8)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<downto>",
		                                TREETAG_LINE,(yyvsp[(1) - (8)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (8)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 51:
#line 1557 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (4)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (4)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (4)].dlist)));

		if ((yyvsp[(3) - (4)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(3) - (4)].info).string,
		                                TREETAG_LINE,(yyvsp[(3) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(3) - (4)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(4) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(4) - (4)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"case",
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 52:
#line 1607 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"read",
		                                TREETAG_LINE,(yyvsp[(1) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 53:
#line 1643 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<return>",
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 54:
#line 1679 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 55:
#line 1691 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 56:
#line 1703 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<null>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 57:
#line 1725 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 58:
#line 1734 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 59:
#line 1748 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 60:
#line 1760 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 61:
#line 1777 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 62:
#line 1789 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 63:
#line 1806 "code.y"
    {
		DLIST r;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
    break;

  case 64:
#line 1826 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		if ((yyvsp[(2) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
    break;

  case 65:
#line 1851 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		if ((yyvsp[(2) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		(yyval.dlist) = r;

             }
    break;

  case 66:
#line 1874 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 67:
#line 1891 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 68:
#line 1917 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 69:
#line 1934 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 70:
#line 1943 "code.y"
    {
		DLIST r;

		InitDList(&r);

		if ((yyvsp[(1) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 71:
#line 1968 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 72:
#line 1980 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 73:
#line 1997 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<otherwise>",
		                                TREETAG_LINE,(yyvsp[(1) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 74:
#line 2038 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 75:
#line 2047 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 76:
#line 2058 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (4)].dlist)));

		while (DCount(&(yyvsp[(3) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (4)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<case_clause>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 77:
#line 2086 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 78:
#line 2098 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<range>",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 79:
#line 2139 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 80:
#line 2151 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 81:
#line 2190 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 82:
#line 2229 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">=",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 83:
#line 2268 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<>",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 84:
#line 2307 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"=",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 85:
#line 2346 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<=",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 86:
#line 2387 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 87:
#line 2399 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"or",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 88:
#line 2438 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"+",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 89:
#line 2464 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"-",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 90:
#line 2492 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 91:
#line 2504 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"mod",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 92:
#line 2543 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"and",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 93:
#line 2582 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"*",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 94:
#line 2608 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"/",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 95:
#line 2636 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 96:
#line 2648 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (2)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (2)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"not",
		                                TREETAG_LINE,(yyvsp[(1) - (2)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (2)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 97:
#line 2684 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 98:
#line 2696 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"neg",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 99:
#line 2721 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 100:
#line 2733 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		if ((yyvsp[(2) - (3)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(2) - (3)].info).string,
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"pow",
		                                TREETAG_LINE,(yyvsp[(2) - (3)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(2) - (3)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 101:
#line 2774 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"eof",
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 102:
#line 2807 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 103:
#line 2819 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 104:
#line 2852 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<char>",
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 105:
#line 2885 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (4)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (4)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (4)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"pred",
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 106:
#line 2921 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (4)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (4)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (4)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"succ",
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 107:
#line 2957 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (4)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (4)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (4)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"chr",
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 108:
#line 2993 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (4)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (4)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(3) - (4)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (4)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"ord",
		                                TREETAG_LINE,(yyvsp[(1) - (4)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (4)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 109:
#line 3029 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<string>",
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 110:
#line 3062 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 111:
#line 3074 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 112:
#line 3088 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<identifier>",
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 113:
#line 3121 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (1)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (1)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<identifier>",
		                                TREETAG_LINE,(yyvsp[(1) - (1)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (1)].info).column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 114:
#line 3156 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<call>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		(yyval.dlist) = r;

             }
    break;

  case 115:
#line 3184 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 116:
#line 3193 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 117:
#line 3207 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 118:
#line 3219 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (3)].dlist)));

		while (DCount(&(yyvsp[(3) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(3) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;


/* Line 1267 of yacc.c.  */
#line 5066 "y.tab.c"
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



