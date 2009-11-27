/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "code.y"
{
   TOKEN_INFO info;
   DLIST dlist;
}
/* Line 1489 of yacc.c.  */
#line 154 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

