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
     ELSE = 269,
     UNTIL = 270,
     FOR = 271,
     THEN = 272,
     NE = 273,
     MOD = 274,
     GT = 275,
     EQ = 276,
     WHILE = 277,
     OUTPUT = 278,
     EXIT = 279,
     Eof = 280,
     GTE = 281,
     NOT = 282,
     DO = 283,
     BEGINX = 284,
     BOOLEAN = 285,
     INTEGER_NUM = 286,
     TRUE = 287,
     AND = 288,
     INTEGER = 289,
     LTE = 290,
     LOOP = 291,
     OR = 292,
     LT = 293,
     ASSIGNMENT = 294,
     PROGRAM = 295
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
#define ELSE 269
#define UNTIL 270
#define FOR 271
#define THEN 272
#define NE 273
#define MOD 274
#define GT 275
#define EQ 276
#define WHILE 277
#define OUTPUT 278
#define EXIT 279
#define Eof 280
#define GTE 281
#define NOT 282
#define DO 283
#define BEGINX 284
#define BOOLEAN 285
#define INTEGER_NUM 286
#define TRUE 287
#define AND 288
#define INTEGER 289
#define LTE 290
#define LOOP 291
#define OR 292
#define LT 293
#define ASSIGNMENT 294
#define PROGRAM 295




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
#line 197 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 210 "y.tab.c"

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
#define YYLAST   130

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  124

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,    49,    47,    44,    48,    42,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,    43,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    11,    14,    15,    16,    20,    22,    26,
      30,    32,    34,    37,    40,    44,    48,    52,    58,    63,
      66,    69,    71,    75,    84,    86,    87,    90,    94,    98,
     102,   103,   106,   109,   113,   115,   119,   123,   127,   131,
     135,   139,   141,   145,   149,   153,   155,   159,   163,   167,
     171,   173,   176,   179,   182,   184,   188,   190,   192,   194,
     196,   198,   200,   204
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    40,    71,    41,    53,    58,    71,    42,
      -1,     7,    54,    -1,    -1,    -1,    55,    43,    54,    -1,
      56,    -1,    71,    41,    57,    -1,    71,    44,    56,    -1,
      34,    -1,    30,    -1,    29,    59,    -1,    60,     3,    -1,
      60,    43,    59,    -1,    71,    39,    65,    -1,    23,    45,
      64,    -1,    11,    65,    17,    60,    63,    -1,    22,    65,
      28,    60,    -1,    13,    62,    -1,    36,    61,    -1,    24,
      -1,    71,     6,    71,    -1,    16,    71,    39,    65,     5,
      65,    28,    60,    -1,    58,    -1,    -1,    60,    10,    -1,
      60,    43,    61,    -1,    60,    15,    65,    -1,    60,    43,
      62,    -1,    -1,    14,    60,    -1,    65,    46,    -1,    65,
      44,    64,    -1,    66,    -1,    66,    20,    66,    -1,    66,
      38,    66,    -1,    66,    26,    66,    -1,    66,    18,    66,
      -1,    66,    21,    66,    -1,    66,    35,    66,    -1,    67,
      -1,    67,    37,    66,    -1,    67,    47,    66,    -1,    67,
      48,    66,    -1,    68,    -1,    68,    19,    67,    -1,    68,
      33,    67,    -1,    68,    49,    67,    -1,    68,    50,    67,
      -1,    69,    -1,    27,    68,    -1,    47,    68,    -1,    48,
      68,    -1,    70,    -1,    70,     9,    69,    -1,    12,    -1,
      25,    -1,    71,    -1,    32,    -1,     4,    -1,    31,    -1,
      45,    65,    46,    -1,     8,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,   128,   165,   187,   195,   212,   237,   252,
     269,   302,   337,   375,   398,   415,   454,   490,   543,   593,
     629,   665,   698,   737,   815,   828,   849,   872,   889,   915,
     933,   941,   966,   978,   995,  1007,  1046,  1085,  1124,  1163,
    1202,  1243,  1255,  1294,  1320,  1348,  1360,  1399,  1438,  1464,
    1492,  1504,  1540,  1552,  1577,  1589,  1630,  1663,  1696,  1708,
    1741,  1774,  1807,  1821
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "FALSE", "TO", "EQSWAP", "VAR",
  "IDENTIFIER", "POW", "POOL", "IF", "READ", "REPEAT", "ELSE", "UNTIL",
  "FOR", "THEN", "NE", "MOD", "GT", "EQ", "WHILE", "OUTPUT", "EXIT", "Eof",
  "GTE", "NOT", "DO", "BEGINX", "BOOLEAN", "INTEGER_NUM", "TRUE", "AND",
  "INTEGER", "LTE", "LOOP", "OR", "LT", "ASSIGNMENT", "PROGRAM", "':'",
  "'.'", "';'", "','", "'('", "')'", "'+'", "'-'", "'*'", "'/'", "$accept",
  "Tiny", "Dclns", "Dclns_1", "Dcln", "Dcln_1", "Type", "Body", "Body_1",
  "Statement", "Statement_1_1_1_1", "Statement_1_1_1", "Statement_1_1",
  "Statement_1", "Expression", "Term", "ModAndMulDiv", "Unary", "Misc",
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
     295,    58,    46,    59,    44,    40,    41,    43,    45,    42,
      47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    55,    56,    56,
      57,    57,    58,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    67,    67,    67,    67,    67,
      68,    68,    68,    68,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     0,     0,     3,     1,     3,     3,
       1,     1,     2,     2,     3,     3,     3,     5,     4,     2,
       2,     1,     3,     8,     1,     0,     2,     3,     3,     3,
       0,     2,     2,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     2,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    63,     0,     1,     4,     5,     0,     3,
       0,     7,     0,    25,     0,     5,     0,     0,     0,    25,
       0,     0,     0,    21,    25,    24,    12,     0,     0,     0,
       6,    11,    10,     8,     9,    60,    56,    57,     0,    61,
      59,     0,     0,     0,     0,    34,    41,    45,    50,    54,
      58,     0,    19,     0,     0,     0,     0,    20,    13,    25,
       0,     0,     2,    51,     0,    52,    53,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,    25,    16,     0,    26,    25,
      14,    22,    15,    62,    30,    38,    35,    39,    37,    40,
      36,    42,    43,    44,    46,    47,    48,    49,    55,    28,
      29,     0,    18,     0,    32,    27,    25,    17,     0,    33,
      31,     0,    25,    23
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     8,     9,    10,    11,    33,    25,    26,    27,
      57,    52,   117,    86,    87,    45,    46,    47,    48,    49,
      50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -30
