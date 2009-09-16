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
     Eof = 273,
     GTE = 274,
     NOT = 275,
     DO = 276,
     BEGINX = 277,
     BOOLEAN = 278,
     INTEGER_NUM = 279,
     TRUE = 280,
     AND = 281,
     INTEGER = 282,
     LTE = 283,
     OR = 284,
     LT = 285,
     ASSIGNMENT = 286,
     PROGRAM = 287
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
#define Eof 273
#define GTE 274
#define NOT 275
#define DO 276
#define BEGINX 277
#define BOOLEAN 278
#define INTEGER_NUM 279
#define TRUE 280
#define AND 281
#define INTEGER 282
#define LTE 283
#define OR 284
#define LT 285
#define ASSIGNMENT 286
#define PROGRAM 287




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "code.y"
{
   TOKEN_INFO info;
   DLIST dlist;
}
/* Line 1489 of yacc.c.  */
#line 118 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

