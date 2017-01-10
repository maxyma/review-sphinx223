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
     TOK_IDENT = 258,
     TOK_ATIDENT = 259,
     TOK_CONST_INT = 260,
     TOK_CONST_FLOAT = 261,
     TOK_CONST_MVA = 262,
     TOK_QUOTED_STRING = 263,
     TOK_USERVAR = 264,
     TOK_SYSVAR = 265,
     TOK_CONST_STRINGS = 266,
     TOK_BAD_NUMERIC = 267,
     TOK_SUBKEY = 268,
     TOK_DOT_NUMBER = 269,
     TOK_ADD = 270,
     TOK_AGENT = 271,
     TOK_ALTER = 272,
     TOK_AS = 273,
     TOK_ASC = 274,
     TOK_ATTACH = 275,
     TOK_AVG = 276,
     TOK_BEGIN = 277,
     TOK_BETWEEN = 278,
     TOK_BIGINT = 279,
     TOK_BOOL = 280,
     TOK_BY = 281,
     TOK_CALL = 282,
     TOK_CHARACTER = 283,
     TOK_COLLATION = 284,
     TOK_COLUMN = 285,
     TOK_COMMIT = 286,
     TOK_COMMITTED = 287,
     TOK_COUNT = 288,
     TOK_CREATE = 289,
     TOK_DATABASES = 290,
     TOK_DELETE = 291,
     TOK_DESC = 292,
     TOK_DESCRIBE = 293,
     TOK_DISTINCT = 294,
     TOK_DIV = 295,
     TOK_DOUBLE = 296,
     TOK_DROP = 297,
     TOK_FACET = 298,
     TOK_FALSE = 299,
     TOK_FLOAT = 300,
     TOK_FLUSH = 301,
     TOK_FOR = 302,
     TOK_FROM = 303,
     TOK_FUNCTION = 304,
     TOK_GLOBAL = 305,
     TOK_GROUP = 306,
     TOK_GROUPBY = 307,
     TOK_GROUP_CONCAT = 308,
     TOK_HAVING = 309,
     TOK_ID = 310,
     TOK_IN = 311,
     TOK_INDEX = 312,
     TOK_INSERT = 313,
     TOK_INT = 314,
     TOK_INTEGER = 315,
     TOK_INTO = 316,
     TOK_IS = 317,
     TOK_ISOLATION = 318,
     TOK_JSON = 319,
     TOK_LEVEL = 320,
     TOK_LIKE = 321,
     TOK_LIMIT = 322,
     TOK_MATCH = 323,
     TOK_MAX = 324,
     TOK_META = 325,
     TOK_MIN = 326,
     TOK_MOD = 327,
     TOK_MULTI = 328,
     TOK_MULTI64 = 329,
     TOK_NAMES = 330,
     TOK_NULL = 331,
     TOK_OPTION = 332,
     TOK_ORDER = 333,
     TOK_OPTIMIZE = 334,
     TOK_PLAN = 335,
     TOK_PLUGIN = 336,
     TOK_PLUGINS = 337,
     TOK_PROFILE = 338,
     TOK_RAND = 339,
     TOK_RAMCHUNK = 340,
     TOK_READ = 341,
     TOK_REPEATABLE = 342,
     TOK_REPLACE = 343,
     TOK_REMAP = 344,
     TOK_RETURNS = 345,
     TOK_ROLLBACK = 346,
     TOK_RTINDEX = 347,
     TOK_SELECT = 348,
     TOK_SERIALIZABLE = 349,
     TOK_SET = 350,
     TOK_SESSION = 351,
     TOK_SHOW = 352,
     TOK_SONAME = 353,
     TOK_START = 354,
     TOK_STATUS = 355,
     TOK_STRING = 356,
     TOK_SUM = 357,
     TOK_TABLE = 358,
     TOK_TABLES = 359,
     TOK_THREADS = 360,
     TOK_TO = 361,
     TOK_TRANSACTION = 362,
     TOK_TRUE = 363,
     TOK_TRUNCATE = 364,
     TOK_TYPE = 365,
     TOK_UNCOMMITTED = 366,
     TOK_UPDATE = 367,
     TOK_VALUES = 368,
     TOK_VARIABLES = 369,
     TOK_WARNINGS = 370,
     TOK_WEIGHT = 371,
     TOK_WHERE = 372,
     TOK_WITHIN = 373,
     TOK_OR = 374,
     TOK_AND = 375,
     TOK_NE = 376,
     TOK_GTE = 377,
     TOK_LTE = 378,
     TOK_NOT = 379,
     TOK_NEG = 380
   };
