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
     FALSE = 259,
     TO = 260,
     EQSWAP = 261,
     VAR = 262,
     IDENTIFIER = 263,
     POW = 264,
     POOL = 265,
     IF = 266,
     READ = 267,
     REPEAT = 268,
     RANGE = 269,
     ELSE = 270,
     UNTIL = 271,
     FOR = 272,
     THEN = 273,
     OF = 274,
     NE = 275,
     MOD = 276,
     GT = 277,
     CASE = 278,
     EQ = 279,
     WHILE = 280,
     OUTPUT = 281,
     EXIT = 282,
     Eof = 283,
     GTE = 284,
     NOT = 285,
     DO = 286,
     BEGINX = 287,
     BOOLEAN = 288,
     TRUE = 289,
     AND = 290,
     INTEGER_NUM = 291,
     INTEGER = 292,
     LTE = 293,
     LOOP = 294,
     OR = 295,
     LT = 296,
     OTHERWISE = 297,
     ASSIGNMENT = 298,
     PROGRAM = 299
   };
#endif
/* Tokens.  */
#define END 258
#define FALSE 259
#define TO 260
#define EQSWAP 261
#define VAR 262
#define IDENTIFIER 263
#define POW 264
#define POOL 265
#define IF 266
#define READ 267
#define REPEAT 268
#define RANGE 269
#define ELSE 270
#define UNTIL 271
#define FOR 272
#define THEN 273
#define OF 274
#define NE 275
#define MOD 276
#define GT 277
#define CASE 278
#define EQ 279
#define WHILE 280
#define OUTPUT 281
#define EXIT 282
#define Eof 283
#define GTE 284
#define NOT 285
#define DO 286
#define BEGINX 287
#define BOOLEAN 288
#define TRUE 289
#define AND 290
#define INTEGER_NUM 291
#define INTEGER 292
#define LTE 293
#define LOOP 294
#define OR 295
#define LT 296
#define OTHERWISE 297
#define ASSIGNMENT 298
#define PROGRAM 299




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
#line 205 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 218 "y.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   176

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNRULES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,    50,    53,    51,    48,    52,    46,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    47,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    11,    14,    15,    16,    20,    22,    26,
      30,    32,    34,    37,    40,    44,    48,    52,    58,    63,
      66,    69,    71,    75,    84,    89,    91,    92,    94,    97,
      99,   103,   105,   108,   111,   115,   119,   123,   124,   127,
     130,   134,   139,   141,   145,   147,   151,   155,   159,   163,
     167,   171,   173,   177,   181,   185,   187,   191,   195,   199,
     203,   205,   208,   211,   214,   216,   220,   222,   224,   226,
     228,   230,   232,   236
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    44,    80,    45,    57,    62,    80,    46,
      -1,     7,    58,    -1,    -1,    -1,    59,    47,    58,    -1,
      60,    -1,    80,    45,    61,    -1,    80,    48,    60,    -1,
      37,    -1,    33,    -1,    32,    63,    -1,    64,     3,    -1,
      64,    47,    63,    -1,    80,    43,    74,    -1,    26,    49,
      71,    -1,    11,    74,    18,    64,    70,    -1,    25,    74,
      31,    64,    -1,    13,    69,    -1,    39,    68,    -1,    27,
      -1,    80,     6,    80,    -1,    17,    80,    43,    74,     5,
      74,    31,    64,    -1,    23,    74,    19,    65,    -1,    62,
      -1,    -1,    66,    -1,    72,    65,    -1,     3,    -1,    42,
      64,    67,    -1,     3,    -1,    47,     3,    -1,    64,    10,
      -1,    64,    47,    68,    -1,    64,    16,    74,    -1,    64,
      47,    69,    -1,    -1,    15,    64,    -1,    74,    50,    -1,
      74,    48,    71,    -1,    73,    45,    64,    47,    -1,    36,
      -1,    79,    14,    79,    -1,    75,    -1,    75,    22,    75,
      -1,    75,    41,    75,    -1,    75,    29,    75,    -1,    75,
      20,    75,    -1,    75,    24,    75,    -1,    75,    38,    75,
      -1,    76,    -1,    76,    40,    75,    -1,    76,    51,    75,
      -1,    76,    52,    75,    -1,    77,    -1,    77,    21,    76,
      -1,    77,    35,    76,    -1,    77,    53,    76,    -1,    77,
      54,    76,    -1,    78,    -1,    30,    77,    -1,    51,    77,
      -1,    52,    77,    -1,    79,    -1,    79,     9,    78,    -1,
      12,    -1,    28,    -1,    80,    -1,    34,    -1,     4,    -1,
      36,    -1,    49,    74,    50,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,   137,   174,   196,   204,   221,   246,   261,
     278,   311,   346,   384,   407,   424,   463,   499,   552,   602,
     638,   674,   707,   746,   824,   874,   887,   908,   920,   937,
     957,   985,  1005,  1027,  1050,  1067,  1093,  1111,  1119,  1144,
    1156,  1173,  1201,  1234,  1275,  1287,  1326,  1365,  1404,  1443,
    1482,  1523,  1535,  1574,  1600,  1628,  1640,  1679,  1718,  1744,
    1772,  1784,  1820,  1832,  1857,  1869,  1910,  1943,  1976,  1988,
    2021,  2054,  2087,  2101
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "FALSE", "TO", "EQSWAP", "VAR",
  "IDENTIFIER", "POW", "POOL", "IF", "READ", "REPEAT", "RANGE", "ELSE",
  "UNTIL", "FOR", "THEN", "OF", "NE", "MOD", "GT", "CASE", "EQ", "WHILE",
  "OUTPUT", "EXIT", "Eof", "GTE", "NOT", "DO", "BEGINX", "BOOLEAN", "TRUE",
  "AND", "INTEGER_NUM", "INTEGER", "LTE", "LOOP", "OR", "LT", "OTHERWISE",
  "ASSIGNMENT", "PROGRAM", "':'", "'.'", "';'", "','", "'('", "')'", "'+'",
  "'-'", "'*'", "'/'", "$accept", "Tiny", "Dclns", "Dclns_1", "Dcln",
  "Dcln_1", "Type", "Body", "Body_1", "Statement", "Statement_1_1_1_1_1",
  "Statement_1_1_1_1_1_1", "Statement_1_1_1_1_1_1_1", "Statement_1_1_1_1",
  "Statement_1_1_1", "Statement_1_1", "Statement_1", "CaseClause",
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
     295,   296,   297,   298,   299,    58,    46,    59,    44,    40,
      41,    43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    59,    60,    60,
      61,    61,    62,    63,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      71,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    75,    75,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     0,     0,     3,     1,     3,     3,
       1,     1,     2,     2,     3,     3,     3,     5,     4,     2,
       2,     1,     3,     8,     4,     1,     0,     1,     2,     1,
       3,     1,     2,     2,     3,     3,     3,     0,     2,     2,
       3,     4,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     2,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    73,     0,     1,     4,     5,     0,     3,
       0,     7,     0,    26,     0,     5,     0,     0,     0,    26,
       0,     0,     0,     0,    21,    26,    25,    12,     0,     0,
       0,     6,    11,    10,     8,     9,    70,    66,    67,     0,
      69,    71,     0,     0,     0,     0,    44,    51,    55,    60,
      64,    68,     0,    19,     0,     0,     0,     0,     0,    20,
      13,    26,     0,     0,     2,    61,     0,    62,    63,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,    26,    16,
       0,    33,    26,    14,    22,    15,    72,    37,    48,    45,
      49,    47,    50,    46,    52,    53,    54,    56,    57,    58,
      59,    65,    35,    36,     0,    29,    42,    26,    24,    27,
       0,     0,     0,    18,     0,    39,    34,    26,    17,     0,
       0,    28,    26,     0,    40,    38,     0,    31,     0,    30,
       0,    43,    26,    32,    41,    23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    11,    34,    26,    27,    28,
     118,   119,   139,    59,    53,   128,    89,   120,   121,    90,
      46,    47,    48,    49,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -86
