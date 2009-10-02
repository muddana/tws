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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "code.y"
{
   TOKEN_INFO info;
   DLIST dlist;
}
/* Line 1489 of yacc.c.  */
#line 134 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