#endif
/* Tokens.  */
#define TOK_IDENT 258
#define TOK_ATIDENT 259
#define TOK_CONST_INT 260
#define TOK_CONST_FLOAT 261
#define TOK_CONST_MVA 262
#define TOK_QUOTED_STRING 263
#define TOK_USERVAR 264
#define TOK_SYSVAR 265
#define TOK_CONST_STRINGS 266
#define TOK_BAD_NUMERIC 267
#define TOK_SUBKEY 268
#define TOK_DOT_NUMBER 269
#define TOK_ADD 270
#define TOK_AGENT 271
#define TOK_ALTER 272
#define TOK_AS 273
#define TOK_ASC 274
#define TOK_ATTACH 275
#define TOK_AVG 276
#define TOK_BEGIN 277
#define TOK_BETWEEN 278
#define TOK_BIGINT 279
#define TOK_BOOL 280
#define TOK_BY 281
#define TOK_CALL 282
#define TOK_CHARACTER 283
#define TOK_COLLATION 284
#define TOK_COLUMN 285
#define TOK_COMMIT 286
#define TOK_COMMITTED 287
#define TOK_COUNT 288
#define TOK_CREATE 289
#define TOK_DATABASES 290
#define TOK_DELETE 291
#define TOK_DESC 292
#define TOK_DESCRIBE 293
#define TOK_DISTINCT 294
#define TOK_DIV 295
#define TOK_DOUBLE 296
#define TOK_DROP 297
#define TOK_FACET 298
#define TOK_FALSE 299
#define TOK_FLOAT 300
#define TOK_FLUSH 301
#define TOK_FOR 302
#define TOK_FROM 303
#define TOK_FUNCTION 304
#define TOK_GLOBAL 305
#define TOK_GROUP 306
#define TOK_GROUPBY 307
#define TOK_GROUP_CONCAT 308
#define TOK_HAVING 309
#define TOK_ID 310
#define TOK_IN 311
#define TOK_INDEX 312
#define TOK_INSERT 313
#define TOK_INT 314
#define TOK_INTEGER 315
#define TOK_INTO 316
#define TOK_IS 317
#define TOK_ISOLATION 318
#define TOK_JSON 319
#define TOK_LEVEL 320
#define TOK_LIKE 321
#define TOK_LIMIT 322
#define TOK_MATCH 323
#define TOK_MAX 324
#define TOK_META 325
#define TOK_MIN 326
#define TOK_MOD 327
#define TOK_MULTI 328
#define TOK_MULTI64 329
#define TOK_NAMES 330
#define TOK_NULL 331
#define TOK_OPTION 332
#define TOK_ORDER 333
#define TOK_OPTIMIZE 334
#define TOK_PLAN 335
#define TOK_PLUGIN 336
#define TOK_PLUGINS 337
#define TOK_PROFILE 338
#define TOK_RAND 339
#define TOK_RAMCHUNK 340
#define TOK_READ 341
#define TOK_REPEATABLE 342
#define TOK_REPLACE 343
#define TOK_REMAP 344
#define TOK_RETURNS 345
#define TOK_ROLLBACK 346
#define TOK_RTINDEX 347
#define TOK_SELECT 348
#define TOK_SERIALIZABLE 349
#define TOK_SET 350
#define TOK_SESSION 351
#define TOK_SHOW 352
#define TOK_SONAME 353
#define TOK_START 354
#define TOK_STATUS 355
#define TOK_STRING 356
#define TOK_SUM 357
#define TOK_TABLE 358
#define TOK_TABLES 359
#define TOK_THREADS 360
#define TOK_TO 361
#define TOK_TRANSACTION 362
#define TOK_TRUE 363
#define TOK_TRUNCATE 364
#define TOK_TYPE 365
#define TOK_UNCOMMITTED 366
#define TOK_UPDATE 367
#define TOK_VALUES 368
#define TOK_VARIABLES 369
#define TOK_WARNINGS 370
#define TOK_WEIGHT 371
#define TOK_WHERE 372
#define TOK_WITHIN 373
#define TOK_OR 374
#define TOK_AND 375
#define TOK_NE 376
#define TOK_GTE 377
#define TOK_LTE 378
#define TOK_NOT 379
#define TOK_NEG 380




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



