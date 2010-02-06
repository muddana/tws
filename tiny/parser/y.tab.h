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
     FUNCTION = 267,
     CHARACTER_ALPHA = 268,
     STR_ALPHA = 269,
     READ = 270,
     REPEAT = 271,
     RANGE = 272,
     ELSE = 273,
     RETURN = 274,
     CAPIDENTIFIER = 275,
     UNTIL = 276,
     FOR = 277,
     THEN = 278,
     OF = 279,
     NE = 280,
     MOD = 281,
     GT = 282,
     CASE = 283,
     WHILE = 284,
     OUTPUT = 285,
     EQ = 286,
     EXIT = 287,
     PROCEDURE = 288,
     CONST = 289,
     Eof = 290,
     GTE = 291,
     PRED = 292,
     NOT = 293,
     DO = 294,
     BEGINX = 295,
     ORD = 296,
     AND = 297,
     INTEGER_NUM = 298,
     LTE = 299,
     LOOP = 300,
     SUCC = 301,
     TYPE = 302,
     OR = 303,
     LT = 304,
     OTHERWISE = 305,
     ASSIGNMENT = 306,
     PROGRAM = 307,
     DOWNTO = 308
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
#define FUNCTION 267
#define CHARACTER_ALPHA 268
#define STR_ALPHA 269
#define READ 270
#define REPEAT 271
#define RANGE 272
#define ELSE 273
#define RETURN 274
#define CAPIDENTIFIER 275
#define UNTIL 276
#define FOR 277
#define THEN 278
#define OF 279
#define NE 280
#define MOD 281
#define GT 282
#define CASE 283
#define WHILE 284
#define OUTPUT 285
#define EQ 286
#define EXIT 287
#define PROCEDURE 288
#define CONST 289
#define Eof 290
#define GTE 291
#define PRED 292
#define NOT 293
#define DO 294
#define BEGINX 295
#define ORD 296
#define AND 297
#define INTEGER_NUM 298
#define LTE 299
#define LOOP 300
#define SUCC 301
#define TYPE 302
#define OR 303
#define LT 304
#define OTHERWISE 305
#define ASSIGNMENT 306
#define PROGRAM 307
#define DOWNTO 308




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "code.y"
{
   TOKEN_INFO info;
   DLIST dlist;
}
/* Line 1489 of yacc.c.  */
#line 160 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

