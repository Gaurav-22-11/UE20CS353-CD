/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INT = 258,                   /* T_INT  */
    T_CHAR = 259,                  /* T_CHAR  */
    T_DOUBLE = 260,                /* T_DOUBLE  */
    T_INC = 261,                   /* T_INC  */
    T_DEC = 262,                   /* T_DEC  */
    T_OROR = 263,                  /* T_OROR  */
    T_ANDAND = 264,                /* T_ANDAND  */
    T_EQCOMP = 265,                /* T_EQCOMP  */
    T_NOTEQUAL = 266,              /* T_NOTEQUAL  */
    T_GREATEREQ = 267,             /* T_GREATEREQ  */
    T_LESSEREQ = 268,              /* T_LESSEREQ  */
    T_LEFTSHIFT = 269,             /* T_LEFTSHIFT  */
    T_RIGHTSHIFT = 270,            /* T_RIGHTSHIFT  */
    T_NUM = 271,                   /* T_NUM  */
    T_ID = 272,                    /* T_ID  */
    T_PRINTLN = 273,               /* T_PRINTLN  */
    T_STRING = 274,                /* T_STRING  */
    T_FLOAT = 275,                 /* T_FLOAT  */
    T_BOOLEAN = 276,               /* T_BOOLEAN  */
    T_IF = 277,                    /* T_IF  */
    T_ELSE = 278,                  /* T_ELSE  */
    T_WHILE = 279,                 /* T_WHILE  */
    T_STRLITERAL = 280,            /* T_STRLITERAL  */
    T_DO = 281,                    /* T_DO  */
    T_INCLUDE = 282,               /* T_INCLUDE  */
    T_HEADER = 283,                /* T_HEADER  */
    T_MAIN = 284,                  /* T_MAIN  */
    T_FOR = 285                    /* T_FOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_INT 258
#define T_CHAR 259
#define T_DOUBLE 260
#define T_INC 261
#define T_DEC 262
#define T_OROR 263
#define T_ANDAND 264
#define T_EQCOMP 265
#define T_NOTEQUAL 266
#define T_GREATEREQ 267
#define T_LESSEREQ 268
#define T_LEFTSHIFT 269
#define T_RIGHTSHIFT 270
#define T_NUM 271
#define T_ID 272
#define T_PRINTLN 273
#define T_STRING 274
#define T_FLOAT 275
#define T_BOOLEAN 276
#define T_IF 277
#define T_ELSE 278
#define T_WHILE 279
#define T_STRLITERAL 280
#define T_DO 281
#define T_INCLUDE 282
#define T_HEADER 283
#define T_MAIN 284
#define T_FOR 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
