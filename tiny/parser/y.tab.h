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
     VAR = 260,
     IDENTIFIER = 261,
     POW = 262,
     POOL = 263,
     IF = 264,
     READ = 265,
     REPEAT = 266,
     ELSE = 267,
     UNTIL = 268,
     THEN = 269,
     NE = 270,
     MOD = 271,
     GT = 272,
     EQ = 273,
     WHILE = 274,
     OUTPUT = 275,
     EXIT = 276,
     Eof = 277,
     GTE = 278,
     NOT = 279,
     DO = 280,
     BEGINX = 281,
     BOOLEAN = 282,
     INTEGER_NUM = 283,
     TRUE = 284,
     AND = 285,
     INTEGER = 286,
     LTE = 287,
     LOOP = 288,
     OR = 289,
     LT = 290,
     ASSIGNMENT = 291,
     PROGRAM = 292
   };
#endif
/* Tokens.  */
#define END 258
#define FALSE 259
#define VAR 260
#define IDENTIFIER 261
#define POW 262
#define POOL 263
#define IF 264
#define READ 265
#define REPEAT 266
#define ELSE 267
#define UNTIL 268
#define THEN 269
#define NE 270
#define MOD 271
#define GT 272
#define EQ 273
#define WHILE 274
#define OUTPUT 275
#define EXIT 276
#define Eof 277
#define GTE 278
#define NOT 279
#define DO 280
#define BEGINX 281
#define BOOLEAN 282
#define INTEGER_NUM 283
#define TRUE 284
#define AND 285
#define INTEGER 286
#define LTE 287
#define LOOP 288
#define OR 289
#define LT 290
#define ASSIGNMENT 291
#define PROGRAM 292




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "code.y"
{
   TOKEN_INFO info;
   DLIST dlist;
}
/* Line 1489 of yacc.c.  */
#line 128 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