static const yytype_int8 yypact[] =
{
     -29,    18,    32,   -30,     8,   -30,    33,    18,    23,   -30,
      10,   -30,     2,    67,    18,    18,   -13,    18,    -3,    67,
      18,    -3,    12,   -30,    67,   -30,   -30,     7,    -4,    21,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,    -3,   -30,
     -30,    -3,    -3,    -3,    47,    81,   -17,     6,   -30,    56,
     -30,    19,   -30,    40,    43,    -3,     5,   -30,   -30,    67,
      18,    -3,   -30,   -30,    35,   -30,   -30,    67,    -3,    -3,
      -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,    -3,
      -3,    29,    -3,    67,    -3,    67,   -30,    -8,   -30,    67,
     -30,   -30,   -30,   -30,    71,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,    82,   -30,    -3,   -30,   -30,    67,   -30,    -3,   -30,
     -30,    58,    67,   -30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,   -30,    83,   -30,    80,   -30,    97,    49,   -16,
      20,    27,   -30,    -2,   -14,    54,    15,    34,    31,   -30,
      -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       4,    35,    60,    51,    44,     3,    12,    54,    56,    36,
      58,     1,    28,    29,    12,    88,    12,    31,    28,    53,
      74,    32,    37,    28,    38,    77,     3,    64,    39,    40,
      75,    76,     5,    35,    82,    61,   113,     3,   114,    78,
       7,    36,    41,    16,    42,    43,    17,    92,    89,     6,
      59,    94,    13,    15,    37,    79,    80,    55,    28,    91,
      39,    40,    83,    62,    67,    81,    28,    51,   109,   112,
     111,    85,    63,    56,    41,     3,    65,    66,    18,    84,
      19,    93,    28,    20,    28,   116,   122,   118,    28,    21,
      22,    23,   104,   105,   106,   107,    13,    34,    30,    68,
     120,    69,    70,    24,   121,    14,   123,    71,    90,   115,
     110,   119,   108,     0,     0,    28,    72,     0,     0,    73,
       0,    28,    95,    96,    97,    98,    99,   100,   101,   102,
     103
};