static const yytype_int8 yypact[] =
{
     -40,     2,    23,   -86,   -17,   -86,    27,     2,     7,   -86,
      -2,   -86,    18,   117,     2,     2,   -22,     2,    13,   117,
       2,    13,    13,    10,   -86,   117,   -86,   -86,     5,    -3,
      29,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,    13,
     -86,   -86,    13,    13,    13,    38,   126,   -20,     1,   -86,
      48,   -86,    11,   -86,    26,    57,    49,    13,    -5,   -86,
     -86,   117,     2,    13,   -86,   -86,    33,   -86,   -86,   117,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
      13,    13,    13,    74,    13,   117,    13,    69,   117,   -86,
      -4,   -86,   117,   -86,   -86,   -86,   -86,    64,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,    80,   -86,    75,   117,   -86,   -86,
      69,    43,    76,   -86,    13,   -86,   -86,   117,   -86,    13,
       6,   -86,   117,    74,   -86,   -86,    62,   -86,    92,   -86,
      51,   -86,   117,   -86,   -86,   -86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -86,   -86,   -86,    81,   -86,    83,   -86,    93,    45,   -18,
     -16,   -86,   -86,    15,    28,   -86,   -12,   -86,   -86,     8,
      98,    40,    -6,    32,   -85,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -72
static const yytype_int16 yytable[] =
{
       4,    52,   122,    62,     1,    91,    12,    58,    60,   137,
       3,    32,    29,    30,    12,    33,    12,    36,    29,    54,
      76,     3,    79,     5,    29,    37,    45,    84,     6,    55,
      56,    77,    78,    65,     7,   122,    80,    67,    68,    13,
      63,    38,    92,    39,   124,    15,   125,    40,   141,    41,
      66,    97,    61,   138,    81,    82,    69,    83,    85,    57,
      29,    94,    42,    16,    43,    44,    17,    52,    29,    86,
     123,    95,   115,    36,    58,    64,    87,     3,    36,   127,
      88,    37,     3,    96,    29,   129,    37,    29,   132,   -71,
     133,    29,   112,   142,   114,   143,    31,    38,   144,   130,
      35,    14,    38,    40,   131,   116,    93,   126,    40,   135,
      41,   117,   134,   113,   140,   111,    29,     0,    42,   107,
     108,   109,   110,    42,   145,     3,    29,     0,    18,     0,
      19,    29,     0,     0,    20,     0,     0,   136,     0,     0,
      21,    29,    22,    23,    24,     0,    70,     0,    71,    13,
      72,     0,     0,     0,     0,    73,    25,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,    75,    98,    99,
     100,   101,   102,   103,   104,   105,   106
};

static const yytype_int16 yycheck[] =
{
       1,    19,    87,     6,    44,    10,     7,    25,     3,     3,
       8,    33,    13,    14,    15,    37,    17,     4,    19,    20,
      40,     8,    21,     0,    25,    12,    18,    16,    45,    21,
      22,    51,    52,    39,     7,   120,    35,    43,    44,    32,
      43,    28,    47,    30,    48,    47,    50,    34,   133,    36,
      42,    69,    47,    47,    53,    54,    18,     9,    47,    49,
      61,    62,    49,    45,    51,    52,    48,    85,    69,    43,
      88,    63,     3,     4,    92,    46,    19,     8,     4,    15,
      31,    12,     8,    50,    85,     5,    12,    88,    45,    14,
      14,    92,    84,    31,    86,     3,    15,    28,    47,   117,
      17,     8,    28,    34,   120,    36,    61,    92,    34,   127,
      36,    42,   124,    85,   132,    83,   117,    -1,    49,    79,
      80,    81,    82,    49,   142,     8,   127,    -1,    11,    -1,
      13,   132,    -1,    -1,    17,    -1,    -1,   129,    -1,    -1,
      23,   142,    25,    26,    27,    -1,    20,    -1,    22,    32,
      24,    -1,    -1,    -1,    -1,    29,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    41,    70,    71,
      72,    73,    74,    75,    76,    77,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    56,     8,    80,     0,    45,     7,    57,    58,
      59,    60,    80,    32,    62,    47,    45,    48,    11,    13,
      17,    23,    25,    26,    27,    39,    62,    63,    64,    80,
      80,    58,    33,    37,    61,    60,     4,    12,    28,    30,
      34,    36,    49,    51,    52,    74,    75,    76,    77,    78,
      79,    80,    64,    69,    80,    74,    74,    49,    64,    68,
       3,    47,     6,    43,    46,    77,    74,    77,    77,    18,
      20,    22,    24,    29,    38,    41,    40,    51,    52,    21,
      35,    53,    54,     9,    16,    47,    43,    19,    31,    71,
      74,    10,    47,    63,    80,    74,    50,    64,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    76,
      76,    78,    74,    69,    74,     3,    36,    42,    65,    66,
      72,    73,    79,    64,    48,    50,    68,    15,    70,     5,
      64,    65,    45,    14,    71,    64,    74,     3,    47,    67,
      64,    79,    31,     3,    47,    64
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
#line 90 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if ((yyvsp[(1) - (7)].info).makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,(yyvsp[(1) - (7)].info).string,
		                                TREETAG_LINE,(yyvsp[(1) - (7)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (7)].info).column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&(yyvsp[(2) - (7)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (7)].dlist)));

		while (DCount(&(yyvsp[(4) - (7)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(4) - (7)].dlist)));

		while (DCount(&(yyvsp[(5) - (7)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(5) - (7)].dlist)));

		while (DCount(&(yyvsp[(6) - (7)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(6) - (7)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"program",
		                                TREETAG_LINE,(yyvsp[(1) - (7)].info).line,
		                                TREETAG_COLUMN,(yyvsp[(1) - (7)].info).column,
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
#line 138 "code.y"
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

  case 4:
#line 174 "code.y"
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

  case 5:
#line 196 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 6:
#line 205 "code.y"
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
#line 222 "code.y"
    {
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dcln",
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
#line 247 "code.y"
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

  case 9:
#line 262 "code.y"
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

  case 10:
#line 279 "code.y"
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
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"integer",
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

  case 11:
#line 312 "code.y"
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
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"boolean",
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

  case 12:
#line 347 "code.y"
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

  case 13:
#line 385 "code.y"
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

  case 14:
#line 408 "code.y"
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

  case 15:
#line 425 "code.y"
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

  case 16:
#line 464 "code.y"
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

  case 17:
#line 500 "code.y"
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

  case 18:
#line 553 "code.y"
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

  case 19:
#line 603 "code.y"
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

  case 20:
#line 639 "code.y"
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

  case 21:
#line 675 "code.y"
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

  case 22:
#line 708 "code.y"
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

  case 23:
#line 747 "code.y"
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

  case 24:
#line 825 "code.y"
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

  case 25:
#line 875 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 26:
#line 887 "code.y"
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

  case 27:
#line 909 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 28:
#line 921 "code.y"
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

  case 29:
#line 938 "code.y"
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

  case 30:
#line 958 "code.y"
    {
		DLIST r;

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

		(yyval.dlist) = r;

             }
    break;

  case 31:
#line 986 "code.y"
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

  case 32:
#line 1006 "code.y"
    {
		DLIST r;

		InitDList(&r);

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

  case 33:
#line 1028 "code.y"
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

  case 34:
#line 1051 "code.y"
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

  case 35:
#line 1068 "code.y"
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

  case 36:
#line 1094 "code.y"
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

  case 37:
#line 1111 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 38:
#line 1120 "code.y"
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

  case 39:
#line 1145 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 40:
#line 1157 "code.y"
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
#line 1174 "code.y"
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

  case 42:
#line 1202 "code.y"
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

  case 43:
#line 1235 "code.y"
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

  case 44:
#line 1276 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 45:
#line 1288 "code.y"
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

  case 46:
#line 1327 "code.y"
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

  case 47:
#line 1366 "code.y"
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

  case 48:
#line 1405 "code.y"
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

  case 49:
#line 1444 "code.y"
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

  case 50:
#line 1483 "code.y"
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

  case 51:
#line 1524 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 52:
#line 1536 "code.y"
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

  case 53:
#line 1575 "code.y"
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

  case 54:
#line 1601 "code.y"
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

  case 55:
#line 1629 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 56:
#line 1641 "code.y"
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

  case 57:
#line 1680 "code.y"
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

  case 58:
#line 1719 "code.y"
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

  case 59:
#line 1745 "code.y"
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

  case 60:
#line 1773 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 61:
#line 1785 "code.y"
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

  case 62:
#line 1821 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 63:
#line 1833 "code.y"
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

  case 64:
#line 1858 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 65:
#line 1870 "code.y"
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

  case 66:
#line 1911 "code.y"
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
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"read",
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

  case 67:
#line 1944 "code.y"
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

  case 68:
#line 1977 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 69:
#line 1989 "code.y"
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
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<true>",
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

  case 70:
#line 2022 "code.y"
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
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<false>",
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

  case 71:
#line 2055 "code.y"
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

  case 72:
#line 2088 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 73:
#line 2102 "code.y"
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
#line 3760 "y.tab.c"
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



