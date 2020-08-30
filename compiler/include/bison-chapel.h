/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
# define YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "chapel.ypp"

  #include <string>
  extern int         captureTokens;
  extern std::string captureString;
#line 47 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);
  void stringBufferInit();

  #endif
#line 67 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_1_
  #define _BISON_CHAPEL_DEFINES_1_

  #include "symbol.h"

  #include "ImportStmt.h"

  #include <cstdio>
  #include <utility>
  #include <vector>

  class ArgSymbol;
  class BlockStmt;
  class CallExpr;
  class DefExpr;
  class EnumType;
  class Expr;
  class FnSymbol;
  class NamedExpr;
  class Type;

  enum   ProcIter {
    ProcIter_PROC,
    ProcIter_ITER
  };

  struct PotentialRename {
    enum{SINGLE, DOUBLE} tag;

    union {
      Expr*  elem;
      std::pair<Expr*, Expr*>* renamed;
    };
  };

  struct WhereAndLifetime {
    Expr* where;
    Expr* lifetime;
  };
  static inline
  WhereAndLifetime makeWhereAndLifetime(Expr* w, Expr* lt) {
    WhereAndLifetime ret;
    ret.where = w;
    ret.lifetime = lt;
    return ret;
  }

  // The lexer only uses pch.
  // The remaining types are for parser productions
  union  YYSTYPE {
    const char*               pch;

    Vec<const char*>*         vpch;
    RetTag                    retTag;
    AggregateTag              aggrTag;
    bool                      b;
    IntentTag                 pt;
    Expr*                     pexpr;
    DefExpr*                  pdefexpr;
    CallExpr*                 pcallexpr;
    BlockStmt*                pblockstmt;
    Type*                     ptype;
    EnumType*                 penumtype;
    std::vector<DefExpr*>*    pvecOfDefs;
    FnSymbol*                 pfnsymbol;
    ModuleSymbol*             pmodsymbol;
    ImportStmt*               pimportstmt;
    ProcIter                  procIter;
    FlagSet*                  flagSet;
    ShadowVarSymbol*          pShadowVar;
    ShadowVarPrefix           pShadowVarPref;
    std::vector<PotentialRename*>* ponlylist;
    std::set<Flag>*           pflagset;
    WhereAndLifetime          lifetimeAndWhere;
  };

  #endif
#line 151 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_2_
  #define _BISON_CHAPEL_DEFINES_2_

  struct YYLTYPE {
    int         first_line;
    int         first_column;
    int         last_line;
    int         last_column;
    const char* comment;
    const char* prevModule;
  };

  #define YYLTYPE_IS_DECLARED 1
  #define YYLTYPE_IS_TRIVIAL  1

  #endif
#line 174 "chapel.ypp"

  #ifndef _BISON_CHAPEL_DEFINES_3_
  #define _BISON_CHAPEL_DEFINES_3_

  class ParserContext {
  public:
    ParserContext()
    {
      scanner       = 0;
      latestComment = 0;
      generatedStmt = 0;
    }

    ParserContext(yyscan_t scannerIn)
    {
      scanner       = scannerIn;
      latestComment = 0;
      generatedStmt = 0;
    }

    yyscan_t    scanner;
    const char* latestComment;
    BaseAST*    generatedStmt;
  };

  #endif

