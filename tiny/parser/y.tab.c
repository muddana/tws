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
     CHARACTER_ALPHA = 267,
     STR_ALPHA = 268,
     READ = 269,
     REPEAT = 270,
     RANGE = 271,
     ELSE = 272,
     CAPIDENTIFIER = 273,
     UNTIL = 274,
     FOR = 275,
     THEN = 276,
     OF = 277,
     NE = 278,
     MOD = 279,
     GT = 280,
     CASE = 281,
     WHILE = 282,
     OUTPUT = 283,
     EQ = 284,
     EXIT = 285,
     CONST = 286,
     Eof = 287,
     GTE = 288,
     PRED = 289,
     NOT = 290,
     DO = 291,
     BEGINX = 292,
     ORD = 293,
     AND = 294,
     INTEGER_NUM = 295,
     LTE = 296,
     LOOP = 297,
     SUCC = 298,
     TYPE = 299,
     OR = 300,
     LT = 301,
     OTHERWISE = 302,
     ASSIGNMENT = 303,
     PROGRAM = 304,
     DOWNTO = 305
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
#define CHARACTER_ALPHA 267
#define STR_ALPHA 268
#define READ 269
#define REPEAT 270
#define RANGE 271
#define ELSE 272
#define CAPIDENTIFIER 273
#define UNTIL 274
#define FOR 275
#define THEN 276
#define OF 277
#define NE 278
#define MOD 279
#define GT 280
#define CASE 281
#define WHILE 282
#define OUTPUT 283
#define EQ 284
#define EXIT 285
#define CONST 286
#define Eof 287
#define GTE 288
#define PRED 289
#define NOT 290
#define DO 291
#define BEGINX 292
#define ORD 293
#define AND 294
#define INTEGER_NUM 295
#define LTE 296
#define LOOP 297
#define SUCC 298
#define TYPE 299
#define OR 300
#define LT 301
#define OTHERWISE 302
#define ASSIGNMENT 303
#define PROGRAM 304
#define DOWNTO 305




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
#line 217 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 230 "y.tab.c"

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
#define YYLAST   291

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,    55,    59,    57,    56,    58,    52,    60,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    53,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    13,    16,    17,    18,    22,    26,    30,
      33,    36,    40,    43,    44,    45,    49,    51,    55,    59,
      62,    63,    64,    68,    72,    74,    76,    78,    81,    84,
      88,    92,    96,   102,   107,   110,   113,   115,   119,   128,
     137,   142,   146,   148,   149,   152,   156,   158,   161,   163,
     166,   169,   173,   177,   181,   182,   185,   188,   192,   196,
     197,   199,   204,   206,   210,   212,   216,   220,   224,   228,
     232,   236,   238,   242,   246,   250,   252,   256,   260,   264,
     268,   270,   273,   276,   279,   281,   285,   287,   289,   291,
     293,   298,   303,   308,   313,   315,   319,   321
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    49,    96,    51,    72,    63,    68,    76,
      96,    52,    -1,    44,    64,    -1,    -1,    -1,    65,    53,
      64,    -1,    96,    29,    96,    -1,    96,    29,    66,    -1,
      54,    67,    -1,    96,    55,    -1,    96,    56,    67,    -1,
       6,    69,    -1,    -1,    -1,    70,    53,    69,    -1,    71,
      -1,    96,    51,    96,    -1,    96,    56,    71,    -1,    31,
      73,    -1,    -1,    -1,    74,    53,    73,    -1,    96,    29,
      75,    -1,    40,    -1,    12,    -1,    96,    -1,    37,    77,
      -1,    78,     3,    -1,    78,    53,    77,    -1,    96,    48,
      90,    -1,    28,    54,    85,    -1,    11,    90,    21,    78,
      84,    -1,    27,    90,    36,    78,    -1,    15,    83,    -1,
      42,    82,    -1,    30,    -1,    95,     5,    95,    -1,    20,
      96,    48,    90,     4,    90,    36,    78,    -1,    20,    96,
      48,    90,    50,    90,    36,    78,    -1,    26,    90,    22,
      80,    -1,    14,    54,    79,    -1,    76,    -1,    -1,    96,
      55,    -1,    96,    56,    79,    -1,    81,    -1,    88,    80,
      -1,     3,    -1,    86,     3,    -1,    78,    10,    -1,    78,
      53,    82,    -1,    78,    19,    90,    -1,    78,    53,    83,
      -1,    -1,    17,    78,    -1,    90,    55,    -1,    90,    56,
      85,    -1,    47,    78,    87,    -1,    -1,    53,    -1,    89,
      51,    78,    53,    -1,    95,    -1,    95,    16,    95,    -1,
      91,    -1,    91,    25,    91,    -1,    91,    46,    91,    -1,
      91,    33,    91,    -1,    91,    23,    91,    -1,    91,    29,
      91,    -1,    91,    41,    91,    -1,    92,    -1,    92,    45,
      91,    -1,    92,    57,    91,    -1,    92,    58,    91,    -1,
      93,    -1,    93,    24,    92,    -1,    93,    39,    92,    -1,
      93,    59,    92,    -1,    93,    60,    92,    -1,    94,    -1,
      35,    93,    -1,    57,    93,    -1,    58,    93,    -1,    95,
      -1,    95,     9,    94,    -1,    32,    -1,    96,    -1,    40,
      -1,    12,    -1,    34,    54,    90,    55,    -1,    43,    54,
      90,    55,    -1,     8,    54,    90,    55,    -1,    38,    54,
      90,    55,    -1,    13,    -1,    54,    90,    55,    -1,     7,
      -1,    18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   159,   196,   218,   226,   243,   282,   323,
     348,   360,   377,   414,   436,   444,   461,   486,   501,   518,
     555,   577,   585,   602,   643,   676,   709,   723,   761,   784,
     801,   840,   876,   929,   979,  1015,  1051,  1084,  1123,  1201,
    1279,  1329,  1365,  1378,  1399,  1411,  1428,  1440,  1457,  1477,
    1502,  1525,  1542,  1568,  1586,  1594,  1619,  1631,  1648,  1690,
    1698,  1709,  1737,  1749,  1790,  1802,  1841,  1880,  1919,  1958,
    1997,  2038,  2050,  2089,  2115,  2143,  2155,  2194,  2233,  2259,
    2287,  2299,  2335,  2347,  2372,  2384,  2425,  2458,  2470,  2503,
    2536,  2572,  2608,  2644,  2680,  2713,  2727,  2760
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "TO", "EQSWAP", "VAR",
  "IDENTIFIER", "CHR", "POW", "POOL", "IF", "CHARACTER_ALPHA", "STR_ALPHA",
  "READ", "REPEAT", "RANGE", "ELSE", "CAPIDENTIFIER", "UNTIL", "FOR",
  "THEN", "OF", "NE", "MOD", "GT", "CASE", "WHILE", "OUTPUT", "EQ", "EXIT",
  "CONST", "Eof", "GTE", "PRED", "NOT", "DO", "BEGINX", "ORD", "AND",
  "INTEGER_NUM", "LTE", "LOOP", "SUCC", "TYPE", "OR", "LT", "OTHERWISE",
  "ASSIGNMENT", "PROGRAM", "DOWNTO", "':'", "'.'", "';'", "'('", "')'",
  "','", "'+'", "'-'", "'*'", "'/'", "$accept", "Tiny", "TypesRule",
  "TypesRule_1", "TypeRule", "LitRule", "LitRule_1", "Dclns", "Dclns_1",
  "Dcln", "Dcln_1", "Consts", "Consts_1", "ConstDcln", "ConstVals", "Body",
  "Body_1", "Statement", "Statement_1_1_1_1_1_1", "Statement_1_1_1_1_1",
  "Statement_1_1_1_1_1_1_1", "Statement_1_1_1_1", "Statement_1_1_1",
  "Statement_1_1", "Statement_1", "Otherwise", "Otherwise_1", "CaseClause",
  "Clause", "Expression", "Term", "ModAndMulDiv", "Unary", "Misc",
  "Primary", "Name", 0
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
     305,    58,    46,    59,    40,    41,    44,    43,    45,    42,
      47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    69,    69,    70,    71,    71,    72,
      72,    73,    73,    74,    75,    75,    75,    76,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    87,
      87,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    94,    94,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     2,     0,     0,     3,     3,     3,     2,
       2,     3,     2,     0,     0,     3,     1,     3,     3,     2,
       0,     0,     3,     3,     1,     1,     1,     2,     2,     3,
       3,     3,     5,     4,     2,     2,     1,     3,     8,     8,
       4,     3,     1,     0,     2,     3,     1,     2,     1,     2,
       2,     3,     3,     3,     0,     2,     2,     3,     3,     0,
       1,     4,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     2,     2,     2,     1,     3,     1,     1,     1,     1,
       4,     4,     4,     4,     1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    96,    97,     0,     1,    20,    21,     4,
      19,     0,     0,     5,    13,    21,     0,     3,     0,     0,
      14,     0,    22,    25,    24,    23,    26,     5,     0,    12,
       0,    16,     0,    43,     0,     6,     0,     8,     7,    14,
       0,     0,     0,     0,    89,    94,     0,    43,     0,     0,
       0,     0,    36,    86,     0,     0,    88,    43,     0,     0,
      42,    27,     0,     0,    87,     0,     9,     0,    15,    17,
      18,     0,     0,     0,     0,     0,    64,    71,    75,    80,
      84,    87,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,    28,    43,     0,     0,     2,
      10,     0,     0,    81,    82,    83,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,     0,    43,     0,     0,    43,    31,     0,
       0,     0,    50,    43,     0,    95,    29,    37,    30,    11,
      92,    54,    68,    65,    69,    67,    70,    66,    72,    73,
      74,    76,    77,    78,    79,    85,    44,     0,    52,    53,
       0,    48,    43,    40,    46,     0,     0,     0,    62,    33,
      56,     0,    90,    93,    51,    91,    43,    32,    45,     0,
       0,    59,    49,    47,    43,     0,    57,    55,     0,     0,
      60,    58,     0,    63,    43,    43,    61,    38,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    14,    17,    18,    37,    66,    21,    29,    30,
      31,     9,    10,    11,    25,    60,    61,    62,   121,   163,
     164,    92,    84,   177,   128,   165,   191,   166,   167,   129,
      76,    77,    78,    79,    80,    81
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int16 yypact[] =
{
     -43,    34,    16,   -65,   -65,    -9,   -65,    14,    34,     9,
     -65,     2,    28,    34,    42,    34,    18,   -65,     6,    38,
      34,    37,   -65,   -65,   -65,   -65,   -65,    34,    -5,   -65,
      22,   -65,   -27,   200,    34,   -65,    34,   -65,   -65,    34,
      34,    34,    23,   152,   -65,   -65,    25,   200,    34,   152,
     152,    31,   -65,   -65,    32,    35,   -65,   200,    40,   152,
     -65,   -65,    -2,    71,    51,    30,   -65,   -33,   -65,   -65,
     -65,   152,   152,   152,   152,    67,   206,   -40,     4,   -65,
      94,   -65,    34,   -16,   -65,    56,    88,    70,   152,   152,
     152,     1,   -65,   152,    60,   -65,   200,   237,   152,   -65,
     -65,    34,    64,   -65,   -65,   -65,   200,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     237,   -65,     5,   152,   200,   152,    84,   200,   -65,    10,
      66,    73,   -65,   200,    74,   -65,   -65,   -65,   -65,   -65,
     -65,   108,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,    34,   -65,   -65,
       0,   -65,   200,   -65,   -65,   127,    84,    82,   118,   -65,
     -65,   152,   -65,   -65,   -65,   -65,   200,   -65,   -65,   152,
     152,    86,   -65,   -65,   200,   237,   -65,   -65,    99,   101,
     -65,   -65,    87,   -65,   200,   200,   -65,   -65,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -65,   -65,   -65,   114,   -65,   -65,    44,   -65,   104,   -65,
     105,   -65,   132,   -65,   -65,   130,    52,   -26,    -3,   -14,
     -65,    24,    43,   -65,     3,   -65,   -65,   -65,   -65,    19,
     149,   -46,   -64,    46,   -13,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       5,    95,     3,   123,   179,   113,     1,    12,   103,   104,
     105,   132,    19,     4,    12,    26,     6,   114,   115,    32,
      63,    83,   100,   101,    40,     3,    19,    38,   116,    41,
      23,    91,    64,    65,    63,    67,     4,   124,    32,    69,
      32,     3,     7,   117,    63,     8,    64,    85,    20,    36,
     180,    96,     4,    13,   133,    15,    64,    16,    24,    27,
     156,   157,    75,   118,   119,   170,   171,    28,    86,    87,
     151,   152,   153,   154,    33,    39,    97,    71,    94,    82,
     141,   122,    99,    63,   137,    88,    89,   161,   106,    90,
     102,     3,    42,    63,    93,    64,    44,    45,    83,    98,
      67,   169,     4,   120,   125,    64,   127,    91,   130,   131,
     126,    63,   134,   168,    63,   135,    53,   138,    54,   140,
      63,   172,    55,    64,    56,   176,    64,    58,   173,   175,
     182,   162,    64,   184,   185,   194,   181,   195,    59,   190,
     196,    35,   158,    68,   160,   139,    70,    22,   136,    63,
     187,    34,   183,   168,   178,     0,   122,   174,   192,     3,
      42,    64,     0,    63,    44,    45,   155,   159,   197,   198,
       4,    63,   193,     0,   186,    64,     0,     0,     0,     0,
       0,    63,    63,    64,    53,     0,    54,    72,     0,     0,
      55,     0,    56,    64,    64,    58,     0,     0,   188,   189,
       0,     0,     0,     0,     0,     0,    59,     3,    42,    73,
      74,    43,    44,    45,    46,    47,     0,     0,     4,     0,
      48,     0,     0,     0,     0,     0,    49,    50,    51,   107,
      52,   108,    53,     0,    54,   109,     0,    33,    55,   110,
      56,     0,    57,    58,     3,    42,     0,   111,     0,    44,
      45,     0,   112,     0,    59,     4,   142,   143,   144,   145,
     146,   147,   148,   149,   150,     0,     0,     0,     0,    53,
       0,    54,     0,     0,     0,    55,     0,    56,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59
};

