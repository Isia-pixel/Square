/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     keyword_if = 258,
     keyword_else = 259,
     keyword_break = 260,
     keyword_return = 261,
     keyword_null = 262,
     keyword_true = 263,
     keyword_false = 264,
     keyword_import = 265,
     keyword_goto = 266,
     keyword_block = 267,
     keyword_func = 268,
     keyword_obj = 269,
     keyword_loop = 270,
     keyword_when = 271,
     keyword_is = 272,
     keyword_not = 273,
     keyword_lambda = 274,
     keyword_method = 275,
     keyword_self = 276,
     op_add = 277,
     op_sub = 278,
     op_mul = 279,
     op_div = 280,
     op_mod = 281,
     op_eq = 282,
     op_neq = 283,
     op_lt = 284,
     op_le = 285,
     op_gt = 286,
     op_ge = 287,
     op_and = 288,
     op_or = 289,
     op_bar = 290,
     op_amper = 291,
     op_next = 292,
     op_assign = 293,
     op_lp = 294,
     op_rp = 295,
     op_flp = 296,
     op_frp = 297,
     op_comma = 298,
     op_colon = 299,
     ENDFILE = 300,
     ERROR = 301,
     lit_number = 302,
     lit_string = 303,
     lit_true = 304,
     lit_false = 305,
     lit_null = 306,
     identifier = 307,
     op_LOWEST = 308,
     op_HIGHEST = 309
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 545 "parse.y"

  node* nd;
  squ_string id;


/* Line 2058 of yacc.c  */
#line 117 "parse.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (parser_state* p);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