static const yytype_int8 yycheck[] =
{
       1,     4,     6,    19,    18,     8,     7,    21,    24,    12,
       3,    40,    13,    14,    15,    10,    17,    30,    19,    20,
      37,    34,    25,    24,    27,    19,     8,    41,    31,    32,
      47,    48,     0,     4,    15,    39,    44,     8,    46,    33,
       7,    12,    45,    41,    47,    48,    44,    61,    43,    41,
      43,    67,    29,    43,    25,    49,    50,    45,    59,    60,
      31,    32,    43,    42,    17,     9,    67,    83,    82,    85,
      84,    28,    38,    89,    45,     8,    42,    43,    11,    39,
      13,    46,    83,    16,    85,    14,    28,     5,    89,    22,
      23,    24,    77,    78,    79,    80,    29,    17,    15,    18,
     116,    20,    21,    36,   118,     8,   122,    26,    59,    89,
      83,   113,    81,    -1,    -1,   116,    35,    -1,    -1,    38,
      -1,   122,    68,    69,    70,    71,    72,    73,    74,    75,
      76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    52,     8,    71,     0,    41,     7,    53,    54,
      55,    56,    71,    29,    58,    43,    41,    44,    11,    13,
      16,    22,    23,    24,    36,    58,    59,    60,    71,    71,
      54,    30,    34,    57,    56,     4,    12,    25,    27,    31,
      32,    45,    47,    48,    65,    66,    67,    68,    69,    70,
      71,    60,    62,    71,    65,    45,    60,    61,     3,    43,
       6,    39,    42,    68,    65,    68,    68,    17,    18,    20,
      21,    26,    35,    38,    37,    47,    48,    19,    33,    49,
      50,     9,    15,    43,    39,    28,    64,    65,    10,    43,
      59,    71,    65,    46,    60,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    67,    69,    65,
      62,    65,    60,    44,    46,    61,    14,    63,     5,    64,
      60,    65,    28,    60
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
#line 81 "code.y"
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
#line 129 "code.y"
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
#line 165 "code.y"
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
#line 187 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 6:
#line 196 "code.y"
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
#line 213 "code.y"
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
#line 238 "code.y"
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
#line 253 "code.y"
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
#line 270 "code.y"
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
#line 303 "code.y"
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
#line 338 "code.y"
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
#line 376 "code.y"
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
#line 399 "code.y"
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
#line 416 "code.y"
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
#line 455 "code.y"
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
#line 491 "code.y"
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
#line 544 "code.y"
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
#line 594 "code.y"
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
#line 630 "code.y"
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
#line 666 "code.y"
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
#line 699 "code.y"
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
#line 738 "code.y"
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
#line 816 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 25:
#line 828 "code.y"
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

  case 26:
#line 850 "code.y"
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

  case 27:
#line 873 "code.y"
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

  case 28:
#line 890 "code.y"
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

  case 29:
#line 916 "code.y"
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
#line 933 "code.y"
    {
		DLIST r;

		InitDList(&r);

		(yyval.dlist) = r;

             }
    break;

  case 31:
#line 942 "code.y"
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

  case 32:
#line 967 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 33:
#line 979 "code.y"
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

  case 34:
#line 996 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 35:
#line 1008 "code.y"
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

  case 36:
#line 1047 "code.y"
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

  case 37:
#line 1086 "code.y"
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

  case 38:
#line 1125 "code.y"
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

  case 39:
#line 1164 "code.y"
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

  case 40:
#line 1203 "code.y"
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

  case 41:
#line 1244 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 42:
#line 1256 "code.y"
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

  case 43:
#line 1295 "code.y"
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

  case 44:
#line 1321 "code.y"
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

  case 45:
#line 1349 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 46:
#line 1361 "code.y"
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

  case 47:
#line 1400 "code.y"
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

  case 48:
#line 1439 "code.y"
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

  case 49:
#line 1465 "code.y"
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

  case 50:
#line 1493 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 51:
#line 1505 "code.y"
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

  case 52:
#line 1541 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (2)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (2)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 53:
#line 1553 "code.y"
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

  case 54:
#line 1578 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 55:
#line 1590 "code.y"
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

  case 56:
#line 1631 "code.y"
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

  case 57:
#line 1664 "code.y"
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

  case 58:
#line 1697 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(1) - (1)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(1) - (1)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 59:
#line 1709 "code.y"
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

  case 60:
#line 1742 "code.y"
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

  case 61:
#line 1775 "code.y"
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

  case 62:
#line 1808 "code.y"
    {
		DLIST r;

		InitDList(&r);

		while (DCount(&(yyvsp[(2) - (3)].dlist)) > 0)
		    DAddTail(&r,DRemHead(&(yyvsp[(2) - (3)].dlist)));

		(yyval.dlist) = r;

             }
    break;

  case 63:
#line 1822 "code.y"
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
#line 3438 "y.tab.c"
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