static const yytype_int16 yycheck[] =
{
       1,     3,     7,    19,     4,    45,    49,     8,    72,    73,
      74,    10,    13,    18,    15,    16,     0,    57,    58,    20,
      33,    47,    55,    56,    51,     7,    27,    28,    24,    56,
      12,    57,    33,    34,    47,    36,    18,    53,    39,    40,
      41,     7,    51,    39,    57,    31,    47,    48,     6,    54,
      50,    53,    18,    44,    53,    53,    57,    29,    40,    53,
      55,    56,    43,    59,    60,    55,    56,    29,    49,    50,
     116,   117,   118,   119,    37,    53,     5,    54,    59,    54,
     106,    82,    52,    96,    97,    54,    54,     3,    21,    54,
      71,     7,     8,   106,    54,    96,    12,    13,   124,    48,
     101,   127,    18,     9,    48,   106,    36,   133,    89,    90,
      22,   124,    93,   126,   127,    55,    32,    98,    34,    55,
     133,    55,    38,   124,    40,    17,   127,    43,    55,    55,
       3,    47,   133,    51,    16,    36,   162,    36,    54,    53,
      53,    27,   123,    39,   125,   101,    41,    15,    96,   162,
     176,    21,   166,   166,   157,    -1,   157,   133,   184,     7,
       8,   162,    -1,   176,    12,    13,   120,   124,   194,   195,
      18,   184,   185,    -1,   171,   176,    -1,    -1,    -1,    -1,
      -1,   194,   195,   184,    32,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,   194,   195,    43,    -1,    -1,   179,   180,
      -1,    -1,    -1,    -1,    -1,    -1,    54,     7,     8,    57,
      58,    11,    12,    13,    14,    15,    -1,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,    23,
      30,    25,    32,    -1,    34,    29,    -1,    37,    38,    33,
      40,    -1,    42,    43,     7,     8,    -1,    41,    -1,    12,
      13,    -1,    46,    -1,    54,    18,   107,   108,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    32,
      -1,    34,    -1,    -1,    -1,    38,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    62,     7,    18,    96,     0,    51,    31,    72,
      73,    74,    96,    44,    63,    53,    29,    64,    65,    96,
       6,    68,    73,    12,    40,    75,    96,    53,    29,    69,
      70,    71,    96,    37,    76,    64,    54,    66,    96,    53,
      51,    56,     8,    11,    12,    13,    14,    15,    20,    26,
      27,    28,    30,    32,    34,    38,    40,    42,    43,    54,
      76,    77,    78,    95,    96,    96,    67,    96,    69,    96,
      71,    54,    35,    57,    58,    90,    91,    92,    93,    94,
      95,    96,    54,    78,    83,    96,    90,    90,    54,    54,
      54,    78,    82,    54,    90,     3,    53,     5,    48,    52,
      55,    56,    90,    93,    93,    93,    21,    23,    25,    29,
      33,    41,    46,    45,    57,    58,    24,    39,    59,    60,
       9,    79,    96,    19,    53,    48,    22,    36,    85,    90,
      90,    90,    10,    53,    90,    55,    77,    95,    90,    67,
      55,    78,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    94,    55,    56,    90,    83,
      90,     3,    47,    80,    81,    86,    88,    89,    95,    78,
      55,    56,    55,    55,    82,    55,    17,    84,    79,     4,
      50,    78,     3,    80,    51,    16,    85,    78,    90,    90,
      53,    87,    78,    95,    36,    36,    53,    78,    78
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
#line 106 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (9)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (9)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (9)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (9)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (9)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (9)].dlist)));

		while (DCount(&(yyvsp[(4) - (9)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(4) - (9)].dlist)));

		while (DCount(&(yyvsp[(5) - (9)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(5) - (9)].dlist)));

		while (DCount(&(yyvsp[(6) - (9)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(6) - (9)].dlist)));

		while (DCount(&(yyvsp[(7) - (9)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(7) - (9)].dlist)));

		while (DCount(&(yyvsp[(8) - (9)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(8) - (9)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"program",
		                                TREETAG_LINE,(yyvsp[(1) - (9)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (9)].info).column,
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
#line 160 "code.y"
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
#line 196 "code.y"
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
#line 218 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 6:
#line 227 "code.y"
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
#line 244 "code.y"
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
#line 283 "code.y"
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
#line 324 "code.y"
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
#line 349 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 11:
#line 361 "code.y"
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
#line 378 "code.y"
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
#line 414 "code.y"
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
#line 436 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 15:
#line 445 "code.y"
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
#line 462 "code.y"
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
#line 487 "code.y"
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
#line 502 "code.y"
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
#line 519 "code.y"
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
#line 555 "code.y"
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
#line 577 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 22:
#line 586 "code.y"
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
#line 603 "code.y"
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
#line 644 "code.y"
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
#line 677 "code.y"
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
#line 710 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 27:
#line 724 "code.y"
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

  case 28:
#line 762 "code.y"
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

  case 29:
#line 785 "code.y"
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

  case 30:
#line 802 "code.y"
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

  case 31:
#line 841 "code.y"
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

  case 32:
#line 877 "code.y"
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

  case 33:
#line 930 "code.y"
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

  case 34:
#line 980 "code.y"
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

  case 35:
#line 1016 "code.y"
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

  case 36:
#line 1052 "code.y"
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

  case 37:
#line 1085 "code.y"
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

  case 38:
#line 1124 "code.y"
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

  case 39:
#line 1202 "code.y"
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

  case 40:
#line 1280 "code.y"
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

  case 41:
#line 1330 "code.y"
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

  case 42:
#line 1366 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 43:
#line 1378 "code.y"
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

  case 44:
#line 1400 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 45:
#line 1412 "code.y"
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

  case 46:
#line 1429 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 47:
#line 1441 "code.y"
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

  case 48:
#line 1458 "code.y"
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

  case 49:
#line 1478 "code.y"
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

  case 50:
#line 1503 "code.y"
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

  case 51:
#line 1526 "code.y"
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

  case 52:
#line 1543 "code.y"
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

  case 53:
#line 1569 "code.y"
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

  case 54:
#line 1586 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 55:
#line 1595 "code.y"
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

  case 56:
#line 1620 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 57:
#line 1632 "code.y"
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

  case 58:
#line 1649 "code.y"
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

  case 59:
#line 1690 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 60:
#line 1699 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 61:
#line 1710 "code.y"
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

  case 62:
#line 1738 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 63:
#line 1750 "code.y"
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

  case 64:
#line 1791 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 65:
#line 1803 "code.y"
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

  case 66:
#line 1842 "code.y"
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

  case 67:
#line 1881 "code.y"
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

  case 68:
#line 1920 "code.y"
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

  case 69:
#line 1959 "code.y"
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

  case 70:
#line 1998 "code.y"
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

  case 71:
#line 2039 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 72:
#line 2051 "code.y"
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

  case 73:
#line 2090 "code.y"
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

  case 74:
#line 2116 "code.y"
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

  case 75:
#line 2144 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 76:
#line 2156 "code.y"
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

  case 77:
#line 2195 "code.y"
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

  case 78:
#line 2234 "code.y"
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

  case 79:
#line 2260 "code.y"
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

  case 80:
#line 2288 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 81:
#line 2300 "code.y"
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

  case 82:
#line 2336 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 83:
#line 2348 "code.y"
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

  case 84:
#line 2373 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 85:
#line 2385 "code.y"
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

  case 86:
#line 2426 "code.y"
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

  case 87:
#line 2459 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 88:
#line 2471 "code.y"
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

  case 89:
#line 2504 "code.y"
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

  case 90:
#line 2537 "code.y"
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

  case 91:
#line 2573 "code.y"
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

  case 92:
#line 2609 "code.y"
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

  case 93:
#line 2645 "code.y"
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

  case 94:
#line 2681 "code.y"
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

  case 95:
#line 2714 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 96:
#line 2728 "code.y"
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

  case 97:
#line 2761 "code.y"
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


/* Line 1267 of yacc.c.  */
#line 4530 "y.tab.c"
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



