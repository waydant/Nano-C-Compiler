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
# define YYDEBUG 1
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
    CHAR = 258,                    /* CHAR  */
    ELSE = 259,                    /* ELSE  */
    FOR = 260,                     /* FOR  */
    IF = 261,                      /* IF  */
    INT = 262,                     /* INT  */
    RETURN = 263,                  /* RETURN  */
    VOID = 264,                    /* VOID  */
    LSQBRACKET = 265,              /* LSQBRACKET  */
    RSQBRACKET = 266,              /* RSQBRACKET  */
    LBRACE = 267,                  /* LBRACE  */
    RBRACE = 268,                  /* RBRACE  */
    LPARAN = 269,                  /* LPARAN  */
    RPARAN = 270,                  /* RPARAN  */
    ARROW = 271,                   /* ARROW  */
    BIT_AND = 272,                 /* BIT_AND  */
    PLUS = 273,                    /* PLUS  */
    SUB = 274,                     /* SUB  */
    MULT = 275,                    /* MULT  */
    DIV = 276,                     /* DIV  */
    MOD = 277,                     /* MOD  */
    LOGICAL_NOT = 278,             /* LOGICAL_NOT  */
    LOGICAL_AND = 279,             /* LOGICAL_AND  */
    LOGICAL_OR = 280,              /* LOGICAL_OR  */
    LESS = 281,                    /* LESS  */
    GREATER = 282,                 /* GREATER  */
    LESSEQ = 283,                  /* LESSEQ  */
    GREATEREQ = 284,               /* GREATEREQ  */
    EQUALS = 285,                  /* EQUALS  */
    NOTEQ = 286,                   /* NOTEQ  */
    QUES = 287,                    /* QUES  */
    COLON = 288,                   /* COLON  */
    SEMICOLON = 289,               /* SEMICOLON  */
    ASSIGN = 290,                  /* ASSIGN  */
    COMMA = 291,                   /* COMMA  */
    ID = 292,                      /* ID  */
    INT_CONST = 293,               /* INT_CONST  */
    CHAR_CONST = 294,              /* CHAR_CONST  */
    STRING_CONST = 295,            /* STRING_CONST  */
    THEN = 296                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CHAR 258
#define ELSE 259
#define FOR 260
#define IF 261
#define INT 262
#define RETURN 263
#define VOID 264
#define LSQBRACKET 265
#define RSQBRACKET 266
#define LBRACE 267
#define RBRACE 268
#define LPARAN 269
#define RPARAN 270
#define ARROW 271
#define BIT_AND 272
#define PLUS 273
#define SUB 274
#define MULT 275
#define DIV 276
#define MOD 277
#define LOGICAL_NOT 278
#define LOGICAL_AND 279
#define LOGICAL_OR 280
#define LESS 281
#define GREATER 282
#define LESSEQ 283
#define GREATEREQ 284
#define EQUALS 285
#define NOTEQ 286
#define QUES 287
#define COLON 288
#define SEMICOLON 289
#define ASSIGN 290
#define COMMA 291
#define ID 292
#define INT_CONST 293
#define CHAR_CONST 294
#define STRING_CONST 295
#define THEN 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "A5_31.y"

    int intVal;
    char *charVal;
    char *stringVal;
    char *unaryOperator;
    int instructionNumber;
    int parameterCount;
    Expression *expression;
    Statement *statement;
    Array *array;
    SymbolType *symbolType;
    Symbol *symbol;
    SymbolType *parameterlist;

#line 164 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
