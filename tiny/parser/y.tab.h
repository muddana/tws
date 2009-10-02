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
     EQSWAP = 260,
     VAR = 261,
     IDENTIFIER = 262,
     POW = 263,
     POOL = 264,
     IF = 265,
     READ = 266,
     REPEAT = 267,
     ELSE = 268,
     UNTIL = 269,
     THEN = 270,
     NE = 271,
     MOD = 272,
     GT = 273,
     EQ = 274,
     WHILE = 275,
     OUTPUT = 276,
     EXIT = 277,
     Eof = 278,
     GTE = 279,
     NOT = 280,
     DO = 281,
     BEGINX = 282,
     BOOLEAN = 283,
     INTEGER_NUM = 284,
     TRUE = 285,
     AND = 286,
     INTEGER = 287,
     LTE = 288,
     LOOP = 289,
     OR = 290,
     LT = 291,
     ASSIGNMENT = 292,
     PROGRAM = 293
   };
#endif
/* Tokens.  */
#define END 258
#define FALSE 259
#define EQSWAP 260
#define VAR 261
#define IDENTIFIER 262
#define POW 263
#define POOL 264
#define IF 265
#define READ 266
#define REPEAT 267
#define ELSE 268
#define UNTIL 269
#define THEN 270
#define NE 271
#define MOD 272
#define GT 273
#define EQ 274
#define WHILE 275
#define OUTPUT 276
#define EXIT 277
#define Eof 278
#define GTE 279
#define NOT 280
#define DO 281
#define BEGINX 282
#define BOOLEAN 283
#define INTEGER_NUM 284
#define TRUE 285
#define AND 286
#define INTEGER 287
#define LTE 288
#define LOOP 289
#define OR 290
#define LT 291
#define ASSIGNMENT 292
#define PROGRAM 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "code.y"
{
   TOKEN_INFO info;
   DLIST dlist;
}
/* Line 1489 of yacc.c.  */
#line 130 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