#line 194 "../include/bison-chapel.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TIDENT = 258,                  /* TIDENT  */
    TQUERIEDIDENT = 259,           /* TQUERIEDIDENT  */
    INTLITERAL = 260,              /* INTLITERAL  */
    REALLITERAL = 261,             /* REALLITERAL  */
    IMAGLITERAL = 262,             /* IMAGLITERAL  */
    STRINGLITERAL = 263,           /* STRINGLITERAL  */
    BYTESLITERAL = 264,            /* BYTESLITERAL  */
    CSTRINGLITERAL = 265,          /* CSTRINGLITERAL  */
    EXTERNCODE = 266,              /* EXTERNCODE  */
    TALIGN = 267,                  /* TALIGN  */
    TAS = 268,                     /* TAS  */
    TATOMIC = 269,                 /* TATOMIC  */
    TBEGIN = 270,                  /* TBEGIN  */
    TBREAK = 271,                  /* TBREAK  */
    TBOOL = 272,                   /* TBOOL  */
    TBORROWED = 273,               /* TBORROWED  */
    TBY = 274,                     /* TBY  */
    TBYTES = 275,                  /* TBYTES  */
    TCATCH = 276,                  /* TCATCH  */
    TCLASS = 277,                  /* TCLASS  */
    TCOBEGIN = 278,                /* TCOBEGIN  */
    TCOFORALL = 279,               /* TCOFORALL  */
    TCOMPLEX = 280,                /* TCOMPLEX  */
    TCONFIG = 281,                 /* TCONFIG  */
    TCONST = 282,                  /* TCONST  */
    TCONTINUE = 283,               /* TCONTINUE  */
    TDEFER = 284,                  /* TDEFER  */
    TDELETE = 285,                 /* TDELETE  */
    TDMAPPED = 286,                /* TDMAPPED  */
    TDO = 287,                     /* TDO  */
    TDOMAIN = 288,                 /* TDOMAIN  */
    TELSE = 289,                   /* TELSE  */
    TENUM = 290,                   /* TENUM  */
    TEXCEPT = 291,                 /* TEXCEPT  */
    TEXPORT = 292,                 /* TEXPORT  */
    TEXTERN = 293,                 /* TEXTERN  */
    TFALSE = 294,                  /* TFALSE  */
    TFOR = 295,                    /* TFOR  */
    TFORALL = 296,                 /* TFORALL  */
    TFORWARDING = 297,             /* TFORWARDING  */
    TGPU = 298,                    /* TGPU  */
    TIF = 299,                     /* TIF  */
    TIMAG = 300,                   /* TIMAG  */
    TIMPORT = 301,                 /* TIMPORT  */
    TIN = 302,                     /* TIN  */
    TINCLUDE = 303,                /* TINCLUDE  */
    TINDEX = 304,                  /* TINDEX  */
    TINLINE = 305,                 /* TINLINE  */
    TINOUT = 306,                  /* TINOUT  */
    TINT = 307,                    /* TINT  */
    TITER = 308,                   /* TITER  */
    TINITEQUALS = 309,             /* TINITEQUALS  */
    TLABEL = 310,                  /* TLABEL  */
    TLAMBDA = 311,                 /* TLAMBDA  */
    TLET = 312,                    /* TLET  */
    TLIFETIME = 313,               /* TLIFETIME  */
    TLOCAL = 314,                  /* TLOCAL  */
    TLOCALE = 315,                 /* TLOCALE  */
    TMINUSMINUS = 316,             /* TMINUSMINUS  */
    TMODULE = 317,                 /* TMODULE  */
    TNEW = 318,                    /* TNEW  */
    TNIL = 319,                    /* TNIL  */
    TNOINIT = 320,                 /* TNOINIT  */
    TNONE = 321,                   /* TNONE  */
    TNOTHING = 322,                /* TNOTHING  */
    TON = 323,                     /* TON  */
    TONLY = 324,                   /* TONLY  */
    TOTHERWISE = 325,              /* TOTHERWISE  */
    TOUT = 326,                    /* TOUT  */
    TOVERRIDE = 327,               /* TOVERRIDE  */
    TOWNED = 328,                  /* TOWNED  */
    TPARAM = 329,                  /* TPARAM  */
    TPLUSPLUS = 330,               /* TPLUSPLUS  */
    TPRAGMA = 331,                 /* TPRAGMA  */
    TPRIMITIVE = 332,              /* TPRIMITIVE  */
    TPRIVATE = 333,                /* TPRIVATE  */
    TPROC = 334,                   /* TPROC  */
    TPROTOTYPE = 335,              /* TPROTOTYPE  */
    TPUBLIC = 336,                 /* TPUBLIC  */
    TREAL = 337,                   /* TREAL  */
    TRECORD = 338,                 /* TRECORD  */
    TREDUCE = 339,                 /* TREDUCE  */
    TREF = 340,                    /* TREF  */
    TREQUIRE = 341,                /* TREQUIRE  */
    TRETURN = 342,                 /* TRETURN  */
    TSCAN = 343,                   /* TSCAN  */
    TSELECT = 344,                 /* TSELECT  */
    TSERIAL = 345,                 /* TSERIAL  */
    TSHARED = 346,                 /* TSHARED  */
    TSINGLE = 347,                 /* TSINGLE  */
    TSPARSE = 348,                 /* TSPARSE  */
    TSTRING = 349,                 /* TSTRING  */
    TSUBDOMAIN = 350,              /* TSUBDOMAIN  */
    TSYNC = 351,                   /* TSYNC  */
    TTHEN = 352,                   /* TTHEN  */
    TTHIS = 353,                   /* TTHIS  */
    TTHROW = 354,                  /* TTHROW  */
    TTHROWS = 355,                 /* TTHROWS  */
    TTRUE = 356,                   /* TTRUE  */
    TTRY = 357,                    /* TTRY  */
    TTRYBANG = 358,                /* TTRYBANG  */
    TTYPE = 359,                   /* TTYPE  */
    TUINT = 360,                   /* TUINT  */
    TUNDERSCORE = 361,             /* TUNDERSCORE  */
    TUNION = 362,                  /* TUNION  */
    TUNMANAGED = 363,              /* TUNMANAGED  */
    TUSE = 364,                    /* TUSE  */
    TVAR = 365,                    /* TVAR  */
    TVOID = 366,                   /* TVOID  */
    TWHEN = 367,                   /* TWHEN  */
    TWHERE = 368,                  /* TWHERE  */
    TWHILE = 369,                  /* TWHILE  */
    TWITH = 370,                   /* TWITH  */
    TYIELD = 371,                  /* TYIELD  */
    TZIP = 372,                    /* TZIP  */
    TALIAS = 373,                  /* TALIAS  */
    TAND = 374,                    /* TAND  */
    TASSIGN = 375,                 /* TASSIGN  */
    TASSIGNBAND = 376,             /* TASSIGNBAND  */
    TASSIGNBOR = 377,              /* TASSIGNBOR  */
    TASSIGNBXOR = 378,             /* TASSIGNBXOR  */
    TASSIGNDIVIDE = 379,           /* TASSIGNDIVIDE  */
    TASSIGNEXP = 380,              /* TASSIGNEXP  */
    TASSIGNLAND = 381,             /* TASSIGNLAND  */
    TASSIGNLOR = 382,              /* TASSIGNLOR  */
    TASSIGNMINUS = 383,            /* TASSIGNMINUS  */
    TASSIGNMOD = 384,              /* TASSIGNMOD  */
    TASSIGNMULTIPLY = 385,         /* TASSIGNMULTIPLY  */
    TASSIGNPLUS = 386,             /* TASSIGNPLUS  */
    TASSIGNREDUCE = 387,           /* TASSIGNREDUCE  */
    TASSIGNSL = 388,               /* TASSIGNSL  */
    TASSIGNSR = 389,               /* TASSIGNSR  */
    TBANG = 390,                   /* TBANG  */
    TBAND = 391,                   /* TBAND  */
    TBNOT = 392,                   /* TBNOT  */
    TBOR = 393,                    /* TBOR  */
    TBXOR = 394,                   /* TBXOR  */
    TCOLON = 395,                  /* TCOLON  */
    TCOMMA = 396,                  /* TCOMMA  */
    TDIVIDE = 397,                 /* TDIVIDE  */
    TDOT = 398,                    /* TDOT  */
    TDOTDOT = 399,                 /* TDOTDOT  */
    TDOTDOTDOT = 400,              /* TDOTDOTDOT  */
    TEQUAL = 401,                  /* TEQUAL  */
    TEXP = 402,                    /* TEXP  */
    TGREATER = 403,                /* TGREATER  */
    TGREATEREQUAL = 404,           /* TGREATEREQUAL  */
    THASH = 405,                   /* THASH  */
    TIO = 406,                     /* TIO  */
    TLESS = 407,                   /* TLESS  */
    TLESSEQUAL = 408,              /* TLESSEQUAL  */
    TMINUS = 409,                  /* TMINUS  */
    TMOD = 410,                    /* TMOD  */
    TNOTEQUAL = 411,               /* TNOTEQUAL  */
    TOR = 412,                     /* TOR  */
    TPLUS = 413,                   /* TPLUS  */
    TQUESTION = 414,               /* TQUESTION  */
    TSEMI = 415,                   /* TSEMI  */
    TSHIFTLEFT = 416,              /* TSHIFTLEFT  */
    TSHIFTRIGHT = 417,             /* TSHIFTRIGHT  */
    TSTAR = 418,                   /* TSTAR  */
    TSWAP = 419,                   /* TSWAP  */
    TLCBR = 420,                   /* TLCBR  */
    TRCBR = 421,                   /* TRCBR  */
    TLP = 422,                     /* TLP  */
    TRP = 423,                     /* TRP  */
    TLSBR = 424,                   /* TLSBR  */
    TRSBR = 425,                   /* TRSBR  */
    TNOELSE = 426,                 /* TNOELSE  */
    TDOTDOTOPENHIGH = 427,         /* TDOTDOTOPENHIGH  */
    TUPLUS = 428,                  /* TUPLUS  */
    TUMINUS = 429,                 /* TUMINUS  */
    TLNOT = 430                    /* TLNOT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



#ifndef YYPUSH_MORE_DEFINED
# define YYPUSH_MORE_DEFINED
enum { YYPUSH_MORE = 4 };
#endif

typedef struct yypstate yypstate;


int yypush_parse (yypstate *ps,
                  int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, ParserContext* context);

yypstate *yypstate_new (void);
void yypstate_delete (yypstate *ps);

/* "%code provides" blocks.  */
#line 205 "chapel.ypp"

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);

#line 423 "../include/bison-chapel.h"

#endif /* !YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED  */
