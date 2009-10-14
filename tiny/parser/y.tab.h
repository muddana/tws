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
     INTEGER_NUM = 289,
     TRUE = 290,
     AND = 291,
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
#define INTEGER_NUM 289
#define TRUE 290
#define AND 291
#define INTEGER 292
#define LTE 293
#define LOOP 294
#define OR 295
#define LT 296
#define OTHERWISE 297
#define ASSIGNMENT 298
#define PROGRAM 299




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "code.y"
{
   TOKEN_INFO info;
   DLIST dlist;
}
/* Line 1489 of yacc.c.  */
#line 142 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

