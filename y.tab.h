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
     FOR = 258,
     IN = 259,
     WHILE = 260,
     IF = 261,
     NOT = 262,
     TWIDDLE = 263,
     BANG = 264,
     SUBSHELL = 265,
     SWITCH = 266,
     FN = 267,
     WORD = 268,
     REDIR = 269,
     DUP = 270,
     PIPE = 271,
     SUB = 272,
     ANDAND = 273,
     OROR = 274,
     SIMPLE = 275,
     ARGLIST = 276,
     WORDS = 277,
     BRACE = 278,
     PAREN = 279,
     PCMD = 280,
     PIPEFD = 281,
     COUNT = 282
   };
#endif
/* Tokens.  */
#define FOR 258
#define IN 259
#define WHILE 260
#define IF 261
#define NOT 262
#define TWIDDLE 263
#define BANG 264
#define SUBSHELL 265
#define SWITCH 266
#define FN 267
#define WORD 268
#define REDIR 269
#define DUP 270
#define PIPE 271
#define SUB 272
#define ANDAND 273
#define OROR 274
#define SIMPLE 275
#define ARGLIST 276
#define WORDS 277
#define BRACE 278
#define PAREN 279
#define PCMD 280
#define PIPEFD 281
#define COUNT 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "syn.y"
{
	struct tree *tree;
}
/* Line 1529 of yacc.c.  */
#line 107 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

