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
     IF = 263,
     READ = 264,
     ELSE = 265,
     THEN = 266,
     NE = 267,
     MOD = 268,
     GT = 269,
     EQ = 270,
     WHILE = 271,
     OUTPUT = 272,
     GTE = 273,
     NOT = 274,
     DO = 275,
     BEGINX = 276,
     BOOLEAN = 277,
     INTEGER_NUM = 278,
     TRUE = 279,
     AND = 280,
     INTEGER = 281,
     LTE = 282,
     OR = 283,
     LT = 284,
     ASSIGNMENT = 285,
     PROGRAM = 286
   };
#endif
/* Tokens.  */
#define END 258
#define FALSE 259
#define VAR 260
#define IDENTIFIER 261
#define POW 262
#define IF 263
#define READ 264
#define ELSE 265
#define THEN 266
#define NE 267
#define MOD 268
#define GT 269
#define EQ 270
#define WHILE 271
#define OUTPUT 272
#define GTE 273
#define NOT 274
#define DO 275
#define BEGINX 276
#define BOOLEAN 277
#define INTEGER_NUM 278
#define TRUE 279
#define AND 280
#define INTEGER 281
#define LTE 282
#define OR 283
#define LT 284
#define ASSIGNMENT 285
#define PROGRAM 286




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "code.y"
{
   TOKEN_INFO info;
   DLIST dlist;
}
/* Line 1489 of yacc.c.  */
#line 116 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

