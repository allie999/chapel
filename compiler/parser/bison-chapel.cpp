/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bison-chapel.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIDENT = 3,                     /* TIDENT  */
  YYSYMBOL_TQUERIEDIDENT = 4,              /* TQUERIEDIDENT  */
  YYSYMBOL_INTLITERAL = 5,                 /* INTLITERAL  */
  YYSYMBOL_REALLITERAL = 6,                /* REALLITERAL  */
  YYSYMBOL_IMAGLITERAL = 7,                /* IMAGLITERAL  */
  YYSYMBOL_STRINGLITERAL = 8,              /* STRINGLITERAL  */
  YYSYMBOL_BYTESLITERAL = 9,               /* BYTESLITERAL  */
  YYSYMBOL_CSTRINGLITERAL = 10,            /* CSTRINGLITERAL  */
  YYSYMBOL_EXTERNCODE = 11,                /* EXTERNCODE  */
  YYSYMBOL_TALIGN = 12,                    /* TALIGN  */
  YYSYMBOL_TAS = 13,                       /* TAS  */
  YYSYMBOL_TATOMIC = 14,                   /* TATOMIC  */
  YYSYMBOL_TBEGIN = 15,                    /* TBEGIN  */
  YYSYMBOL_TBREAK = 16,                    /* TBREAK  */
  YYSYMBOL_TBOOL = 17,                     /* TBOOL  */
  YYSYMBOL_TBORROWED = 18,                 /* TBORROWED  */
  YYSYMBOL_TBY = 19,                       /* TBY  */
  YYSYMBOL_TBYTES = 20,                    /* TBYTES  */
  YYSYMBOL_TCATCH = 21,                    /* TCATCH  */
  YYSYMBOL_TCLASS = 22,                    /* TCLASS  */
  YYSYMBOL_TCOBEGIN = 23,                  /* TCOBEGIN  */
  YYSYMBOL_TCOFORALL = 24,                 /* TCOFORALL  */
  YYSYMBOL_TCOMPLEX = 25,                  /* TCOMPLEX  */
  YYSYMBOL_TCONFIG = 26,                   /* TCONFIG  */
  YYSYMBOL_TCONST = 27,                    /* TCONST  */
  YYSYMBOL_TCONTINUE = 28,                 /* TCONTINUE  */
  YYSYMBOL_TDEFER = 29,                    /* TDEFER  */
  YYSYMBOL_TDELETE = 30,                   /* TDELETE  */
  YYSYMBOL_TDMAPPED = 31,                  /* TDMAPPED  */
  YYSYMBOL_TDO = 32,                       /* TDO  */
  YYSYMBOL_TDOMAIN = 33,                   /* TDOMAIN  */
  YYSYMBOL_TELSE = 34,                     /* TELSE  */
  YYSYMBOL_TENUM = 35,                     /* TENUM  */
  YYSYMBOL_TEXCEPT = 36,                   /* TEXCEPT  */
  YYSYMBOL_TEXPORT = 37,                   /* TEXPORT  */
  YYSYMBOL_TEXTERN = 38,                   /* TEXTERN  */
  YYSYMBOL_TFALSE = 39,                    /* TFALSE  */
  YYSYMBOL_TFOR = 40,                      /* TFOR  */
  YYSYMBOL_TFORALL = 41,                   /* TFORALL  */
  YYSYMBOL_TFORWARDING = 42,               /* TFORWARDING  */
  YYSYMBOL_TGPU = 43,                      /* TGPU  */
  YYSYMBOL_TIF = 44,                       /* TIF  */
  YYSYMBOL_TIMAG = 45,                     /* TIMAG  */
  YYSYMBOL_TIMPORT = 46,                   /* TIMPORT  */
  YYSYMBOL_TIN = 47,                       /* TIN  */
  YYSYMBOL_TINCLUDE = 48,                  /* TINCLUDE  */
  YYSYMBOL_TINDEX = 49,                    /* TINDEX  */
  YYSYMBOL_TINLINE = 50,                   /* TINLINE  */
  YYSYMBOL_TINOUT = 51,                    /* TINOUT  */
  YYSYMBOL_TINT = 52,                      /* TINT  */
  YYSYMBOL_TITER = 53,                     /* TITER  */
  YYSYMBOL_TINITEQUALS = 54,               /* TINITEQUALS  */
  YYSYMBOL_TLABEL = 55,                    /* TLABEL  */
  YYSYMBOL_TLAMBDA = 56,                   /* TLAMBDA  */
  YYSYMBOL_TLET = 57,                      /* TLET  */
  YYSYMBOL_TLIFETIME = 58,                 /* TLIFETIME  */
  YYSYMBOL_TLOCAL = 59,                    /* TLOCAL  */
  YYSYMBOL_TLOCALE = 60,                   /* TLOCALE  */
  YYSYMBOL_TMINUSMINUS = 61,               /* TMINUSMINUS  */
  YYSYMBOL_TMODULE = 62,                   /* TMODULE  */
  YYSYMBOL_TNEW = 63,                      /* TNEW  */
  YYSYMBOL_TNIL = 64,                      /* TNIL  */
  YYSYMBOL_TNOINIT = 65,                   /* TNOINIT  */
  YYSYMBOL_TNONE = 66,                     /* TNONE  */
  YYSYMBOL_TNOTHING = 67,                  /* TNOTHING  */
  YYSYMBOL_TON = 68,                       /* TON  */
  YYSYMBOL_TONLY = 69,                     /* TONLY  */
  YYSYMBOL_TOTHERWISE = 70,                /* TOTHERWISE  */
  YYSYMBOL_TOUT = 71,                      /* TOUT  */
  YYSYMBOL_TOVERRIDE = 72,                 /* TOVERRIDE  */
  YYSYMBOL_TOWNED = 73,                    /* TOWNED  */
  YYSYMBOL_TPARAM = 74,                    /* TPARAM  */
  YYSYMBOL_TPLUSPLUS = 75,                 /* TPLUSPLUS  */
  YYSYMBOL_TPRAGMA = 76,                   /* TPRAGMA  */
  YYSYMBOL_TPRIMITIVE = 77,                /* TPRIMITIVE  */
  YYSYMBOL_TPRIVATE = 78,                  /* TPRIVATE  */
  YYSYMBOL_TPROC = 79,                     /* TPROC  */
  YYSYMBOL_TPROTOTYPE = 80,                /* TPROTOTYPE  */
  YYSYMBOL_TPUBLIC = 81,                   /* TPUBLIC  */
  YYSYMBOL_TREAL = 82,                     /* TREAL  */
  YYSYMBOL_TRECORD = 83,                   /* TRECORD  */
  YYSYMBOL_TREDUCE = 84,                   /* TREDUCE  */
  YYSYMBOL_TREF = 85,                      /* TREF  */
  YYSYMBOL_TREQUIRE = 86,                  /* TREQUIRE  */
  YYSYMBOL_TRETURN = 87,                   /* TRETURN  */
  YYSYMBOL_TSCAN = 88,                     /* TSCAN  */
  YYSYMBOL_TSELECT = 89,                   /* TSELECT  */
  YYSYMBOL_TSERIAL = 90,                   /* TSERIAL  */
  YYSYMBOL_TSHARED = 91,                   /* TSHARED  */
  YYSYMBOL_TSINGLE = 92,                   /* TSINGLE  */
  YYSYMBOL_TSPARSE = 93,                   /* TSPARSE  */
  YYSYMBOL_TSTRING = 94,                   /* TSTRING  */
  YYSYMBOL_TSUBDOMAIN = 95,                /* TSUBDOMAIN  */
  YYSYMBOL_TSYNC = 96,                     /* TSYNC  */
  YYSYMBOL_TTHEN = 97,                     /* TTHEN  */
  YYSYMBOL_TTHIS = 98,                     /* TTHIS  */
  YYSYMBOL_TTHROW = 99,                    /* TTHROW  */
  YYSYMBOL_TTHROWS = 100,                  /* TTHROWS  */
  YYSYMBOL_TTRUE = 101,                    /* TTRUE  */
  YYSYMBOL_TTRY = 102,                     /* TTRY  */
  YYSYMBOL_TTRYBANG = 103,                 /* TTRYBANG  */
  YYSYMBOL_TTYPE = 104,                    /* TTYPE  */
  YYSYMBOL_TUINT = 105,                    /* TUINT  */
  YYSYMBOL_TUNDERSCORE = 106,              /* TUNDERSCORE  */
  YYSYMBOL_TUNION = 107,                   /* TUNION  */
  YYSYMBOL_TUNMANAGED = 108,               /* TUNMANAGED  */
  YYSYMBOL_TUSE = 109,                     /* TUSE  */
  YYSYMBOL_TVAR = 110,                     /* TVAR  */
  YYSYMBOL_TVOID = 111,                    /* TVOID  */
  YYSYMBOL_TWHEN = 112,                    /* TWHEN  */
  YYSYMBOL_TWHERE = 113,                   /* TWHERE  */
  YYSYMBOL_TWHILE = 114,                   /* TWHILE  */
  YYSYMBOL_TWITH = 115,                    /* TWITH  */
  YYSYMBOL_TYIELD = 116,                   /* TYIELD  */
  YYSYMBOL_TZIP = 117,                     /* TZIP  */
  YYSYMBOL_TALIAS = 118,                   /* TALIAS  */
  YYSYMBOL_TAND = 119,                     /* TAND  */
  YYSYMBOL_TASSIGN = 120,                  /* TASSIGN  */
  YYSYMBOL_TASSIGNBAND = 121,              /* TASSIGNBAND  */
  YYSYMBOL_TASSIGNBOR = 122,               /* TASSIGNBOR  */
  YYSYMBOL_TASSIGNBXOR = 123,              /* TASSIGNBXOR  */
  YYSYMBOL_TASSIGNDIVIDE = 124,            /* TASSIGNDIVIDE  */
  YYSYMBOL_TASSIGNEXP = 125,               /* TASSIGNEXP  */
  YYSYMBOL_TASSIGNLAND = 126,              /* TASSIGNLAND  */
  YYSYMBOL_TASSIGNLOR = 127,               /* TASSIGNLOR  */
  YYSYMBOL_TASSIGNMINUS = 128,             /* TASSIGNMINUS  */
  YYSYMBOL_TASSIGNMOD = 129,               /* TASSIGNMOD  */
  YYSYMBOL_TASSIGNMULTIPLY = 130,          /* TASSIGNMULTIPLY  */
  YYSYMBOL_TASSIGNPLUS = 131,              /* TASSIGNPLUS  */
  YYSYMBOL_TASSIGNREDUCE = 132,            /* TASSIGNREDUCE  */
  YYSYMBOL_TASSIGNSL = 133,                /* TASSIGNSL  */
  YYSYMBOL_TASSIGNSR = 134,                /* TASSIGNSR  */
  YYSYMBOL_TBANG = 135,                    /* TBANG  */
  YYSYMBOL_TBAND = 136,                    /* TBAND  */
  YYSYMBOL_TBNOT = 137,                    /* TBNOT  */
  YYSYMBOL_TBOR = 138,                     /* TBOR  */
  YYSYMBOL_TBXOR = 139,                    /* TBXOR  */
  YYSYMBOL_TCOLON = 140,                   /* TCOLON  */
  YYSYMBOL_TCOMMA = 141,                   /* TCOMMA  */
  YYSYMBOL_TDIVIDE = 142,                  /* TDIVIDE  */
  YYSYMBOL_TDOT = 143,                     /* TDOT  */
  YYSYMBOL_TDOTDOT = 144,                  /* TDOTDOT  */
  YYSYMBOL_TDOTDOTDOT = 145,               /* TDOTDOTDOT  */
  YYSYMBOL_TEQUAL = 146,                   /* TEQUAL  */
  YYSYMBOL_TEXP = 147,                     /* TEXP  */
  YYSYMBOL_TGREATER = 148,                 /* TGREATER  */
  YYSYMBOL_TGREATEREQUAL = 149,            /* TGREATEREQUAL  */
  YYSYMBOL_THASH = 150,                    /* THASH  */
  YYSYMBOL_TIO = 151,                      /* TIO  */
  YYSYMBOL_TLESS = 152,                    /* TLESS  */
  YYSYMBOL_TLESSEQUAL = 153,               /* TLESSEQUAL  */
  YYSYMBOL_TMINUS = 154,                   /* TMINUS  */
  YYSYMBOL_TMOD = 155,                     /* TMOD  */
  YYSYMBOL_TNOTEQUAL = 156,                /* TNOTEQUAL  */
  YYSYMBOL_TOR = 157,                      /* TOR  */
  YYSYMBOL_TPLUS = 158,                    /* TPLUS  */
  YYSYMBOL_TQUESTION = 159,                /* TQUESTION  */
  YYSYMBOL_TSEMI = 160,                    /* TSEMI  */
  YYSYMBOL_TSHIFTLEFT = 161,               /* TSHIFTLEFT  */
  YYSYMBOL_TSHIFTRIGHT = 162,              /* TSHIFTRIGHT  */
  YYSYMBOL_TSTAR = 163,                    /* TSTAR  */
  YYSYMBOL_TSWAP = 164,                    /* TSWAP  */
  YYSYMBOL_TLCBR = 165,                    /* TLCBR  */
  YYSYMBOL_TRCBR = 166,                    /* TRCBR  */
  YYSYMBOL_TLP = 167,                      /* TLP  */
  YYSYMBOL_TRP = 168,                      /* TRP  */
  YYSYMBOL_TLSBR = 169,                    /* TLSBR  */
  YYSYMBOL_TRSBR = 170,                    /* TRSBR  */
  YYSYMBOL_TNOELSE = 171,                  /* TNOELSE  */
  YYSYMBOL_TDOTDOTOPENHIGH = 172,          /* TDOTDOTOPENHIGH  */
  YYSYMBOL_TUPLUS = 173,                   /* TUPLUS  */
  YYSYMBOL_TUMINUS = 174,                  /* TUMINUS  */
  YYSYMBOL_TLNOT = 175,                    /* TLNOT  */
  YYSYMBOL_YYACCEPT = 176,                 /* $accept  */
  YYSYMBOL_program = 177,                  /* program  */
  YYSYMBOL_toplevel_stmt_ls = 178,         /* toplevel_stmt_ls  */
  YYSYMBOL_toplevel_stmt = 179,            /* toplevel_stmt  */
  YYSYMBOL_pragma_ls = 180,                /* pragma_ls  */
  YYSYMBOL_stmt = 181,                     /* stmt  */
  YYSYMBOL_module_decl_start = 182,        /* module_decl_start  */
  YYSYMBOL_module_decl_stmt = 183,         /* module_decl_stmt  */
  YYSYMBOL_access_control = 184,           /* access_control  */
  YYSYMBOL_opt_prototype = 185,            /* opt_prototype  */
  YYSYMBOL_include_access_control = 186,   /* include_access_control  */
  YYSYMBOL_include_module_stmt = 187,      /* include_module_stmt  */
  YYSYMBOL_188_1 = 188,                    /* $@1  */
  YYSYMBOL_block_stmt = 189,               /* block_stmt  */
  YYSYMBOL_stmt_ls = 190,                  /* stmt_ls  */
  YYSYMBOL_renames_ls = 191,               /* renames_ls  */
  YYSYMBOL_use_renames_ls = 192,           /* use_renames_ls  */
  YYSYMBOL_opt_only_ls = 193,              /* opt_only_ls  */
  YYSYMBOL_except_ls = 194,                /* except_ls  */
  YYSYMBOL_use_access_control = 195,       /* use_access_control  */
  YYSYMBOL_use_stmt = 196,                 /* use_stmt  */
  YYSYMBOL_import_stmt = 197,              /* import_stmt  */
  YYSYMBOL_import_expr = 198,              /* import_expr  */
  YYSYMBOL_import_ls = 199,                /* import_ls  */
  YYSYMBOL_require_stmt = 200,             /* require_stmt  */
  YYSYMBOL_assignment_stmt = 201,          /* assignment_stmt  */
  YYSYMBOL_opt_label_ident = 202,          /* opt_label_ident  */
  YYSYMBOL_ident_fn_def = 203,             /* ident_fn_def  */
  YYSYMBOL_ident_def = 204,                /* ident_def  */
  YYSYMBOL_ident_use = 205,                /* ident_use  */
  YYSYMBOL_internal_type_ident_def = 206,  /* internal_type_ident_def  */
  YYSYMBOL_scalar_type = 207,              /* scalar_type  */
  YYSYMBOL_reserved_type_ident_use = 208,  /* reserved_type_ident_use  */
  YYSYMBOL_do_stmt = 209,                  /* do_stmt  */
  YYSYMBOL_return_stmt = 210,              /* return_stmt  */
  YYSYMBOL_class_level_stmt = 211,         /* class_level_stmt  */
  YYSYMBOL_212_2 = 212,                    /* @2  */
  YYSYMBOL_private_decl = 213,             /* private_decl  */
  YYSYMBOL_forwarding_stmt = 214,          /* forwarding_stmt  */
  YYSYMBOL_extern_export_decl_stmt = 215,  /* extern_export_decl_stmt  */
  YYSYMBOL_216_3 = 216,                    /* $@3  */
  YYSYMBOL_217_4 = 217,                    /* $@4  */
  YYSYMBOL_218_5 = 218,                    /* $@5  */
  YYSYMBOL_219_6 = 219,                    /* $@6  */
  YYSYMBOL_extern_block_stmt = 220,        /* extern_block_stmt  */
  YYSYMBOL_loop_stmt = 221,                /* loop_stmt  */
  YYSYMBOL_zippered_iterator = 222,        /* zippered_iterator  */
  YYSYMBOL_if_stmt = 223,                  /* if_stmt  */
  YYSYMBOL_defer_stmt = 224,               /* defer_stmt  */
  YYSYMBOL_try_stmt = 225,                 /* try_stmt  */
  YYSYMBOL_catch_stmt_ls = 226,            /* catch_stmt_ls  */
  YYSYMBOL_catch_stmt = 227,               /* catch_stmt  */
  YYSYMBOL_catch_expr = 228,               /* catch_expr  */
  YYSYMBOL_throw_stmt = 229,               /* throw_stmt  */
  YYSYMBOL_select_stmt = 230,              /* select_stmt  */
  YYSYMBOL_when_stmt_ls = 231,             /* when_stmt_ls  */
  YYSYMBOL_when_stmt = 232,                /* when_stmt  */
  YYSYMBOL_class_decl_stmt = 233,          /* class_decl_stmt  */
  YYSYMBOL_class_tag = 234,                /* class_tag  */
  YYSYMBOL_opt_inherit = 235,              /* opt_inherit  */
  YYSYMBOL_class_level_stmt_ls = 236,      /* class_level_stmt_ls  */
  YYSYMBOL_enum_decl_stmt = 237,           /* enum_decl_stmt  */
  YYSYMBOL_enum_header = 238,              /* enum_header  */
  YYSYMBOL_enum_ls = 239,                  /* enum_ls  */
  YYSYMBOL_enum_item = 240,                /* enum_item  */
  YYSYMBOL_lambda_decl_expr = 241,         /* lambda_decl_expr  */
  YYSYMBOL_242_7 = 242,                    /* $@7  */
  YYSYMBOL_243_8 = 243,                    /* $@8  */
  YYSYMBOL_linkage_spec = 244,             /* linkage_spec  */
  YYSYMBOL_fn_decl_stmt = 245,             /* fn_decl_stmt  */
  YYSYMBOL_246_9 = 246,                    /* $@9  */
  YYSYMBOL_247_10 = 247,                   /* $@10  */
  YYSYMBOL_fn_decl_stmt_inner = 248,       /* fn_decl_stmt_inner  */
  YYSYMBOL_fn_decl_receiver_expr = 249,    /* fn_decl_receiver_expr  */
  YYSYMBOL_fn_ident = 250,                 /* fn_ident  */
  YYSYMBOL_assignop_ident = 251,           /* assignop_ident  */
  YYSYMBOL_opt_formal_ls = 252,            /* opt_formal_ls  */
  YYSYMBOL_req_formal_ls = 253,            /* req_formal_ls  */
  YYSYMBOL_formal_ls = 254,                /* formal_ls  */
  YYSYMBOL_formal = 255,                   /* formal  */
  YYSYMBOL_opt_intent_tag = 256,           /* opt_intent_tag  */
  YYSYMBOL_required_intent_tag = 257,      /* required_intent_tag  */
  YYSYMBOL_opt_this_intent_tag = 258,      /* opt_this_intent_tag  */
  YYSYMBOL_proc_or_iter = 259,             /* proc_or_iter  */
  YYSYMBOL_opt_ret_tag = 260,              /* opt_ret_tag  */
  YYSYMBOL_opt_throws_error = 261,         /* opt_throws_error  */
  YYSYMBOL_opt_function_body_stmt = 262,   /* opt_function_body_stmt  */
  YYSYMBOL_function_body_stmt = 263,       /* function_body_stmt  */
  YYSYMBOL_query_expr = 264,               /* query_expr  */
  YYSYMBOL_var_arg_expr = 265,             /* var_arg_expr  */
  YYSYMBOL_opt_lifetime_where = 266,       /* opt_lifetime_where  */
  YYSYMBOL_lifetime_components_expr = 267, /* lifetime_components_expr  */
  YYSYMBOL_lifetime_expr = 268,            /* lifetime_expr  */
  YYSYMBOL_lifetime_ident = 269,           /* lifetime_ident  */
  YYSYMBOL_type_alias_decl_stmt = 270,     /* type_alias_decl_stmt  */
  YYSYMBOL_type_alias_decl_stmt_inner = 271, /* type_alias_decl_stmt_inner  */
  YYSYMBOL_opt_init_type = 272,            /* opt_init_type  */
  YYSYMBOL_var_decl_type = 273,            /* var_decl_type  */
  YYSYMBOL_var_decl_stmt = 274,            /* var_decl_stmt  */
  YYSYMBOL_var_decl_stmt_inner_ls = 275,   /* var_decl_stmt_inner_ls  */
  YYSYMBOL_var_decl_stmt_inner = 276,      /* var_decl_stmt_inner  */
  YYSYMBOL_tuple_var_decl_component = 277, /* tuple_var_decl_component  */
  YYSYMBOL_tuple_var_decl_stmt_inner_ls = 278, /* tuple_var_decl_stmt_inner_ls  */
  YYSYMBOL_opt_init_expr = 279,            /* opt_init_expr  */
  YYSYMBOL_ret_array_type = 280,           /* ret_array_type  */
  YYSYMBOL_opt_ret_type = 281,             /* opt_ret_type  */
  YYSYMBOL_opt_type = 282,                 /* opt_type  */
  YYSYMBOL_array_type = 283,               /* array_type  */
  YYSYMBOL_opt_formal_array_elt_type = 284, /* opt_formal_array_elt_type  */
  YYSYMBOL_formal_array_type = 285,        /* formal_array_type  */
  YYSYMBOL_opt_formal_type = 286,          /* opt_formal_type  */
  YYSYMBOL_expr_ls = 287,                  /* expr_ls  */
  YYSYMBOL_simple_expr_ls = 288,           /* simple_expr_ls  */
  YYSYMBOL_tuple_component = 289,          /* tuple_component  */
  YYSYMBOL_tuple_expr_ls = 290,            /* tuple_expr_ls  */
  YYSYMBOL_opt_actual_ls = 291,            /* opt_actual_ls  */
  YYSYMBOL_actual_ls = 292,                /* actual_ls  */
  YYSYMBOL_actual_expr = 293,              /* actual_expr  */
  YYSYMBOL_ident_expr = 294,               /* ident_expr  */
  YYSYMBOL_type_level_expr = 295,          /* type_level_expr  */
  YYSYMBOL_sub_type_level_expr = 296,      /* sub_type_level_expr  */
  YYSYMBOL_for_expr = 297,                 /* for_expr  */
  YYSYMBOL_cond_expr = 298,                /* cond_expr  */
  YYSYMBOL_nil_expr = 299,                 /* nil_expr  */
  YYSYMBOL_stmt_level_expr = 300,          /* stmt_level_expr  */
  YYSYMBOL_opt_task_intent_ls = 301,       /* opt_task_intent_ls  */
  YYSYMBOL_task_intent_clause = 302,       /* task_intent_clause  */
  YYSYMBOL_task_intent_ls = 303,           /* task_intent_ls  */
  YYSYMBOL_forall_intent_clause = 304,     /* forall_intent_clause  */
  YYSYMBOL_forall_intent_ls = 305,         /* forall_intent_ls  */
  YYSYMBOL_intent_expr = 306,              /* intent_expr  */
  YYSYMBOL_shadow_var_prefix = 307,        /* shadow_var_prefix  */
  YYSYMBOL_io_expr = 308,                  /* io_expr  */
  YYSYMBOL_new_maybe_decorated = 309,      /* new_maybe_decorated  */
  YYSYMBOL_new_expr = 310,                 /* new_expr  */
  YYSYMBOL_let_expr = 311,                 /* let_expr  */
  YYSYMBOL_expr = 312,                     /* expr  */
  YYSYMBOL_opt_expr = 313,                 /* opt_expr  */
  YYSYMBOL_opt_try_expr = 314,             /* opt_try_expr  */
  YYSYMBOL_lhs_expr = 315,                 /* lhs_expr  */
  YYSYMBOL_fun_expr = 316,                 /* fun_expr  */
  YYSYMBOL_call_expr = 317,                /* call_expr  */
  YYSYMBOL_dot_expr = 318,                 /* dot_expr  */
  YYSYMBOL_parenthesized_expr = 319,       /* parenthesized_expr  */
  YYSYMBOL_bool_literal = 320,             /* bool_literal  */
  YYSYMBOL_literal_expr = 321,             /* literal_expr  */
  YYSYMBOL_assoc_expr_ls = 322,            /* assoc_expr_ls  */
  YYSYMBOL_binary_op_expr = 323,           /* binary_op_expr  */
  YYSYMBOL_unary_op_expr = 324,            /* unary_op_expr  */
  YYSYMBOL_reduce_expr = 325,              /* reduce_expr  */
  YYSYMBOL_scan_expr = 326,                /* scan_expr  */
  YYSYMBOL_reduce_scan_op_expr = 327       /* reduce_scan_op_expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;



/* Unqualified %code blocks.  */
#line 39 "chapel.ypp"

  #include <string>
  int         captureTokens;
  std::string captureString;
  bool        parsingPrivate=false;
#line 213 "chapel.ypp"

  #include "build.h"
  #include "CatchStmt.h"
  #include "DeferStmt.h"
  #include "DoWhileStmt.h"
  #include "driver.h"
  #include "flex-chapel.h"
  #include "ForallStmt.h"
  #include "ForLoop.h"
  #include "IfExpr.h"
  #include "misc.h"
  #include "parser.h"
  #include "stmt.h"
  #include "stringutil.h"
  #include "TryStmt.h"
  #include "vec.h"
  #include "WhileDoStmt.h"

  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <stdint.h>

  #define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
    if (N) {                                                              \
      (Current).first_line   = (Rhs)[1].first_line;                       \
      (Current).first_column = (Rhs)[1].first_column;                     \
      (Current).last_line    = (Rhs)[N].last_line;                        \
      (Current).last_column  = (Rhs)[N].last_column;                      \
      (Current).comment      = NULL;                                      \
                                                                          \
      if ((Current).first_line)                                           \
        yystartlineno = (Current).first_line;                             \
                                                                          \
    } else  {                                                             \
      (Current) = yylloc;                                                 \
    }

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str) {

    // like USR_FATAL_CONT
    setupError("parser", __FILE__, __LINE__, 3);

    // TODO -- should this begin with error:
    if (!chplParseString) {
      const char* yyText = yyget_text(context->scanner);
      fprintf(stderr, "%s:%d: %s", yyfilename, chplLineno, str);

      if (strlen(yyText) > 0) {
        fprintf(stderr, ": near '%s'", yyText);
      }
    } else {
      fprintf(stderr, "%s: %s", yyfilename, str);

      if (chplParseStringMsg && (strlen(chplParseStringMsg) > 0)) {
        fprintf(stderr, " %s", chplParseStringMsg);
      }
    }

    fprintf(stderr, "\n");
  }

#line 502 "bison-chapel.cpp"

#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   19779

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  152
/* YYNRULES -- Number of rules.  */
#define YYNRULES  646
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1159

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   430


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   507,   507,   512,   513,   519,   520,   525,   526,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   567,   580,   585,   590,   598,   599,   600,   604,
     605,   609,   610,   611,   616,   615,   636,   637,   638,   643,
     644,   649,   654,   659,   663,   672,   677,   682,   687,   691,
     695,   703,   708,   712,   717,   721,   722,   723,   727,   728,
     729,   730,   731,   732,   733,   737,   742,   743,   744,   748,
     749,   753,   757,   759,   761,   763,   765,   767,   774,   775,
     779,   780,   781,   782,   783,   784,   787,   788,   789,   790,
     791,   792,   804,   805,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   856,   857,   858,   859,   863,
     864,   868,   869,   873,   874,   875,   885,   885,   890,   891,
     892,   893,   894,   895,   896,   900,   901,   902,   903,   908,
     907,   923,   922,   939,   938,   954,   953,   969,   973,   978,
     986,   997,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1028,  1034,  1040,  1046,  1053,  1060,  1064,  1071,  1075,
    1076,  1077,  1078,  1079,  1081,  1083,  1085,  1090,  1093,  1094,
    1095,  1096,  1097,  1098,  1102,  1103,  1107,  1108,  1109,  1113,
    1114,  1118,  1121,  1123,  1128,  1129,  1133,  1135,  1137,  1144,
    1154,  1168,  1173,  1178,  1186,  1187,  1192,  1193,  1195,  1200,
    1216,  1223,  1232,  1240,  1244,  1251,  1252,  1257,  1262,  1256,
    1289,  1292,  1296,  1304,  1314,  1303,  1346,  1350,  1355,  1359,
    1364,  1371,  1372,  1376,  1377,  1378,  1379,  1380,  1381,  1382,
    1383,  1384,  1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,
    1393,  1394,  1395,  1396,  1397,  1398,  1399,  1400,  1401,  1402,
    1403,  1407,  1408,  1409,  1410,  1411,  1412,  1413,  1414,  1415,
    1416,  1417,  1418,  1422,  1423,  1427,  1431,  1432,  1433,  1437,
    1439,  1441,  1443,  1445,  1450,  1451,  1455,  1456,  1457,  1458,
    1459,  1460,  1461,  1462,  1463,  1467,  1468,  1469,  1470,  1471,
    1472,  1476,  1477,  1481,  1482,  1483,  1484,  1485,  1486,  1490,
    1491,  1494,  1495,  1499,  1500,  1504,  1509,  1513,  1514,  1515,
    1523,  1524,  1526,  1528,  1530,  1535,  1537,  1542,  1543,  1544,
    1545,  1546,  1547,  1548,  1552,  1554,  1559,  1561,  1563,  1568,
    1581,  1598,  1599,  1601,  1606,  1607,  1608,  1609,  1610,  1614,
    1620,  1628,  1629,  1637,  1639,  1644,  1646,  1648,  1653,  1655,
    1657,  1664,  1665,  1666,  1671,  1673,  1675,  1679,  1683,  1685,
    1689,  1697,  1698,  1699,  1700,  1701,  1706,  1707,  1708,  1709,
    1710,  1730,  1734,  1738,  1746,  1753,  1754,  1755,  1759,  1761,
    1767,  1769,  1771,  1776,  1777,  1778,  1779,  1780,  1786,  1787,
    1788,  1789,  1793,  1794,  1798,  1799,  1800,  1804,  1805,  1809,
    1810,  1814,  1815,  1819,  1820,  1821,  1822,  1826,  1827,  1838,
    1840,  1842,  1848,  1849,  1850,  1851,  1852,  1853,  1855,  1857,
    1859,  1861,  1863,  1865,  1868,  1870,  1872,  1874,  1876,  1878,
    1880,  1882,  1885,  1887,  1892,  1894,  1896,  1898,  1900,  1902,
    1904,  1906,  1908,  1910,  1912,  1914,  1916,  1923,  1929,  1935,
    1941,  1950,  1960,  1968,  1969,  1970,  1971,  1972,  1973,  1974,
    1975,  1980,  1981,  1985,  1989,  1990,  1994,  1998,  1999,  2003,
    2007,  2011,  2018,  2019,  2020,  2021,  2022,  2023,  2027,  2028,
    2033,  2035,  2039,  2043,  2047,  2055,  2060,  2066,  2072,  2079,
    2088,  2092,  2099,  2107,  2108,  2109,  2110,  2111,  2112,  2113,
    2114,  2115,  2117,  2119,  2121,  2136,  2138,  2140,  2142,  2147,
    2148,  2152,  2153,  2154,  2158,  2159,  2160,  2161,  2172,  2173,
    2174,  2175,  2179,  2180,  2181,  2185,  2186,  2187,  2188,  2189,
    2197,  2198,  2199,  2200,  2204,  2205,  2209,  2210,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2225,
    2233,  2234,  2238,  2239,  2240,  2241,  2242,  2243,  2244,  2245,
    2246,  2247,  2248,  2249,  2250,  2251,  2252,  2253,  2254,  2255,
    2256,  2257,  2258,  2259,  2260,  2264,  2265,  2266,  2267,  2268,
    2269,  2270,  2274,  2275,  2276,  2277,  2281,  2282,  2283,  2284,
    2289,  2290,  2291,  2292,  2293,  2294,  2295
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TIDENT",
  "TQUERIEDIDENT", "INTLITERAL", "REALLITERAL", "IMAGLITERAL",
  "STRINGLITERAL", "BYTESLITERAL", "CSTRINGLITERAL", "EXTERNCODE",
  "TALIGN", "TAS", "TATOMIC", "TBEGIN", "TBREAK", "TBOOL", "TBORROWED",
  "TBY", "TBYTES", "TCATCH", "TCLASS", "TCOBEGIN", "TCOFORALL", "TCOMPLEX",
  "TCONFIG", "TCONST", "TCONTINUE", "TDEFER", "TDELETE", "TDMAPPED", "TDO",
  "TDOMAIN", "TELSE", "TENUM", "TEXCEPT", "TEXPORT", "TEXTERN", "TFALSE",
  "TFOR", "TFORALL", "TFORWARDING", "TGPU", "TIF", "TIMAG", "TIMPORT",
  "TIN", "TINCLUDE", "TINDEX", "TINLINE", "TINOUT", "TINT", "TITER",
  "TINITEQUALS", "TLABEL", "TLAMBDA", "TLET", "TLIFETIME", "TLOCAL",
  "TLOCALE", "TMINUSMINUS", "TMODULE", "TNEW", "TNIL", "TNOINIT", "TNONE",
  "TNOTHING", "TON", "TONLY", "TOTHERWISE", "TOUT", "TOVERRIDE", "TOWNED",
  "TPARAM", "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE", "TPRIVATE", "TPROC",
  "TPROTOTYPE", "TPUBLIC", "TREAL", "TRECORD", "TREDUCE", "TREF",
  "TREQUIRE", "TRETURN", "TSCAN", "TSELECT", "TSERIAL", "TSHARED",
  "TSINGLE", "TSPARSE", "TSTRING", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTHIS",
  "TTHROW", "TTHROWS", "TTRUE", "TTRY", "TTRYBANG", "TTYPE", "TUINT",
  "TUNDERSCORE", "TUNION", "TUNMANAGED", "TUSE", "TVAR", "TVOID", "TWHEN",
  "TWHERE", "TWHILE", "TWITH", "TYIELD", "TZIP", "TALIAS", "TAND",
  "TASSIGN", "TASSIGNBAND", "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE",
  "TASSIGNEXP", "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNREDUCE", "TASSIGNSL",
  "TASSIGNSR", "TBANG", "TBAND", "TBNOT", "TBOR", "TBXOR", "TCOLON",
  "TCOMMA", "TDIVIDE", "TDOT", "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP",
  "TGREATER", "TGREATEREQUAL", "THASH", "TIO", "TLESS", "TLESSEQUAL",
  "TMINUS", "TMOD", "TNOTEQUAL", "TOR", "TPLUS", "TQUESTION", "TSEMI",
  "TSHIFTLEFT", "TSHIFTRIGHT", "TSTAR", "TSWAP", "TLCBR", "TRCBR", "TLP",
  "TRP", "TLSBR", "TRSBR", "TNOELSE", "TDOTDOTOPENHIGH", "TUPLUS",
  "TUMINUS", "TLNOT", "$accept", "program", "toplevel_stmt_ls",
  "toplevel_stmt", "pragma_ls", "stmt", "module_decl_start",
  "module_decl_stmt", "access_control", "opt_prototype",
  "include_access_control", "include_module_stmt", "$@1", "block_stmt",
  "stmt_ls", "renames_ls", "use_renames_ls", "opt_only_ls", "except_ls",
  "use_access_control", "use_stmt", "import_stmt", "import_expr",
  "import_ls", "require_stmt", "assignment_stmt", "opt_label_ident",
  "ident_fn_def", "ident_def", "ident_use", "internal_type_ident_def",
  "scalar_type", "reserved_type_ident_use", "do_stmt", "return_stmt",
  "class_level_stmt", "@2", "private_decl", "forwarding_stmt",
  "extern_export_decl_stmt", "$@3", "$@4", "$@5", "$@6",
  "extern_block_stmt", "loop_stmt", "zippered_iterator", "if_stmt",
  "defer_stmt", "try_stmt", "catch_stmt_ls", "catch_stmt", "catch_expr",
  "throw_stmt", "select_stmt", "when_stmt_ls", "when_stmt",
  "class_decl_stmt", "class_tag", "opt_inherit", "class_level_stmt_ls",
  "enum_decl_stmt", "enum_header", "enum_ls", "enum_item",
  "lambda_decl_expr", "$@7", "$@8", "linkage_spec", "fn_decl_stmt", "$@9",
  "$@10", "fn_decl_stmt_inner", "fn_decl_receiver_expr", "fn_ident",
  "assignop_ident", "opt_formal_ls", "req_formal_ls", "formal_ls",
  "formal", "opt_intent_tag", "required_intent_tag", "opt_this_intent_tag",
  "proc_or_iter", "opt_ret_tag", "opt_throws_error",
  "opt_function_body_stmt", "function_body_stmt", "query_expr",
  "var_arg_expr", "opt_lifetime_where", "lifetime_components_expr",
  "lifetime_expr", "lifetime_ident", "type_alias_decl_stmt",
  "type_alias_decl_stmt_inner", "opt_init_type", "var_decl_type",
  "var_decl_stmt", "var_decl_stmt_inner_ls", "var_decl_stmt_inner",
  "tuple_var_decl_component", "tuple_var_decl_stmt_inner_ls",
  "opt_init_expr", "ret_array_type", "opt_ret_type", "opt_type",
  "array_type", "opt_formal_array_elt_type", "formal_array_type",
  "opt_formal_type", "expr_ls", "simple_expr_ls", "tuple_component",
  "tuple_expr_ls", "opt_actual_ls", "actual_ls", "actual_expr",
  "ident_expr", "type_level_expr", "sub_type_level_expr", "for_expr",
  "cond_expr", "nil_expr", "stmt_level_expr", "opt_task_intent_ls",
  "task_intent_clause", "task_intent_ls", "forall_intent_clause",
  "forall_intent_ls", "intent_expr", "shadow_var_prefix", "io_expr",
  "new_maybe_decorated", "new_expr", "let_expr", "expr", "opt_expr",
  "opt_try_expr", "lhs_expr", "fun_expr", "call_expr", "dot_expr",
  "parenthesized_expr", "bool_literal", "literal_expr", "assoc_expr_ls",
  "binary_op_expr", "unary_op_expr", "reduce_expr", "scan_expr",
  "reduce_scan_op_expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430
};
#endif

#define YYPACT_NINF (-1045)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-597)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1045,   147,  2964, -1045,   -48, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045,  4324,    58,   160, -1045, 13865, -1045, 19310,    58,
   10584, -1045,   303,   114,   160,  4324, 10584,  4324,    18, 19392,
   10752,  7544, -1045,  7712,  8728,  6192, 10584, -1045, -1045,   133,
   -1045, -1045, 19446, -1045, 14213,  8896, -1045, 10584,   220, -1045,
   -1045, -1045,  9064, -1045, 13865, -1045, 10584,   186,   153,   482,
   19669, -1045, 19528, -1045,  9234,  7038, 10584,  8896, 13865, 10584,
     167, -1045,   164,  4324, -1045, 10584, -1045, 10920, 10920, 19446,
   -1045, -1045, 13865, -1045, -1045, 10584, 10584, -1045, 10584, -1045,
   10584, -1045, -1045, 13398, 10584, -1045, 10584, -1045, -1045, -1045,
    3304,  6362,  7882, 10584, -1045,  4154, -1045,   247, -1045,   199,
   -1045, -1045,    41, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, 19446, -1045, 19446,    81,    49, -1045, -1045, 14213,
   -1045,   264, -1045,   281, -1045, -1045,   290,   295,   315, 10584,
     318,   329, 18935, 13391,   197,   349,   360, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045,   327, -1045, -1045, 18935,   358,  4324,
   -1045, -1045,   366, 10584, -1045, -1045, 10584, 10584, 10584, -1045,
   10584,  9234,  9234,   347, -1045, -1045, -1045, -1045,   -36,   352,
   -1045, -1045,   376, 15537, 19446, 14213, -1045,   394, -1045,   -45,
   18935,   398,  7208,   470, 19582, 18935,   432,   475, -1045, 19664,
   19446,   432, 19446,   413,    60,  2776,    -7, 15211,   255, -1045,
   15293, 14483,   165,  7208, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,  4324, -1045,
     414,  1696,    82,     1, -1045,  4324, -1045, -1045, 15617,   161,
   -1045,   426,   427, -1045, 10584, 15617,   -36,   161, -1045,  7208,
    1623, -1045, -1045,  9402, -1045, -1045, -1045, 19446, -1045,   -43,
   18935, 10584, 10584, -1045, 18935,   436, 16192, -1045, 15617,   -36,
   18935,   433,  7208, -1045, 18935, 16274, -1045, -1045, 16354,  2074,
   -1045, -1045, 16435,   481,   446,   -36, 15617, 16515,   392,   392,
    2502,   161,   161,   262, -1045, -1045,  3474,   143, -1045, 10584,
   -1045,    11,    83, -1045,   -14,   124, 16596,   106,  2502,   599,
   -1045,  3644, -1045,   546, 10584, 10584,   473,   450, -1045, -1045,
   -1045,    95,   367, -1045, 10584,   476, 10584, 10584, 10584,  8728,
    8728, 10584,   371, 10584, 10584, 10584, 10584, 10584,   530, 13398,
   10584, 10584, 10584, 10584, 10584, 10584, 10584, 10584, 10584, 10584,
   10584, 10584, 10584, 10584, 10584, 10584,   559, -1045, -1045, -1045,
   -1045, -1045,  8050,  8050, -1045, -1045, -1045, -1045,  8050, -1045,
   -1045,  8050,  8050,  7208,  7208,  8728,  8728,  6870, -1045, -1045,
   15699, 15779, 16676,    89,  3814, -1045,  8728,    60,   478,   137,
   -1045, 10584, -1045, 10584,   513, -1045,   462,   494, -1045, -1045,
   -1045, 19446, -1045, 14213, -1045, 19446,   483, -1045, 14213,   589,
    9234, -1045,  4494,  8728, -1045,   486, -1045,    60,  4664,  8728,
   -1045,    60, 11088, 10584, -1045,  4324, -1045,   611, 10584, -1045,
   -1045,   199,   480, -1045,   612, -1045, -1045,  1696, -1045,   509,
     488, -1045, 11256,   531, 10584, 14213, -1045, -1045, 10584, 10584,
   15617, -1045,   489, -1045, -1045,  9234, -1045, 18935, 18935, -1045,
      27, -1045,  7208,   490, -1045,   639, -1045,   639, -1045, 11424,
     520, -1045, -1045, -1045, -1045, -1045, -1045,  8220, -1045, 16757,
    6532, -1045,  6702, -1045,  4324,   492,  8728,  8390,  3134,   495,
   10584,  9570, -1045, -1045,   269, -1045,  3984, 19446, -1045,   226,
   16838,   246, 15375,  9234,   501, 19256,   213, -1045, 16918, 19055,
   19055,   417, -1045,   417, -1045,   417, 18974,   866,  1417,   706,
     -36,   392,   500, -1045, -1045, -1045, -1045,  2502, 19100,   417,
   13553, 13553, 19055, 13553, 13553,  1228,   392, 19100,  1957,  1228,
     161,   161,   392,  2502,   516,   517,   518,   522,   527,   539,
     512,   532, -1045,   417, -1045,   417,    24, -1045, -1045, -1045,
      88, -1045,  1116, 19015,   393, 11592,  8728, 11760,  8728, 10584,
    8728, 14131,    58, 16999, -1045, -1045, -1045, 18935, 17079,  7208,
   -1045,  7208, 19446,   473,   257, 19446,   473, -1045,   278, 10584,
     103, 10584, 18935,    63, 15860,  6870, -1045, 10584, 18935,    19,
   15455, -1045,   541,   549,   543, 17160,   549,   545,   672, 17240,
    4324, 15940,   645, -1045,   168, -1045, -1045, -1045, -1045, -1045,
   -1045,   363,   127, -1045, 14305, -1045,   510,   547,  1696,    82,
      18,   133, 10584, 10584,  6024, -1045, -1045,   345,  7376, -1045,
   18935, -1045, 17321, 17402, -1045, -1045, -1045, 18935,   548,    -6,
     550, -1045,  2434, -1045, -1045,   312, 19446, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045,  4324,     5, 16022, -1045, -1045, 18935,
    4324, 18935, -1045, 17483, -1045, -1045, -1045, 10584, -1045,    29,
     102, 10584, -1045,  9738, 11088, 10584,   570,  2192,   553,   603,
     144, -1045,   624, -1045, -1045, -1045, -1045, 13235,   558, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,  6870,
   -1045,    37,  8728,  8728, 10584,   695, 17563, 10584,   697, 17644,
     564, 17724,    60,    60, -1045, -1045, -1045, -1045,   473,   571,
   -1045,   473,   574, -1045, 15617, -1045, 14563,  4834, -1045,  5004,
   -1045,   158, -1045, 14645,  5174, -1045,    60,  5344, -1045,    60,
   10584, -1045, 10584, -1045,  4324, 10584, -1045,  4324,   701, 19446,
   -1045, -1045, 19446,   788, -1045,  1696,   600,   656, -1045, -1045,
   -1045,    68, -1045, -1045,   531,   572,    93, -1045, -1045,   576,
     577, -1045,  5514,  9234, -1045, -1045, -1045, 19446, -1045,   606,
     376, -1045, -1045,  5684,   579,  5854,   596, -1045, 10584, -1045,
   -1045, 10584, 17805,    31, 16112,   608,   609,   593,  1248, -1045,
   10584, 19446, -1045, -1045,   510,   605,   325, -1045,   627, -1045,
     631,   632,   641,   638,   643, -1045,   646,   647,   650,   653,
     657,   344,   649,   664,   667, -1045, -1045, 19446, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045, 10584, -1045,   677,
     679,   674,   605,   605, -1045, -1045, -1045,   531,   228,   234,
   17885, 11928, 12096, 17966, 12264, 12432, 12600, 12768, -1045, -1045,
     623, -1045,   654, -1045, -1045,  4324, 10584, 18935, 10584, 18935,
    6870, -1045,  4324, 10584, 18935, -1045, 10584, 18935, -1045, 18046,
   18935, -1045, 18935,   786,  4324,   662,   600, -1045,   663,  9908,
     201, -1045,   118, -1045, -1045,  8728, 13998,  7208,  7208,  4324,
   -1045,    48,   665, 10584, -1045, 10584, -1045, 18935,  4324, 10584,
   -1045, 18935,  4324, 18935,   231, 10076, 11088, 10584, 11088, 10584,
   -1045, -1045, -1045, -1045,  1623, -1045, 16035, -1045, 18935, -1045,
      67,   612, -1045, -1045, 18127, -1045, 14402, -1045, -1045, -1045,
   10584, 10584, 10584, 10584, 10584, 10584, 10584, 10584, -1045,  2524,
   -1045, 14326, 17240, 14725, 14807, -1045, 17240, 14887, 14969, 10584,
    4324, -1045, -1045,   531,   600,  8560, -1045, -1045, -1045,   402,
    9234, -1045, -1045,    46, 10584,   -46, 18208, -1045,   637,   666,
     668,   398, -1045,   376, 18935, 15049, -1045, 15131, -1045, -1045,
   -1045, 18935,   678,   680,   690,   691, -1045, -1045, 12936,   732,
     248, -1045,   702,   719,   605,   605, 18288, 18369, 18449, 18530,
   18610, 18691, 15388, -1045, 15550, -1045,  4324,  4324,  4324,  4324,
   18935, -1045, -1045,   201, 10246,    94, -1045, 18935, -1045,   100,
   -1045,    -9, -1045,   675, 18774, -1045, -1045, -1045, 12768,   696,
     707, -1045,  4324,  4324, -1045, -1045, -1045, -1045,  2719, -1045,
   -1045,   472, -1045,   118, -1045, -1045, -1045, 10584, 10584, 10584,
   10584, 10584, 10584, -1045, -1045, 17240, 17240, 17240, 17240, -1045,
   -1045, -1045, -1045, -1045,   484,  8728, 13565, -1045, 10584,    46,
     100,   100,   100,   100,   100,   100,    46,   952, -1045, -1045,
   17240, 17240,   686, 13104,    96,   -42, 18854, -1045, -1045, 18935,
   -1045, -1045, -1045, -1045, -1045, -1045, -1045,   729, -1045, -1045,
     568, 13732, -1045, -1045, -1045, 10416, -1045,   698, -1045
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       3,     0,     0,     1,     0,   112,   587,   588,   589,   590,
     591,   592,     0,   511,    98,   133,   480,   140,   482,   511,
       0,   139,     0,   385,    98,     0,     0,     0,     0,   134,
     559,   559,   584,     0,     0,     0,     0,   138,    54,     0,
     261,   135,     0,   257,     0,     0,   142,     0,   530,   502,
     593,   143,     0,   262,   474,   384,     0,     0,     0,   156,
      47,   137,   483,   386,     0,     0,     0,     0,   478,     0,
       0,   141,     0,     0,   113,     0,   585,     0,     0,     0,
     136,   243,   476,   388,   144,     0,     0,   642,     0,   644,
       0,   645,   646,   558,     0,   643,   640,   461,   153,   641,
       0,     0,     0,     0,     4,     0,     5,     0,     9,    49,
      10,    11,     0,    12,    13,    14,    16,   457,   458,    24,
      15,   154,   163,   164,    17,    19,    18,    21,    22,    23,
      20,   162,     0,   160,     0,   548,     0,   158,   161,     0,
     159,   564,   544,   459,   545,   464,   462,     0,     0,     0,
     549,   550,     0,   463,     0,   565,   566,   567,   586,   543,
     466,   465,   546,   547,     0,    41,    26,   472,     0,     0,
     512,    99,     0,     0,   482,   134,     0,     0,     0,   483,
       0,     0,     0,   548,   564,   462,   549,   550,   481,   463,
     565,   566,     0,   511,     0,     0,   387,     0,   217,     0,
     442,     0,   449,   590,   483,   560,   260,   590,   181,   483,
       0,   260,     0,     0,     0,     0,     0,     0,     0,   168,
       0,     0,    51,   449,   106,   114,   126,   120,   119,   128,
     109,   118,   129,   115,   130,   107,   131,   124,   117,   125,
     123,   121,   122,   108,   110,   116,   127,   132,     0,   111,
       0,     0,     0,     0,   391,     0,   150,    34,     0,   627,
     534,   531,   532,   533,     0,     0,   475,   628,     7,   449,
     260,   241,   251,   559,   242,   155,   356,   461,   439,     0,
     438,     0,     0,   151,   563,     0,     0,    38,     0,   479,
     467,     0,   449,    39,   473,     0,   224,   220,     0,   463,
     224,   221,     0,   381,     0,   477,     0,     0,   629,   631,
     556,   626,   625,     0,    56,    59,     0,     0,   444,     0,
     446,     0,     0,   445,     0,     0,   438,     0,   557,     0,
       6,     0,    50,     0,     0,     0,   244,     0,   342,   341,
     263,     0,   460,    25,     0,   535,     0,     0,     0,     0,
       0,     0,   630,     0,     0,     0,     0,     0,     0,   555,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   301,   308,   309,   310,
     305,   307,     0,     0,   303,   306,   304,   302,     0,   312,
     311,     0,     0,   449,   449,     0,     0,     0,    27,    28,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
      30,     0,    31,     0,   457,   455,     0,   450,   451,   456,
     175,     0,   178,     0,   171,     0,     0,   177,     0,     0,
       0,   190,     0,     0,   189,     0,   198,     0,     0,     0,
     196,     0,     0,    71,   165,     0,   301,   210,     0,    53,
      52,    49,     0,    32,   324,   258,   395,     0,   396,   398,
       0,   420,     0,   401,     0,     0,   149,    33,     0,     0,
       0,    35,     0,   157,   355,     0,    91,   561,   562,   152,
       0,    37,   449,     0,   231,   222,   218,   223,   219,     0,
     379,   376,   183,    40,    58,    57,    60,     0,   594,     0,
       0,   580,     0,   582,     0,     0,     0,     0,     0,     0,
       0,     0,   598,     8,     0,    43,     0,     0,    89,     0,
      86,     0,    65,     0,     0,     0,   335,   390,   510,   622,
     621,   624,   633,   632,   637,   636,   618,   615,   616,   617,
     552,   605,     0,   577,   578,   576,   575,   553,   609,   620,
     614,   612,   623,   613,   611,   603,   608,   610,   619,   602,
     606,   607,   604,   554,     0,     0,     0,     0,     0,     0,
       0,     0,   635,   634,   639,   638,   522,   523,   525,   527,
       0,   514,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   596,   511,   511,   186,   377,   389,   443,     0,     0,
     469,     0,     0,   244,     0,     0,   244,   378,     0,     0,
       0,     0,   486,     0,     0,     0,   199,     0,   492,     0,
       0,   197,   641,    74,     0,    61,    72,     0,   209,     0,
       0,     0,     0,   468,   329,   326,   327,   328,   332,   333,
     334,   324,     0,   317,     0,   325,   343,     0,   399,     0,
     147,   148,   146,   145,     0,   419,   418,   544,     0,   393,
     542,   392,     0,     0,    36,   574,   441,   440,     0,     0,
       0,   470,     0,   225,   383,   544,     0,   595,   551,   581,
     447,   583,   448,   206,     0,     0,     0,   597,   204,   496,
       0,   600,   599,     0,    45,    44,    42,     0,    85,     0,
       0,     0,    78,     0,     0,    71,   245,     0,     0,   255,
       0,   252,   339,   336,   337,   340,   264,     0,     0,    97,
      95,    96,    94,    93,    92,   572,   573,   524,   526,     0,
     513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   182,   453,   454,   452,   244,     0,
     180,   244,     0,   179,     0,   208,     0,     0,   188,     0,
     187,     0,   517,     0,     0,   194,     0,     0,   192,     0,
       0,   166,     0,   167,     0,     0,   212,     0,   214,     0,
     330,   331,     0,   324,   315,     0,   433,   344,   347,   346,
     348,     0,   397,   400,   401,     0,     0,   402,   403,   540,
     541,   233,     0,     0,   232,   235,   471,     0,   226,   229,
       0,   380,   207,     0,     0,     0,     0,   205,     0,    90,
      87,     0,    68,    67,    66,     0,     0,     0,   260,   250,
       0,   253,   249,   338,   343,   313,   100,   296,   114,   294,
     120,   119,   103,   118,   115,   299,   130,   101,   131,   117,
     121,   102,   104,   116,   132,   293,   275,   278,   276,   277,
     288,   279,   292,   284,   282,   295,   298,   283,   281,   286,
     291,   280,   285,   289,   290,   287,   297,     0,   273,     0,
     105,     0,   313,   313,   271,   579,   515,   401,   564,   564,
       0,     0,     0,     0,     0,     0,     0,     0,   185,   184,
       0,   246,     0,   246,   191,     0,     0,   485,     0,   484,
       0,   516,     0,     0,   491,   195,     0,   490,   193,    63,
      62,   211,   501,   213,     0,     0,   433,   318,     0,     0,
     401,   345,   360,   394,   424,     0,   596,   449,   449,     0,
     237,     0,     0,     0,   227,     0,   202,   498,     0,     0,
     200,   497,     0,   601,     0,     0,     0,    71,     0,    71,
      79,    82,   240,   156,   260,   239,   260,   247,   256,   254,
       0,   324,   270,   274,     0,   300,     0,   266,   267,   519,
       0,     0,     0,     0,     0,     0,     0,     0,   246,   260,
     246,   260,   489,     0,     0,   518,   495,     0,     0,     0,
       0,   216,    55,   401,   433,     0,   436,   435,   437,   544,
     357,   321,   319,     0,     0,     0,     0,   422,   544,     0,
       0,   238,   236,     0,   230,     0,   203,     0,   201,    88,
      70,    69,     0,     0,     0,     0,   248,   415,     0,   349,
       0,   272,   100,   102,   313,   313,     0,     0,     0,     0,
       0,     0,   260,   174,   260,   170,     0,     0,     0,     0,
      64,   215,   320,   401,   425,     0,   359,   358,   374,     0,
     375,   362,   365,     0,   361,   353,   354,   259,     0,   536,
     537,   228,     0,     0,    81,    84,    80,    83,     0,   414,
     413,   544,   350,   360,   314,   268,   269,     0,     0,     0,
       0,     0,     0,   176,   172,   488,   487,   494,   493,   323,
     322,   427,   428,   430,   544,     0,   596,   373,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   544,   538,   539,
     500,   499,     0,   405,     0,     0,     0,   429,   431,   364,
     366,   367,   370,   371,   372,   368,   369,   363,   410,   408,
     544,   596,   351,   265,   352,   425,   409,   544,   432
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1045, -1045, -1045,    -1,  -379,   300, -1045, -1045, -1045,   420,
   -1045, -1045, -1045,   406,   555,  -428, -1045,  -676,  -667, -1045,
   -1045, -1045,   175, -1045, -1045,   425,   850, -1045,  1904,  -176,
    -704, -1045,  -890,  1211,  -984,  -794, -1045,   -58, -1045, -1045,
   -1045, -1045, -1045, -1045, -1045, -1045,   112, -1045, -1045, -1045,
     578, -1045,    70, -1045, -1045, -1045, -1045, -1045, -1045,  -560,
    -700, -1045, -1045, -1045,    50,  1080, -1045, -1045, -1045,   107,
   -1045, -1045, -1045, -1045,   -89,  -150,  -824, -1045,   -83,   108,
     249, -1045, -1045, -1045,    55, -1045, -1045,  -240,   172,  -164,
    -191,  -223,  -214,  -678, -1045,  -183, -1045,    -2,   872,  -109,
     443, -1045,  -452,  -777,  -859, -1045,  -572,  -482, -1044,  -985,
    -866,   -52, -1045,    86, -1045,  -207, -1045,   308,   544,  -368,
   -1045, -1045, -1045,  1130, -1045,   -10, -1045, -1045,  -211, -1045,
    -605, -1045, -1045, -1045,  1367,  1536,   -12,   880,   109,   752,
   -1045,  1617,  1894, -1045, -1045, -1045, -1045, -1045, -1045, -1045,
   -1045,  -361
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   315,   105,   628,   107,   108,   109,   333,
     451,   110,   222,   111,   316,   623,   521,   627,   624,   112,
     113,   114,   518,   519,   115,   116,   172,   878,   252,   117,
     249,   118,   655,   257,   119,   120,   270,   121,   122,   123,
     425,   605,   421,   602,   124,   125,   740,   126,   127,   128,
     485,   673,   810,   129,   130,   669,   805,   131,   132,   524,
     828,   133,   134,   710,   711,   183,   250,   646,   136,   137,
     526,   834,   716,   881,   882,   448,   972,   455,   642,   643,
     644,   645,   717,   340,   791,  1093,  1153,  1077,   278,  1011,
    1015,  1071,  1072,  1073,   138,   304,   490,   139,   140,   253,
     254,   459,   460,   659,  1090,  1039,   463,   656,  1112,  1008,
     930,   317,   199,   321,   322,   416,   417,   418,   184,   142,
     143,   144,   145,   185,   147,   169,   170,   580,   437,   761,
     581,   582,   148,   149,   186,   187,   152,   211,   419,   189,
     154,   190,   191,   157,   158,   159,   327,   160,   161,   162,
     163,   164
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     167,   104,   275,   392,   188,   647,   441,   674,   193,   192,
     762,   408,   279,   880,   200,   626,   452,   933,   205,   205,
     195,   215,   217,   220,   221,   255,   414,   426,   668,   826,
     341,  1076,     5,   258,   967,   259,   584,   825,   461,  1006,
     265,    65,   266,   749,   267,    65,   752,   414,   464,  1068,
     325,   764,   280,   284,   286,   288,   289,   290,   977,   978,
    1003,   294,   472,   295,   802,   298,   302,   956,  1037,   461,
     305,   727,  1137,   306,   307,   641,   308,   794,   309,  1113,
     255,   310,   311,   461,   312,   483,   409,   334,   280,   284,
     326,   328,   255,   414,   657,   757,   411,  -234,   475,   352,
     957,   435,   338,  1068,  1118,     5,   803,   358,   435,   728,
     979,  1158,   165,   505,   509,   412,   414,   476,  1152,   404,
     435,   675,   542,   404,   886,  -411,  -416,    74,   339,  -416,
     403,  1138,  1119,  1069,   435,   543,   590,   345,  1063,  -234,
     935,  1115,   465,   590,  1070,   214,   216,     3,  1089,   392,
     335,  1076,   500,  1012,  -411,  -416,   504,  -416,   404,   887,
     804,   167,   544,   171,   400,   401,   402,  -411,   294,   280,
     326,   506,  1036,   168,   285,   813,  1013,   462,  -416,   501,
    -411,  -416,   546,   407,   404,   202,   570,   571,   900,   475,
     284,   902,   348,  -234,   268,   967,   793,   967,  1070,   196,
      74,   989,  -416,   991,   423,  -416,   545,  1038,   462,   428,
     323,   284,   473,   404,   324,   780,   195,   414,   414,   932,
    1095,  1096,   462,  -416,   502,   404,  1062,  -411,   404,   729,
     507,  1014,  -411,  -416,   507,   507,   465,   507,   260,   435,
     712,  -507,  -416,   449,   475,   349,   450,   511,  -571,   350,
    -571,   503,   470,   781,   584,   527,   730,   284,   967,   591,
     967,   205,   291,   936,  1116,   507,  1151,   821,   783,   477,
     478,   755,   880,   320,  1149,   670,   512,   626,   465,   332,
     284,  1033,    23,  1035,   497,   831,  1110,   713,  1052,  1032,
    1054,  1034,  1156,   261,   508,   784,   352,   596,   714,   910,
     223,   356,   106,   357,   358,   995,   414,   499,   361,   498,
     832,   262,   166,   422,   604,   496,   368,   715,   427,   608,
     269,   658,   520,   522,   374,   198,   911,   201,   263,    55,
      23,   292,   528,   928,   529,   530,   531,   533,   535,   536,
      63,   537,   538,   539,   540,   541,  1010,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   393,    83,   394,   697,   584,  -521,
     284,   284,   770,   293,   415,  -520,   284,    55,   610,   284,
     284,   284,   284,   573,   575,   583,   698,   701,    63,   783,
     634,  1117,  -417,   954,   593,   415,  -521,  1029,   465,   597,
     106,   598,  -520,  -417,   641,   330,   702,   194,   766,   769,
     635,   395,   331,    83,   636,   396,  1094,   750,   280,   465,
     612,   614,   165,   348,  -504,   414,   618,   620,   494,   165,
     625,   625,  -417,   629,   637,   694,   631,   638,   753,   329,
     342,   415,  1141,  1142,  1143,  1144,  1145,  1146,   639,   966,
    -503,   256,   660,  -382,  1017,   343,   662,   663,  -417,    23,
    -106,   532,   534,   667,   415,  -417,   344,   640,  -112,   398,
     284,   706,  -382,   256,   814,   816,   349,   733,  -508,  -108,
     350,   396,    40,   296,   300,   667,  -417,  -113,   284,  -509,
     284,   565,   566,   811,   686,   667,   689,   567,   691,   693,
     568,   569,   297,   301,    53,  -417,    55,   572,   574,  -506,
    -417,   280,   413,  -417,  -571,   496,  -571,    63,   592,  -568,
    -505,  -568,  -434,   820,   546,   397,   399,   352,   -77,   626,
    -412,   626,   356,     5,  -570,   358,  -570,   787,  -569,   361,
    -569,   404,    83,  -434,   -48,   613,   141,  -434,   453,   584,
     542,   619,   352,   420,   410,   466,   141,   356,   424,  -412,
     358,  1009,   -48,   543,   361,   415,   415,   883,  1018,   141,
    -434,   141,  -412,   612,   736,   618,   739,   629,   741,   689,
     430,   454,   742,   743,   788,  -412,   680,   284,   682,   284,
     544,   -77,   641,   468,   469,   789,   479,   754,   405,   756,
     482,   489,   796,   583,  -426,   763,   491,   513,   517,   323,
     966,   323,   966,   523,   790,   525,   106,   141,   685,   358,
     256,   256,   256,   256,   564,  -426,  -404,   447,    74,  -426,
     600,   106,  -412,   599,   545,   601,   609,  -412,   595,   634,
     290,   294,   326,   607,   141,   630,   284,   666,   633,   141,
     648,   658,  -426,   615,   415,  -404,   649,   665,   671,   635,
     672,   676,   684,   636,   256,   690,   707,   718,  -404,   666,
    1091,   256,   320,   966,   320,   966,   719,   720,   721,   666,
     725,  -404,   722,   637,  -421,   520,   638,   723,    57,   822,
     770,   824,   625,   625,   256,  -421,  1114,   639,   735,   724,
     738,   -73,   726,   771,   106,   773,   774,   779,   746,   833,
    1127,   475,   256,   141,   801,   792,   640,   583,   806,   829,
     533,   573,   890,   830,  -421,   893,   885,   891,  -404,   894,
    1019,  1020,   466,  -404,   896,   924,   901,   348,   466,   903,
     929,   931,   934,   937,   938,   907,   943,   909,  1114,   948,
    -421,   941,   914,  -316,   153,   917,  -406,  -421,   919,   962,
     920,   414,   414,   922,   153,  1150,   952,   798,   960,   961,
    -133,   745,   971,   415,  -140,  -139,  -109,   153,  -421,   153,
    -316,  -138,  -107,  1157,  -110,  -406,  -135,  1114,   988,  -142,
     349,   280,   141,  -143,   350,  1120,  -137,  -421,  -406,   141,
    -141,   947,  -421,   951,   683,  -421,   953,  -136,   688,   625,
    -144,  -406,   975,   256,  -111,   634,   106,   976,   968,   990,
    1000,  1121,  1002,  1122,  1123,   153,  1045,  1124,  1125,   299,
     299,  1004,  1092,  1023,  1079,   635,  1080,  -106,  1084,   636,
    1085,   352,   353,   256,   532,   572,   356,   256,   357,   358,
    1086,  1087,   153,   361,  -108,  1128,  1148,   153,  -406,   637,
     141,   368,   638,  -406,    57,   974,  1129,   372,   373,   374,
    1119,   632,   819,   639,   197,   141,   256,   942,   487,   907,
     909,   969,   914,   917,   947,   951,   516,  1044,  1040,   970,
     782,   927,   640,   992,   993,  1154,   994,   348,   583,  1109,
     996,   997,  1135,  1147,   998,  1140,   275,   219,   661,   747,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,  1016,   689,   284,   284,     0,     0,     0,
     776,  1024,     0,  1025,     0,     0,     0,  1027,     0,     0,
       0,     0,     0,  1031,   625,   625,   625,   625,   141,     0,
     349,     0,     0,  1065,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   992,  1046,
    1047,   996,  1048,  1049,  1050,  1051,   141,     0,     0,     0,
       0,     0,   141,     0,   812,     0,     0,  1060,     0,   141,
     817,     0,     0,   326,     0,     0,     0,     0,  1067,  -423,
     153,   352,  1074,     0,     0,     0,   356,   153,   357,   358,
    -423,     0,     0,   361,     0,     0,     0,     0,     0,   256,
     256,   368,     0,     0,     0,   256,   256,   372,   373,   374,
       0,     0,     0,     0,     0,     0,  1134,   778,     0,  -423,
       0,     0,     0,     0,  1105,  1106,  1107,  1108,   141,     0,
       0,     0,   141,     0,     0,     0,     0,   466,     0,   466,
     141,     0,     0,     0,   466,  -423,   951,   466,   153,     0,
    1130,  1131,  -423,     0,   921,     0,   326,   923,   808,     0,
       0,     0,   135,   153,     0,  1105,  1106,  1107,  1108,  1130,
    1131,     0,   135,  -423,     0,     0,     0,     0,     0,     0,
       0,  1007,   940,  1136,   689,   135,  1139,   135,     0,   415,
     415,     0,  -423,   946,     0,   950,     0,  -423,     0,     5,
    -423,     0,     0,     0,     0,     0,   731,     0,     0,     0,
       0,     0,   146,    15,     0,     0,    17,     0,     0,   689,
       0,    21,   146,   951,     0,     0,     0,     0,   256,   256,
       0,   175,     0,   135,     0,   146,   153,   146,     0,     0,
     256,    37,   447,     0,     0,     0,     0,     0,    41,   447,
       0,     0,   256,     0,   141,   256,    46,     0,     0,     0,
     135,     0,  1066,    51,   153,   135,     0,     0,     0,     0,
     153,     0,     0,     0,     0,     0,     0,   153,    61,     0,
       0,     0,     0,   146,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,    74,     0,   944,     0,     0,     0,
       0,    80,     0,     0,  1001,     0,     0,    84,   141,     0,
     146,     0,     0,     0,   141,   146,  1111,     0,     0,  1021,
       0,     0,     0,     0,     0,     0,     0,     0,  1026,   135,
       0,     0,  1028,     0,     0,     0,   153,     0,     0,   348,
     153,   884,     0,     0,     0,     0,     0,     0,   153,     0,
     271,     0,     0,     0,    22,    23,   888,   889,   287,     0,
       0,     0,     0,   272,     0,    30,   273,     0,  1111,     0,
      35,     0,     0,     0,     0,     0,     0,     0,    40,   146,
    1061,   141,     0,   141,     0,     0,     0,     0,   141,     0,
       0,   141,   349,     0,     0,     0,   350,     0,   141,     0,
      53,   141,    55,     0,    57,     0,   963,  1111,   135,   964,
       0,   274,     0,    63,     0,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   141,   256,     0,     0,
       0,     0,    79,     0,     0,    81,     0,   141,    83,   141,
       0,     0,     0,   352,   353,     0,   354,   355,   356,   150,
     357,   358,     0,     0,     0,   361,     0,     0,   146,   150,
       0,     0,   153,   368,     0,   146,     0,     0,     0,   372,
     373,   374,   150,     0,   150,     0,   135,     0,     0,   447,
     447,     0,     0,   447,   447,     0,     0,     0,    98,     0,
       0,   135,     0,     0,   965,     0,     0,     0,     0,     0,
       0,  1075,     0,     0,     0,   431,   434,   436,   440,  1081,
       0,   447,     0,   447,     0,     0,   153,     0,     0,     0,
     150,     0,   153,     0,     0,     0,   146,     0,   348,   141,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,   146,     0,     0,     0,     0,     0,   150,   141,   467,
       0,     0,   150,     0,     0,     0,   471,     0,     0,     0,
       0,     0,     0,   141,   135,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,     0,   141,     0,     0,   481,
       0,   349,     0,     0,     0,   350,     0,     0,     0,   153,
       0,   153,   135,     0,     0,     0,   153,   492,   135,   153,
       0,     0,     0,     0,     0,   135,   153,     0,     0,   153,
       0,     0,     0,     0,   146,     0,   150,     0,   151,     0,
       0,  1075,     0,     0,   141,     0,     0,     0,   151,     0,
       0,     0,   352,   353,   153,     0,   355,   356,     0,   357,
     358,   151,   146,   151,   361,   153,     0,   153,   146,     0,
       0,     0,   368,     0,     0,   146,     0,     0,   372,   373,
     374,     0,     0,     0,   135,     0,     0,     0,   135,     0,
       0,     0,     0,     0,     0,     0,   135,     0,     0,     0,
     141,   141,   141,   141,     0,     0,     0,     0,     0,   151,
       0,     0,     0,     0,     0,   150,     0,     0,   594,   155,
       0,     0,   150,     0,     0,     0,   141,   141,     0,   155,
       0,     0,     0,     0,   146,     0,   151,     0,   146,     0,
       0,   151,   155,     0,   155,   271,   146,     0,   616,    22,
      23,     0,   621,     0,     0,     0,     0,   153,   272,     0,
      30,   273,     0,     0,   153,    35,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,   153,     0,     0,     0,
       0,   664,     0,   150,     0,     0,     0,     0,     0,     0,
     155,   153,     0,     0,     0,    53,     0,    55,   150,   224,
     153,     0,     0,     0,   153,   151,   274,     0,    63,     0,
     135,     0,     0,   225,   226,     0,   227,   155,     0,     0,
       0,   228,   155,     0,     0,     0,     0,    79,     0,   229,
      81,     0,     0,    83,     0,   230,     0,     0,     0,     0,
       0,   231,     0,     0,     0,   232,     0,     0,   233,     0,
       0,     0,   153,     0,     0,     0,   234,     0,     0,     0,
     146,     0,   235,   236,   135,     0,     0,     0,     0,   237,
     135,   150,     0,     0,     0,     0,     0,     0,   238,     0,
       0,     0,     0,     0,   151,     0,   155,   239,   240,     0,
     241,   151,   242,     0,   243,     0,     0,   244,     0,   150,
       0,   245,   456,     0,   246,   150,     0,   247,   153,   153,
     153,   153,   150,     0,   146,     0,     0,     0,     0,     0,
     146,     0,     0,     0,   758,   760,     0,     0,     0,     0,
     765,   768,     0,     0,   153,   153,     0,   135,     0,   135,
       0,     0,     0,     0,   135,     0,     0,   135,     0,     0,
       0,     0,   151,     0,   135,     0,     0,   135,     0,     0,
       0,     0,     0,   457,     0,   155,     0,   151,     0,     0,
       0,   150,   155,     0,     0,   150,     0,     0,     0,     0,
       0,     0,   135,   150,     0,     0,     0,   146,     0,   146,
       0,     0,     0,   135,   146,   135,   156,   146,     0,     0,
       0,     0,     0,     0,   146,     0,   156,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,   155,     0,     0,     0,     0,     0,     0,
     151,     0,     0,   146,     0,   146,   248,     0,   155,     0,
       0,     0,     0,   898,   899,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   904,     0,   156,   151,     0,
       0,     0,     0,     0,   151,     0,     0,   915,     0,     0,
     918,   151,     0,   303,     0,   135,     0,     0,   348,     0,
       0,     0,   135,     0,   156,     0,     0,   150,     0,   156,
       0,     0,     0,     0,   135,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
       0,   155,     0,     0,     0,     0,     0,     0,   135,     0,
       0,     0,   135,     0,     0,   146,   336,     0,   337,     0,
     151,   349,   146,     0,   151,   350,     0,     0,     0,   155,
       0,   150,   151,     0,   146,   155,     0,   150,     0,     0,
       0,     0,   155,   156,     0,     0,     0,     0,     0,   146,
       0,     0,     0,     0,     0,     0,   351,     0,   146,     0,
     135,     0,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   353,     0,   354,   355,   356,   303,   357,
     358,   359,     0,   360,   361,   362,   363,     0,     0,   365,
     366,   367,   368,   369,   303,   371,   429,     0,   372,   373,
     374,   155,     0,     0,   150,   155,   150,     0,     0,   375,
     146,   150,     0,   155,   150,     0,   135,   135,   135,   135,
       0,   150,   156,     0,   150,     0,     0,     0,     0,   156,
       0,     0,  1022,     0,     0,   458,     0,     0,     0,     0,
       0,     0,   135,   135,     0,     0,   151,     0,     0,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     150,   474,   150,     0,     0,     0,   146,   146,   146,   146,
       0,     0,     0,   827,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,     0,
     156,     0,   146,   146,  -246,     0,     0,     0,  -246,  -246,
     151,     0,     0,     0,     0,   156,   151,  -246,     0,  -246,
    -246,     0,     0,     0,  -246,     0,     0,     0,   391,     0,
       0,  -568,  -246,  -568,     0,  -246,     0,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -246,     0,  -246,     0,  -246,     0,
    -246,  -246,   150,  -246,     0,  -246,     0,  -246,     0,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   150,     0,   151,     0,   151,  -246,     0,   156,  -246,
     151,   155,  -246,   151,     0,     0,   150,   155,     0,     0,
     151,     0,     0,   151,     0,   150,     0,     0,     0,   150,
       0,     0,     0,     0,     0,   603,   156,     0,     0,   606,
       0,     0,   156,     0,     0,     0,     0,     0,   151,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   151,
       0,   151,  -246,     0,     0,     0,     0,     0,  -246,     0,
       0,   458,     0,     0,     0,     0,     0,   150,     0,     0,
       0,     0,     0,     0,   155,     0,   155,     0,     0,     0,
       0,   155,     0,     0,   155,     0,     0,     0,     0,     0,
       0,   155,     0,     0,   155,     0,     0,     0,   156,     0,
       0,     0,   156,     0,     0,     0,     0,     0,     0,     0,
     156,     0,     0,     0,     0,     0,     0,     0,     0,   155,
       0,   696,     0,   150,   150,   150,   150,     0,     0,   709,
     155,     0,   155,     0,     0,     0,     0,   224,     0,     0,
       0,   151,     0,     0,     0,     0,     0,     0,   151,   150,
     150,   225,   226,     0,   227,     0,     0,     0,     0,   228,
     151,     0,     0,     0,     0,     0,     0,   229,     0,     0,
       0,     0,     0,   230,     0,   151,     0,     0,     0,   231,
       0,     0,     0,   232,   151,     0,   233,     0,   151,     0,
       0,     0,     0,     0,   234,     0,     0,     0,     0,     0,
     235,   236,     0,     0,     0,     0,   748,   237,     0,   751,
       0,     0,     0,     0,     0,     0,   238,     0,     0,     0,
       0,     0,   155,     0,   156,   239,   240,     0,   241,   155,
     242,     0,   243,   348,     0,   244,   151,     0,     0,   245,
       0,   155,   246,     0,     0,   247,   271,     0,   786,     0,
      22,    23,   458,     0,     0,     0,   155,     0,     0,   272,
       0,    30,   273,     0,     0,   155,    35,     0,     0,   155,
       0,     0,     0,     0,    40,     0,   809,     0,   156,     0,
     303,     0,     0,     0,   156,     0,   349,     0,     0,     0,
     350,     0,   151,   151,   151,   151,    53,     0,    55,   404,
      57,   807,   963,     0,     0,   964,     0,   274,     0,    63,
       0,     0,     0,     0,     0,     0,     0,   155,   151,   151,
       0,   879,     0,     0,     0,     0,     0,     0,    79,     0,
       0,    81,     0,     0,    83,     0,     0,   352,   353,     0,
     354,   355,   356,     0,   357,   358,     0,     0,     0,   361,
       0,   156,     0,   156,     0,     0,   367,   368,   156,     0,
     371,   156,     0,   372,   373,   374,     0,     0,   156,     0,
       0,   156,     0,   155,   155,   155,   155,     0,     0,     0,
       0,     0,     0,   925,    98,     0,   926,     0,     0,   458,
    1053,     0,     0,     0,     0,     0,   156,     0,     0,   155,
     155,     0,     0,     0,     0,     0,     0,   156,     0,   156,
       0,   809,     0,     0,     0,     0,     0,     0,     0,     0,
    1132,     0,     5,   276,     6,     7,     8,     9,    10,    11,
       0,     0,     0,   173,     0,   709,    15,    16,     0,    17,
       0,   174,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   175,     0,     0,     0,    32,   176,
     177,   973,     0,   178,    37,     0,     0,     0,    39,     0,
       0,    41,     0,     0,     0,    43,    44,     0,     0,    46,
      47,     0,    48,    49,     0,    50,    51,     0,   346,     0,
       0,     0,    54,     0,    56,   347,    58,     0,     0,   156,
       0,    61,   179,     0,     0,     0,   156,   348,   432,     0,
      68,    69,    70,    71,    72,   180,     0,    74,   156,     0,
      76,     0,     0,   433,    80,     0,     0,    82,     0,     0,
      84,     0,     0,   156,     0,     0,     0,     0,    87,     0,
       0,     0,   156,     0,     0,     0,   156,     0,     0,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,     0,
     349,     0,     0,    93,   350,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,    95,    96,   277,     0,
     879,     0,    99,     0,   181,     0,   101,     0,   182,  1133,
       0,   103,     0,     0,   156,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   353,     0,   354,   355,   356,     0,   357,   358,
     359,     0,   360,   361,   362,   363,   364,     0,   365,   366,
     367,   368,   369,   370,   371,     0,     0,   372,   373,   374,
       0,   404,     0,     0,     0,     0,     0,     0,   375,     0,
     156,   156,   156,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    -2,     4,     0,     5,     0,     6,
       7,     8,     9,    10,    11,     0,   156,   156,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,  -596,     0,    12,    13,
      14,    15,    16,  -596,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,  -596,    27,    28,  -596,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,  -596,    63,
      64,    65,  -596,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,  -596,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -596,
    -596,    90,  -596,  -596,  -596,  -596,  -596,  -596,  -596,     0,
    -596,  -596,  -596,  -596,  -596,     0,  -596,  -596,  -596,  -596,
    -596,  -596,  -596,  -596,    98,  -596,  -596,  -596,     0,   100,
    -596,   101,     0,   102,     0,   313,  -596,     5,   276,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,   277,    98,     0,     0,    99,     0,   100,
     314,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
     495,   101,     0,   102,     0,   514,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
     515,   101,     0,   102,     0,   313,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
     314,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
      57,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
     695,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
     329,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,   611,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,   617,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,   906,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,   908,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,   913,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,   916,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,   939,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,    36,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,   945,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,     4,   103,     5,     0,     6,
       7,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,     0,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,    27,    28,     0,    29,
       0,    30,    31,    32,    33,    34,    35,     0,   949,    37,
     -75,     0,    38,    39,    40,     0,    41,  -260,     0,    42,
      43,    44,     0,    45,    46,    47,   -46,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,    56,
       0,    58,    59,  -260,   -46,    60,    61,    62,     0,    63,
      64,    65,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    74,    75,     0,    76,    77,    78,    79,    80,
       0,    81,    82,   -75,    83,    84,     0,     0,    85,     0,
      86,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,    98,     0,     0,    99,     0,   100,
       0,   101,     0,   102,     0,   795,   103,     5,   276,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,   277,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,   218,    23,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,    55,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,    63,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,    83,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     0,   103,     5,   276,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,   281,   282,     0,    80,   318,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,   319,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,   277,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     0,   103,     5,   276,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,   281,   282,     0,    80,   318,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,   277,     0,     0,     0,    99,     0,   181,     0,   101,
     679,   182,     0,     0,   103,     5,   276,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,   281,   282,     0,    80,   318,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,   277,     0,     0,     0,    99,     0,   181,     0,   101,
     681,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,   576,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,     0,   178,    37,     0,   577,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,   578,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
     579,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
       0,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
     281,   282,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,   283,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     0,
     103,     5,   276,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
     281,   282,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,   277,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,   797,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,   281,   282,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   181,     0,   101,     0,   182,     0,     5,   103,     6,
       7,     8,   207,    10,    11,   208,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   209,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,   210,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,   212,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,   213,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     0,   103,     5,   276,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,   213,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,   277,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,   281,   282,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
       0,     0,   103,     5,   276,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,   277,
       0,     0,     0,    99,     0,   181,   677,   101,     0,   182,
       0,     0,   103,     5,   276,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,   277,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
     687,     0,   103,     5,   276,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,   277,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
    1064,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,   213,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,   255,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   100,     0,   101,     0,   182,     0,     5,   103,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,   264,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     0,   103,     5,   276,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,   277,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
     207,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   209,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,   210,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
     692,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,   823,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     0,
     103,     5,   276,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,   650,     0,   175,     0,     0,     0,    32,   176,   177,
       0,     0,   178,    37,     0,     0,     0,   651,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
     652,    70,    71,    72,   653,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,   277,     0,     0,
       0,    99,     0,   181,     0,   101,     0,  1005,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,  1030,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   181,     0,   101,     0,   182,     0,     0,   103,     5,
     276,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,     0,
     178,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,   277,     0,     0,     0,    99,
       0,   181,     0,   101,     0,  1005,     0,     0,   103,     5,
     276,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,     0,
     987,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,   277,     0,     0,     0,    99,
       0,   181,     0,   101,     0,   182,     0,     5,   103,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
     203,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   204,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,     0,   178,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,    99,     0,   100,     0,   101,     0,   182,
       0,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,   622,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,   650,
       0,   175,     0,     0,     0,    32,   176,   177,     0,     0,
     178,    37,     0,     0,     0,   651,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,   652,    70,
      71,    72,   653,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   181,     0,   101,     0,   654,     0,     5,   103,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   654,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   734,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,     0,   737,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
       0,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,     0,   981,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    28,
       0,   175,     0,     0,     0,    32,   176,   177,     0,     0,
     982,    37,     0,     0,     0,    39,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,   180,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   181,     0,   101,     0,   182,     0,     5,   103,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,     0,   984,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,     0,    99,     0,   181,
       0,   101,     0,   182,     0,     5,   103,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   985,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
       0,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,     0,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,    90,
      91,    92,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,    95,
      96,    97,     0,     0,     0,    99,     0,   181,     0,   101,
       0,   182,     0,     5,   103,     6,     7,     8,     9,    10,
      11,     0,     0,     0,   173,     0,     0,    15,    16,     0,
      17,     0,   174,     0,     0,    21,     0,     0,     0,     0,
       0,     0,     0,    28,     0,   175,     0,     0,     0,    32,
     176,   177,     0,     0,   986,    37,     0,     0,     0,    39,
       0,     0,    41,     0,     0,     0,    43,    44,     0,     0,
      46,    47,     0,    48,    49,     0,    50,    51,     0,     0,
       0,     0,     0,    54,     0,    56,     0,    58,     0,     0,
       0,     0,    61,   179,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,   180,     0,    74,     0,
       0,    76,     0,     0,     0,    80,     0,     0,    82,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,     0,    99,     0,   181,     0,   101,     0,   182,
       0,     5,   103,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,     0,   987,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,    95,    96,    97,     0,     0,
       0,    99,     0,   181,     0,   101,     0,   182,     0,     5,
     103,     6,     7,     8,     9,    10,    11,     0,     0,     0,
     173,     0,     0,    15,    16,     0,    17,     0,   174,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,   650,
       0,   175,     0,     0,     0,    32,   176,   177,     0,     0,
     178,    37,     0,     0,     0,   651,     0,     0,    41,     0,
       0,     0,    43,    44,     0,     0,    46,    47,     0,    48,
      49,     0,    50,    51,     0,     0,     0,     0,     0,    54,
       0,    56,     0,    58,     0,     0,     0,     0,    61,   179,
       0,     0,     0,     0,     0,     0,     0,    68,   652,    70,
      71,    72,   653,     0,    74,     0,     0,    76,     0,     0,
       0,    80,     0,     0,    82,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,    90,    91,    92,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,    95,    96,    97,     0,     0,     0,    99,
       0,   181,     0,   101,     0,  1088,     0,     5,   103,     6,
       7,     8,     9,    10,    11,     0,     0,     0,   173,     0,
       0,    15,    16,     0,    17,     0,   174,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   175,
       0,     0,     0,    32,   176,   177,     0,     0,   178,    37,
       0,     0,     0,    39,     0,     0,    41,     0,     0,     0,
      43,    44,     0,     0,    46,    47,     0,    48,    49,     0,
      50,    51,     0,     0,     0,     0,     0,    54,     0,    56,
       0,    58,     0,     0,     0,     0,    61,   179,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
     180,     0,    74,     0,     0,    76,     0,     0,     0,    80,
       0,     0,    82,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   835,     0,   836,    88,
      89,    90,    91,    92,     0,     0,     0,   837,    93,     0,
       0,     0,   838,   226,   839,   840,     0,     0,    94,     0,
     841,    95,    96,    97,     0,     0,     0,    99,   229,     0,
     175,   101,     0,  1088,   842,     0,   103,     0,     0,     0,
     843,     0,     0,     0,   232,     0,     0,   844,     0,   845,
       0,     0,     0,     0,     0,   846,     0,     0,     0,     0,
       0,   847,   848,     0,     0,     0,     0,     0,   237,     0,
       0,     0,     0,     0,     0,     0,     0,   849,     0,     0,
       0,     0,     0,     0,     0,     0,   239,   240,     0,   850,
       0,   242,     0,   851,     0,     0,   852,     0,     0,     0,
     853,     0,     0,   246,     0,     0,   854,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   377,   378,   379,   380,
     381,     0,     0,   384,   385,   386,   387,     0,   389,   390,
     855,   856,   857,   858,   859,     0,     0,   860,     0,     0,
       0,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870,   871,     0,   872,     0,     0,   873,   874,   875,   876,
       0,     5,   877,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,    28,     0,   175,     0,     0,     0,    32,   176,   177,
       0,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,     0,     0,     0,     0,
       0,     0,     0,    88,    89,    90,    91,    92,     0,     0,
       0,     0,  -528,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,   391,    96,    97,  -568,     0,
    -568,    99,     0,   181,     0,   101,     0,   182,     5,   276,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,   348,    17,     0,   174,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,    28,     0,
     175,     0,     0,     0,    32,   176,   177,     0,     0,   178,
      37,     0,     0,     0,    39,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,   349,    54,     0,
      56,   350,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,   180,     0,    74,     0,     0,    76,     0,     0,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,  -425,     0,     0,   352,   353,
       0,   354,   355,   356,     0,   357,   358,   359,     0,     0,
     361,     0,    90,     0,     0,     0,  -425,   367,   368,     0,
    -425,   371,     0,     0,   372,   373,   374,     0,     0,     0,
       0,     0,     0,     0,   277,   375,     0,     0,     0,     0,
     181,     0,   101,  -425,  1005,     5,     0,     6,     7,     8,
       9,    10,    11,     0,     0,     0,   173,     0,     0,    15,
      16,     0,    17,     0,   174,     0,     0,    21,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   175,     0,     0,
       0,    32,   176,   177,     0,     0,   178,    37,     0,     0,
       0,    39,     0,     0,    41,     0,     0,     0,    43,    44,
    -407,     0,    46,    47,     0,    48,    49,     0,    50,    51,
       0,     0,     0,     0,     0,    54,     0,    56,     0,    58,
       0,     0,     0,     0,    61,   179,     0,     0,     0,  -407,
       0,     0,     0,    68,    69,    70,    71,    72,   180,     0,
      74,     0,  -407,    76,     0,     0,     0,    80,     0,     0,
      82,     0,     0,    84,     0,  -407,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,    90,
       6,     7,     8,     9,    10,    11,     0,     0,     0,   173,
       0,     0,    15,    16,     0,    17,     0,   174,     0,     0,
      21,    97,  -407,     0,     0,     0,     0,  -407,    28,   101,
     175,  1088,     0,     0,    32,   176,   177,     0,     0,   178,
      37,     0,     0,     0,    39,     0,     0,    41,     0,     0,
       0,    43,    44,     0,     0,    46,    47,     0,    48,    49,
       0,    50,    51,     0,     0,     0,     0,     0,    54,     0,
      56,     0,    58,     0,     0,     0,     0,    61,   179,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,   180,     0,    74,     0,     0,    76,     0,     0,     0,
      80,     0,     0,    82,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     5,    90,     6,     7,     8,     9,    10,    11,     0,
       0,     0,   173,     0,     0,    15,    16,     0,    17,     0,
     174,     0,     0,    21,    97,     0,     0,     0,     0,     0,
     181,    28,   101,   175,   182,     0,     0,    32,   176,   177,
       0,     0,   178,    37,     0,     0,     0,    39,     0,     0,
      41,     0,     0,     0,    43,    44,     0,     0,    46,    47,
       0,    48,    49,     0,    50,    51,     0,     0,     0,     0,
       0,    54,     0,    56,     0,    58,     0,     0,     0,     0,
      61,   179,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,   180,     0,    74,     0,     0,    76,
       0,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,    90,     6,     7,     8,     9,
      10,    11,     0,     0,     0,   173,     0,     0,    15,    16,
       0,    17,     0,   174,     0,     0,    21,    97,     0,     0,
       0,     0,     0,   181,    28,   101,   175,   654,     0,     0,
      32,   176,   177,     0,     0,   178,    37,     0,     0,     0,
      39,     0,     0,    41,     0,     0,     0,    43,    44,     0,
       0,    46,    47,     0,    48,    49,     0,    50,    51,     0,
       0,     0,     0,     0,    54,     0,    56,     0,    58,     0,
       0,     0,     0,    61,   179,     0,   224,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,   180,     0,    74,
     225,   226,    76,   227,     0,     0,    80,     0,   228,    82,
       0,     0,    84,     0,     0,     0,   229,     0,     0,     0,
       0,     0,   230,     0,     0,     0,     0,     0,   231,     0,
       0,     0,   232,     0,     0,   233,     0,     0,    90,     0,
       0,     0,     0,   234,     0,     0,     0,     0,     0,   235,
     236,     0,     0,     0,     0,     0,   237,     0,     0,     0,
       0,     0,     0,     0,     0,   238,     0,     0,   101,     0,
     182,     0,     0,     0,   239,   240,     0,   241,   224,   242,
       0,   243,     0,     0,   244,     0,     0,     0,   245,     0,
       0,   246,   225,   226,   247,   227,     0,     0,     0,     0,
     228,     0,     0,     0,     0,     0,     0,     0,   229,     0,
       0,     0,     0,     0,   230,     0,     0,     0,   271,     0,
     231,     0,    22,    23,   232,     0,     0,   233,     0,     0,
       0,   272,     0,    30,   273,   234,     0,     0,    35,     0,
       0,   235,   236,     0,     0,     0,    40,     0,   237,     0,
     251,     0,     0,     0,     0,     0,     0,   238,     0,     0,
       0,     0,     0,     0,     0,     0,   239,   240,    53,   241,
      55,   242,    57,   243,   963,  1042,   244,   964,     0,   274,
     245,    63,     0,   246,   837,     0,   247,     0,     0,   225,
     226,   839,   227,     0,     0,     0,     0,   228,     0,     0,
      79,     0,     0,    81,     0,   229,    83,     0,     0,     0,
       0,   842,     0,     0,     0,     0,     0,   231,     0,     0,
       0,   232,     0,     0,   233,     0,   845,     0,     0,     0,
       0,     0,   234,     0,     0,     0,     0,     0,   847,   236,
       0,     0,   785,     0,     0,   237,     0,     0,     0,     0,
       0,     0,     0,     0,   238,     0,    98,     0,     0,     0,
       0,     0,  1055,   239,   240,   346,   241,     0,   242,     0,
    1043,     0,   347,   852,     0,     0,     0,   245,     0,     0,
     246,     0,     0,   247,   348,     0,     0,     0,     0,     0,
       0,     0,   446,   377,   378,   379,   380,   381,     0,     0,
     384,   385,   386,   387,     0,   389,   390,   855,   856,   857,
     858,   859,     0,     0,   860,     0,     0,     0,   861,   862,
     863,   864,   865,   866,   867,   868,   869,   870,   871,     0,
     872,     0,     0,   873,   874,   875,   876,   349,     0,     0,
       0,   350,     0,     0,     0,   346,     0,     0,     0,     0,
     445,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,     0,     0,     0,     0,     0,
       0,     0,   351,   446,   377,   378,   379,   380,   381,     0,
       0,   384,   385,   386,   387,     0,   389,   390,   352,   353,
       0,   354,   355,   356,     0,   357,   358,   359,     0,   360,
     361,   362,   363,   364,     0,   365,   366,   367,   368,   369,
     370,   371,     0,     0,   372,   373,   374,   349,   404,     0,
       0,   350,     0,     0,     0,   375,     0,   346,     0,     0,
     905,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
       0,     0,   351,   446,   377,   378,   379,   380,   381,     0,
       0,   384,   385,   386,   387,     0,   389,   390,   352,   353,
       0,   354,   355,   356,     0,   357,   358,   359,     0,   360,
     361,   362,   363,   364,     0,   365,   366,   367,   368,   369,
     370,   371,     0,     0,   372,   373,   374,     0,   404,   349,
       0,     0,     0,   350,     0,   375,     0,   346,     0,     0,
       0,     0,   912,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
       0,     0,     0,     0,   351,   446,   377,   378,   379,   380,
     381,     0,     0,   384,   385,   386,   387,     0,   389,   390,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,     0,     0,   372,   373,   374,   349,
     404,     0,     0,   350,     0,     0,     0,   375,     0,   346,
       0,     0,  1056,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   348,     0,
       0,     0,     0,     0,   351,   446,   377,   378,   379,   380,
     381,     0,     0,   384,   385,   386,   387,     0,   389,   390,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,     0,     0,   372,   373,   374,     0,
     404,   349,     0,     0,     0,   350,     0,   375,     0,   346,
       0,     0,     0,     0,  1057,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   348,     0,
       0,     0,     0,     0,     0,     0,   351,   446,   377,   378,
     379,   380,   381,     0,     0,   384,   385,   386,   387,     0,
     389,   390,   352,   353,     0,   354,   355,   356,     0,   357,
     358,   359,     0,   360,   361,   362,   363,   364,     0,   365,
     366,   367,   368,   369,   370,   371,     0,     0,   372,   373,
     374,   349,   404,     0,     0,   350,     0,     0,     0,   375,
       0,   346,     0,     0,  1058,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,     0,     0,     0,     0,     0,   351,   446,   377,   378,
     379,   380,   381,     0,     0,   384,   385,   386,   387,     0,
     389,   390,   352,   353,     0,   354,   355,   356,     0,   357,
     358,   359,     0,   360,   361,   362,   363,   364,     0,   365,
     366,   367,   368,   369,   370,   371,     0,     0,   372,   373,
     374,     0,   404,   349,     0,     0,     0,   350,     0,   375,
       0,   346,     0,     0,     0,     0,  1059,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,     0,     0,     0,     0,     0,     0,     0,   351,   446,
     377,   378,   379,   380,   381,     0,     0,   384,   385,   386,
     387,     0,   389,   390,   352,   353,     0,   354,   355,   356,
       0,   357,   358,   359,     0,   360,   361,   362,   363,   364,
       0,   365,   366,   367,   368,   369,   370,   371,     0,     0,
     372,   373,   374,   349,   404,     0,     0,   350,     0,     0,
       0,   375,     0,   346,     0,     0,  1082,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,     0,     0,   351,   446,
     377,   378,   379,   380,   381,     0,     0,   384,   385,   386,
     387,     0,   389,   390,   352,   353,     0,   354,   355,   356,
       0,   357,   358,   359,     0,   360,   361,   362,   363,   364,
       0,   365,   366,   367,   368,   369,   370,   371,     0,     0,
     372,   373,   374,     0,   404,   349,     0,     0,     0,   350,
       0,   375,     0,   346,     0,     0,     0,     0,  1083,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,   438,     0,     0,     0,     0,     0,     0,
     351,   446,   377,   378,   379,   380,   381,     0,   439,   384,
     385,   386,   387,     0,   389,   390,   352,   353,     0,   354,
     355,   356,     0,   357,   358,   359,     0,   360,   361,   362,
     363,   364,     0,   365,   366,   367,   368,   369,   370,   371,
       0,     0,   372,   373,   374,   349,   404,     0,     0,   350,
       0,     0,     0,   375,     0,   346,     0,     0,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,     0,   435,     0,     0,   442,
     351,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   353,     0,   354,
     355,   356,     0,   357,   358,   359,     0,   360,   361,   362,
     363,   364,   443,   365,   366,   367,   368,   369,   370,   371,
       0,     0,   372,   373,   374,     0,   404,   349,     0,     0,
       0,   350,     0,   375,     0,     0,     0,   346,   703,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
     271,   704,   351,     0,    22,    23,     0,     0,     0,     0,
       0,     0,     0,   272,     0,    30,   273,     0,   352,   353,
      35,   354,   355,   356,     0,   357,   358,   359,    40,   360,
     361,   362,   363,   364,   705,   365,   366,   367,   368,   369,
     370,   371,     0,   444,   372,   373,   374,     0,     0,   349,
      53,     0,    55,   350,    57,   375,   963,   346,     0,   964,
       0,   274,     0,    63,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,   767,     0,     0,
       0,     0,    79,     0,   351,    81,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,     0,     0,   372,   373,   374,   349,
       0,     0,     0,   350,     0,     0,     0,   375,    98,   346,
       0,     0,     0,     0,  1103,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   348,     0,
     435,     0,   271,     0,   351,     0,    22,    23,     0,     0,
       0,     0,     0,     0,   406,   272,     0,    30,   273,     0,
     352,   353,    35,   354,   355,   356,     0,   357,   358,   359,
      40,   360,   361,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,     0,     0,   372,   373,   374,     0,
     404,   349,    53,     0,    55,   350,    57,   375,   963,   346,
       0,   964,     0,   274,     0,    63,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   348,   255,
       0,     0,   168,     0,    79,     0,   351,    81,     0,     0,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   353,     0,   354,   355,   356,     0,   357,
     358,   359,     0,   360,   361,   362,   363,   364,     0,   365,
     366,   367,   368,   369,   370,   371,     0,     0,   372,   373,
     374,   349,     0,     0,     0,   350,     0,     0,     0,   375,
      98,   346,     0,     0,     0,     0,  1104,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,   585,     0,     0,     0,     0,   351,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   586,     0,     0,     0,
       0,     0,   352,   353,     0,   354,   355,   356,     0,   357,
     358,   359,     0,   360,   361,   362,   363,   364,     0,   365,
     366,   367,   368,   369,   370,   371,     0,     0,   372,   373,
     374,     0,   404,   349,     0,     0,     0,   350,     0,   375,
       0,   346,     0,     0,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,   587,     0,     0,     0,     0,     0,     0,   351,     0,
       0,     0,     0,     0,     0,     0,   588,     0,     0,     0,
       0,     0,     0,     0,   352,   353,     0,   354,   355,   356,
       0,   357,   358,   359,     0,   360,   361,   362,   363,   364,
       0,   365,   366,   367,   368,   369,   370,   371,     0,     0,
     372,   373,   374,   349,     0,     0,     0,   350,     0,     0,
       0,   375,   346,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   348,   759,     0,     0,     0,     0,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,     0,   354,   355,   356,
       0,   357,   358,   359,     0,   360,   361,   362,   363,   364,
       0,   365,   366,   367,   368,   369,   370,   371,     0,     0,
     372,   373,   374,     0,   349,     0,     0,     0,   350,     0,
       0,   375,   346,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   348,     0,     0,     0,     0,     0,     0,     0,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   352,   353,     0,   354,   355,
     356,     0,   357,   358,   359,     0,   360,   361,   362,   363,
     364,     0,   365,   366,   367,   368,   369,   370,   371,     0,
       0,   372,   373,   374,   349,   404,     0,     0,   350,     0,
       0,     0,   375,     0,   346,     0,     0,   777,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   348,     0,     0,     0,   271,     0,   351,
       0,    22,    23,     0,     0,     0,     0,     0,     0,     0,
     272,     0,    30,   273,     0,   352,   353,    35,   354,   355,
     356,     0,   357,   358,   359,    40,   360,   361,   362,   363,
     364,     0,   365,   366,   367,   368,   369,   370,   371,     0,
       0,   372,   373,   374,     0,   404,   349,    53,     0,    55,
     350,   329,   375,   963,     0,     0,   964,     0,   274,     0,
      63,     0,     0,     0,   346,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,   435,     0,    79,
       0,   351,    81,   348,     0,    83,     0,     0,   958,     0,
       0,     0,     0,     0,     0,     0,     0,   352,   353,     0,
     354,   355,   356,     0,   357,   358,   359,     0,   360,   361,
     362,   363,   364,     0,   365,   366,   367,   368,   369,   370,
     371,   959,     0,   372,   373,   374,     0,     0,     0,     0,
       0,     0,   815,     0,   375,    98,   349,     0,     0,     0,
     350,     0,     0,     0,   346,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   348,     0,     0,     0,     0,     0,     0,
       0,   351,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   352,   353,     0,
     354,   355,   356,     0,   357,   358,   359,     0,   360,   361,
     362,   363,   364,     0,   365,   366,   367,   368,   369,   370,
     371,     0,     0,   372,   373,   374,   349,     0,     0,     0,
     350,     0,     0,     0,   375,     0,   346,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   348,     0,     0,     0,     0,
       0,   351,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   352,   353,     0,
     354,   355,   356,     0,   357,   358,   359,     0,   360,   361,
     362,   363,   364,     0,   365,   366,   367,   368,   369,   370,
     371,     0,     0,   372,   373,   374,     0,   480,   349,     0,
       0,     0,   350,     0,   375,     0,   346,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   348,     0,     0,     0,     0,
       0,     0,     0,   351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     353,     0,   354,   355,   356,     0,   357,   358,   359,     0,
     360,   361,   362,   363,   364,     0,   365,   366,   367,   368,
     369,   370,   371,     0,   484,   372,   373,   374,   349,     0,
       0,     0,   350,     0,     0,     0,   375,   346,     0,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
       0,     0,     0,   351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     353,     0,   354,   355,   356,     0,   357,   358,   359,     0,
     360,   361,   362,   363,   364,     0,   365,   366,   367,   368,
     369,   370,   371,     0,   486,   372,   373,   374,     0,   349,
       0,     0,     0,   350,     0,     0,   375,   346,     0,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
       0,     0,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,     0,   488,   372,   373,   374,   349,
       0,     0,     0,   350,     0,     0,     0,   375,   346,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   348,     0,     0,
       0,     0,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,     0,   493,   372,   373,   374,     0,
     349,     0,     0,     0,   350,     0,     0,   375,   346,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   348,     0,     0,
       0,     0,     0,     0,   510,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   353,     0,   354,   355,   356,     0,   357,   358,
     359,     0,   360,   361,   362,   363,   364,     0,   365,   366,
     367,   368,   369,   370,   371,     0,     0,   372,   373,   374,
     349,     0,     0,     0,   350,     0,     0,     0,   375,   346,
       0,     0,     0,   589,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   348,     0,
       0,     0,     0,     0,     0,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   353,     0,   354,   355,   356,     0,   357,   358,
     359,     0,   360,   361,   362,   363,   364,     0,   365,   366,
     367,   368,   369,   370,   371,     0,     0,   372,   373,   374,
       0,   349,     0,     0,     0,   350,     0,     0,   375,     0,
     346,   699,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,     0,     0,     0,     0,     0,   351,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   353,     0,   354,   355,   356,     0,   357,
     358,   359,     0,   360,   361,   362,   363,   364,     0,   365,
     366,   367,   368,   369,   370,   371,     0,     0,   372,   373,
     374,     0,   349,     0,     0,   678,   350,     0,     0,   375,
     346,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,     0,     0,     0,     0,     0,     0,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,   353,     0,   354,   355,   356,     0,
     357,   700,   359,     0,   360,   361,   362,   363,   364,     0,
     365,   366,   367,   368,   369,   370,   371,     0,     0,   372,
     373,   374,   349,     0,     0,     0,   350,     0,     0,     0,
     375,   346,     0,     0,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,     0,     0,     0,     0,     0,     0,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,   353,     0,   354,   355,   356,     0,
     357,   358,   359,     0,   360,   361,   362,   363,   364,  -529,
     365,   366,   367,   368,   369,   370,   371,     0,     0,   372,
     373,   374,     0,   349,     0,     0,     0,   350,     0,     0,
     375,   346,     0,     0,     0,     0,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,     0,     0,     0,   168,     0,     0,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,     0,   354,   355,   356,
       0,   357,   358,   359,     0,   360,   361,   362,   363,   364,
       0,   365,   366,   367,   368,   369,   370,   371,     0,     0,
     372,   373,   374,   349,     0,     0,     0,   350,     0,     0,
       0,   375,   346,   772,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   348,     0,     0,     0,     0,     0,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,     0,   354,   355,   356,
       0,   357,   358,   359,     0,   360,   361,   362,   363,   364,
       0,   365,   366,   367,   368,   369,   370,   371,     0,   744,
     372,   373,   374,     0,   349,     0,     0,     0,   350,     0,
       0,   375,   346,     0,     0,     0,     0,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   348,     0,     0,   775,     0,     0,     0,     0,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   352,   353,     0,   354,   355,
     356,     0,   357,   358,   359,     0,   360,   361,   362,   363,
     364,     0,   365,   366,   367,   368,   369,   370,   371,     0,
       0,   372,   373,   374,   349,     0,     0,     0,   350,     0,
       0,     0,   375,   346,     0,     0,     0,     0,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,     0,     0,     0,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   352,   353,     0,   354,   355,
     356,     0,   357,   358,   359,     0,   360,   361,   362,   363,
     364,     0,   365,   366,   367,   368,   369,   370,   371,     0,
       0,   372,   373,   374,     0,   349,     0,     0,     0,   350,
       0,     0,   375,     0,   346,     0,     0,     0,     0,     0,
       0,   347,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   348,     0,     0,     0,     0,     0,     0,
     351,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   353,     0,   354,
     355,   356,     0,   357,   358,   359,     0,   360,   361,   362,
     363,   364,     0,   365,   366,   367,   368,   369,   370,   371,
       0,     0,   372,   373,   374,     0,   349,     0,     0,   799,
     350,     0,     0,   375,     0,   346,     0,     0,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,     0,     0,     0,     0,     0,
       0,   351,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   352,   353,     0,
     354,   355,   356,     0,   357,   358,   359,     0,   360,   361,
     362,   363,   364,     0,   365,   366,   367,   368,   369,   370,
     371,     0,     0,   372,   373,   374,     0,   349,     0,     0,
     800,   350,     0,     0,   375,   346,     0,     0,     0,     0,
       0,     0,   347,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   348,   892,     0,     0,     0,     0,
       0,   818,   351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   352,   353,
       0,   354,   355,   356,     0,   357,   358,   359,     0,   360,
     361,   362,   363,   364,     0,   365,   366,   367,   368,   369,
     370,   371,     0,     0,   372,   373,   374,   349,     0,     0,
       0,   350,     0,     0,     0,   375,   346,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   348,   895,     0,     0,     0,
       0,     0,   351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   352,   353,
       0,   354,   355,   356,     0,   357,   358,   359,     0,   360,
     361,   362,   363,   364,     0,   365,   366,   367,   368,   369,
     370,   371,     0,     0,   372,   373,   374,     0,   349,     0,
       0,     0,   350,     0,     0,   375,   346,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   348,     0,     0,     0,     0,
       0,     0,     0,   351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     353,     0,   354,   355,   356,     0,   357,   358,   359,     0,
     360,   361,   362,   363,   364,     0,   365,   366,   367,   368,
     369,   370,   371,     0,     0,   372,   373,   374,   349,     0,
       0,     0,   350,     0,     0,     0,   375,   346,   955,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
       0,     0,     0,   351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     353,     0,   354,   355,   356,     0,   357,   358,   359,     0,
     360,   361,   362,   363,   364,     0,   365,   366,   367,   368,
     369,   370,   371,     0,     0,   372,   373,   374,     0,   349,
       0,     0,     0,   350,   897,     0,   375,   346,     0,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
       0,     0,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,     0,     0,   372,   373,   374,   349,
       0,     0,     0,   350,     0,     0,     0,   375,   346,     0,
       0,     0,   980,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   348,     0,     0,
       0,     0,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,     0,     0,   372,   373,   374,     0,
     349,     0,     0,     0,   350,     0,     0,   375,   346,   999,
       0,     0,     0,   983,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   348,     0,     0,
       0,     0,     0,     0,     0,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   353,     0,   354,   355,   356,     0,   357,   358,
     359,     0,   360,   361,   362,   363,   364,     0,   365,   366,
     367,   368,   369,   370,   371,     0,     0,   372,   373,   374,
     349,     0,     0,     0,   350,     0,     0,     0,   375,   346,
       0,     0,     0,     0,     0,     0,   347,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   348,     0,
       0,     0,     0,     0,     0,   351,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   352,   353,     0,   354,   355,   356,     0,   357,   358,
     359,     0,   360,   361,   362,   363,   364,     0,   365,   366,
     367,   368,   369,   370,   371,     0,     0,   372,   373,   374,
       0,   349,     0,     0,     0,   350,     0,     0,   375,     0,
     346,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,     0,     0,     0,     0,     0,   351,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   353,     0,   354,   355,   356,     0,   357,
     358,   359,     0,   360,   361,   362,   363,   364,     0,   365,
     366,   367,   368,   369,   370,   371,     0,     0,   372,   373,
     374,     0,   349,     0,     0,  1041,   350,     0,     0,   375,
     346,     0,     0,     0,     0,     0,     0,   347,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   348,
       0,     0,     0,     0,     0,     0,     0,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,   353,     0,   354,   355,   356,     0,
     357,   358,   359,     0,   360,   361,   362,   363,   364,     0,
     365,   366,   367,   368,   369,   370,   371,     0,     0,   372,
     373,   374,   349,     0,     0,     0,   350,     0,  1078,     0,
     375,   346,     0,     0,     0,  1097,     0,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,     0,     0,     0,     0,     0,     0,   351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   352,   353,     0,   354,   355,   356,     0,
     357,   358,   359,     0,   360,   361,   362,   363,   364,     0,
     365,   366,   367,   368,   369,   370,   371,     0,     0,   372,
     373,   374,     0,   349,     0,     0,     0,   350,     0,     0,
     375,   346,     0,     0,     0,     0,  1098,     0,   347,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     348,     0,     0,     0,     0,     0,     0,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,     0,   354,   355,   356,
       0,   357,   358,   359,     0,   360,   361,   362,   363,   364,
       0,   365,   366,   367,   368,   369,   370,   371,     0,     0,
     372,   373,   374,   349,     0,     0,     0,   350,     0,     0,
       0,   375,   346,     0,     0,     0,  1099,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   348,     0,     0,     0,     0,     0,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   352,   353,     0,   354,   355,   356,
       0,   357,   358,   359,     0,   360,   361,   362,   363,   364,
       0,   365,   366,   367,   368,   369,   370,   371,     0,     0,
     372,   373,   374,     0,   349,     0,     0,     0,   350,     0,
       0,   375,   346,     0,     0,     0,     0,  1100,     0,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   348,     0,     0,     0,     0,     0,     0,     0,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   352,   353,     0,   354,   355,
     356,     0,   357,   358,   359,     0,   360,   361,   362,   363,
     364,     0,   365,   366,   367,   368,   369,   370,   371,     0,
       0,   372,   373,   374,   349,     0,     0,     0,   350,     0,
       0,     0,   375,   346,     0,     0,     0,  1101,     0,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,     0,     0,     0,     0,     0,     0,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   352,   353,     0,   354,   355,
     356,     0,   357,   358,   359,     0,   360,   361,   362,   363,
     364,     0,   365,   366,   367,   368,   369,   370,   371,     0,
       0,   372,   373,   374,     0,   349,     0,     0,     0,   350,
       0,     0,   375,     0,     0,     0,   346,     0,  1102,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   348,     0,     0,     0,     0,
     351,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   353,     0,   354,
     355,   356,  1126,   357,   358,   359,     0,   360,   361,   362,
     363,   364,     0,   365,   366,   367,   368,   369,   370,   371,
       0,     0,   372,   373,   374,     0,     0,     0,   349,     0,
       0,     0,   350,   375,     0,     0,   346,     0,     0,     0,
       0,     0,     0,   347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   348,     0,     0,     0,     0,
       0,     0,     0,   351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     353,     0,   354,   355,   356,     0,   357,   358,   359,     0,
     360,   361,   362,   363,   364,     0,   365,   366,   367,   368,
     369,   370,   371,     0,     0,   372,   373,   374,   349,     0,
       0,     0,   350,     0,     0,     0,   375,   346,     0,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
       0,     0,     0,   351,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     353,     0,   354,   355,   356,     0,   357,   358,   359,     0,
     360,   361,   362,   363,   364,   348,   365,   366,   367,   368,
     369,   370,   371,     0,     0,   372,   373,   374,     0,   349,
       0,     0,     0,   350,  1155,     0,   375,   346,     0,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   348,     0,     0,     0,
       0,     0,     0,     0,   351,     0,     0,     0,   349,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,   364,   348,   365,   366,   367,
     368,   369,   370,   371,     0,     0,   372,   373,   374,   732,
       0,     0,     0,   350,     0,     0,     0,   375,     0,   352,
     353,     0,   354,   355,   356,     0,   357,   358,   359,     0,
     360,   361,   362,   363,     0,     0,   365,   366,   367,   368,
     369,   348,   371,     0,   351,   372,   373,   374,     0,   349,
       0,     0,     0,   350,     0,     0,   375,     0,     0,     0,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   351,     0,   372,   373,   374,     0,
       0,     0,     0,     0,   349,     0,     0,   375,   350,     0,
     352,   353,     0,   354,   355,   356,     0,   357,   358,   359,
       0,   360,   361,   362,   363,     0,     0,   365,   366,   367,
     368,   369,   370,   371,     0,     0,   372,   373,   374,     0,
       0,     0,     0,     0,     0,     0,     0,   375,     0,     0,
       0,     0,     0,     0,     0,   352,   353,     0,   354,   355,
     356,     0,   357,   358,   359,     0,     0,   361,   362,   363,
       0,     0,   365,   366,   367,   368,     0,   708,   371,   224,
       0,   372,   373,   374,     0,     0,     0,     0,     0,     0,
       0,     0,   375,   225,   226,     0,   227,     0,     0,     0,
       0,   228,     0,     0,     0,     0,     0,     0,     0,   229,
       0,     0,     0,     0,     0,   230,     0,     0,     0,     0,
       0,   231,     0,     0,     0,   232,     0,     0,   233,     0,
       0,     0,     0,  -241,     0,     0,   234,     0,     0,     0,
       0,     0,   235,   236,     0,     0,     0,  -241,  -241,   237,
    -241,     0,     0,     0,     0,  -241,     0,     0,   238,     0,
       0,     0,     0,  -241,     0,     0,     0,   239,   240,  -241,
     241,     0,   242,     0,   243,  -241,     0,   244,     0,  -241,
       0,   245,  -241,     0,   246,     0,     0,   247,     0,     0,
    -241,     0,     0,     0,     0,     0,  -241,  -241,     0,     0,
       0,     0,     0,  -241,     0,     0,     0,     0,     0,     0,
       0,     0,  -241,     0,     0,  -251,     0,     0,     0,     0,
       0,  -241,  -241,     0,  -241,     0,  -241,     0,  -241,  -251,
    -251,  -241,  -251,     0,     0,  -241,     0,  -251,  -241,     0,
       0,  -241,     0,     0,     0,  -251,     0,     0,     0,     0,
       0,  -251,     0,     0,     0,     0,     0,  -251,     0,     0,
       0,  -251,     0,     0,  -251,     0,     0,     0,     0,   224,
       0,     0,  -251,     0,     0,     0,     0,     0,  -251,  -251,
       0,     0,     0,   225,   226,  -251,   227,     0,     0,     0,
       0,   228,     0,     0,  -251,     0,     0,     0,     0,   229,
       0,     0,     0,  -251,  -251,   230,  -251,     0,  -251,     0,
    -251,   231,     0,  -251,     0,   232,     0,  -251,   233,     0,
    -251,     0,     0,  -251,     0,     0,   234,     0,     0,     0,
       0,     0,   235,   236,     0,     0,     0,     0,     0,   237,
       0,     0,     0,     0,     0,     0,     0,     0,   238,     0,
       0,  -242,     0,     0,     0,     0,     0,   239,   240,     0,
     241,     0,   242,     0,   243,  -242,  -242,   244,  -242,     0,
       0,   245,     0,  -242,   246,     0,     0,   247,     0,     0,
       0,  -242,     0,     0,     0,     0,     0,  -242,     0,     0,
       0,     0,     0,  -242,     0,     0,     0,  -242,     0,     0,
    -242,     0,     0,     0,     0,  -173,     0,     0,  -242,     0,
       0,     0,     0,     0,  -242,  -242,     0,     0,     0,  -173,
    -173,  -242,  -173,     0,     0,     0,     0,  -173,     0,     0,
    -242,     0,     0,     0,     0,  -173,     0,     0,     0,  -242,
    -242,  -173,  -242,     0,  -242,     0,  -242,  -173,     0,  -242,
       0,  -173,     0,  -242,  -173,     0,  -242,     0,     0,  -242,
       0,     0,  -173,     0,     0,     0,     0,     0,  -173,  -173,
       0,     0,     0,     0,     0,  -173,     0,     0,     0,     0,
       0,     0,     0,     0,  -173,     0,     0,  -169,     0,     0,
       0,     0,     0,  -173,  -173,     0,  -173,     0,  -173,     0,
    -173,  -169,  -169,  -173,  -169,     0,     0,  -173,     0,  -169,
    -173,   271,     0,  -173,     0,    22,    23,  -169,     0,     0,
       0,     0,     0,  -169,   272,     0,    30,   273,     0,  -169,
       0,    35,     0,  -169,     0,   -76,  -169,     0,     0,    40,
       0,     0,  -260,     0,  -169,     0,     0,     0,     0,     0,
    -169,  -169,     0,     0,     0,     0,     0,  -169,     0,     0,
       0,    53,     0,    55,     0,     0,  -169,     0,  -260,     0,
       0,     0,   274,     0,    63,  -169,  -169,     0,  -169,     0,
    -169,     0,  -169,     0,     0,  -169,     0,     0,     0,  -169,
       0,     0,  -169,    79,     0,  -169,    81,     0,   -76,    83
};

static const yytype_int16 yycheck[] =
{
      12,     2,    60,   153,    16,   457,   217,   489,    20,    19,
     615,   194,    64,   717,    26,   443,   223,   794,    30,    31,
      22,    33,    34,    35,    36,    32,   202,   210,     1,   705,
     139,  1015,     3,    45,   828,    47,   397,   704,     1,   929,
      52,    87,    54,   603,    56,    87,   606,   223,    47,     3,
     102,    32,    64,    65,    66,    67,    68,    69,   882,   883,
     926,    73,   269,    75,    70,    77,    78,    36,     1,     1,
      82,    47,  1116,    85,    86,   454,    88,   649,    90,  1064,
      32,    93,    94,     1,    96,   292,   195,    46,   100,   101,
     102,   103,    32,   269,   462,    32,   141,    70,   141,   135,
      69,   115,    53,     3,   113,     3,   112,   143,   115,    85,
     887,  1155,   160,   324,   325,   160,   292,   160,   160,   165,
     115,   489,    20,   165,   729,    58,    58,    98,    79,    47,
     182,  1116,   141,    87,   115,    33,    47,   149,  1004,   112,
      47,    47,   141,    47,    98,    33,    34,     0,  1038,   299,
     109,  1135,   141,   930,    87,    87,   170,   120,   165,   731,
     166,   173,    60,     3,   176,   177,   178,   100,   180,   181,
     182,    47,   966,   115,    65,   170,    58,   140,   141,   168,
     113,   113,   358,   193,   165,   167,   393,   394,   748,   141,
     202,   751,    31,   166,     8,   989,   648,   991,    98,    85,
      98,   901,   120,   903,   206,   168,   104,   140,   140,   211,
     101,   223,   270,   165,   102,    47,   218,   393,   394,   791,
    1044,  1045,   140,   141,   141,   165,  1003,   160,   165,   141,
     141,   113,   165,   165,   141,   141,   141,   141,    18,   115,
      27,   160,   160,    78,   141,    84,    81,   141,   167,    88,
     169,   168,   264,    85,   615,   160,   168,   269,  1052,   170,
    1054,   273,    95,   170,   170,   141,   170,   165,   141,   281,
     282,   168,   976,   101,  1133,   482,   170,   705,   141,    80,
     292,   957,    27,   959,   141,   141,  1063,    74,   988,   956,
     990,   958,  1151,    73,   170,   168,   135,   160,    85,   141,
     167,   140,     2,   142,   143,   910,   482,   319,   147,   166,
     166,    91,    12,   206,   423,   316,   155,   104,   211,   428,
     167,   120,   334,   335,   163,    25,   168,    27,   108,    74,
      27,   167,   344,   785,   346,   347,   348,   349,   350,   351,
      85,   353,   354,   355,   356,   357,   145,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   167,   110,   169,   141,   729,   141,
     382,   383,   141,    73,   202,   141,   388,    74,   430,   391,
     392,   393,   394,   395,   396,   397,   160,   141,    85,   141,
      27,  1069,    47,   821,   406,   223,   168,   166,   141,   411,
     100,   413,   168,    58,   783,   105,   160,   104,   619,   620,
      47,    84,   165,   110,    51,    88,   168,   160,   430,   141,
     432,   433,   160,    31,   160,   601,   438,   439,   166,   160,
     442,   443,    87,   445,    71,   166,   448,    74,   160,    76,
     159,   269,  1120,  1121,  1122,  1123,  1124,  1125,    85,   828,
     160,    45,   464,   141,   936,   160,   468,   469,   113,    27,
     135,   349,   350,   475,   292,   120,   151,   104,   143,   169,
     482,   523,   160,    67,   685,   686,    84,    84,   160,   135,
      88,    88,    50,    77,    78,   497,   141,   143,   500,   160,
     502,   382,   383,   676,   506,   507,   508,   388,   510,   511,
     391,   392,    77,    78,    72,   160,    74,   395,   396,   160,
     165,   523,   114,   168,   167,   516,   169,    85,   406,   167,
     160,   169,   120,   699,   700,   167,   160,   135,    46,   957,
      58,   959,   140,     3,   167,   143,   169,    27,   167,   147,
     169,   165,   110,   141,    62,   433,     2,   145,   248,   910,
      20,   439,   135,    83,   160,   255,    12,   140,    83,    87,
     143,   929,    80,    33,   147,   393,   394,   717,   936,    25,
     168,    27,   100,   585,   586,   587,   588,   589,   590,   591,
     167,   167,   592,   593,    74,   113,   500,   599,   502,   601,
      60,   109,   971,   167,   167,    85,   160,   609,   192,   611,
     167,   120,   654,   615,   120,   617,   160,     8,    62,   500,
     989,   502,   991,   140,   104,   165,   316,    73,   506,   143,
     214,   215,   216,   217,    65,   141,    58,   221,    98,   145,
     168,   331,   160,   120,   104,   141,    47,   165,   160,    27,
     652,   653,   654,   160,   100,    34,   658,   475,   168,   105,
     141,   120,   168,   167,   482,    87,   168,   168,   168,    47,
      21,   141,   170,    51,   258,   170,   165,   167,   100,   497,
    1038,   265,   500,  1052,   502,  1054,   160,   160,   160,   507,
     168,   113,   160,    71,    47,   697,    74,   160,    76,   701,
     141,   703,   704,   705,   288,    58,  1064,    85,   586,   160,
     588,   160,   170,   160,   404,   160,    34,    62,   599,    85,
    1078,   141,   306,   169,   166,   168,   104,   729,   168,   166,
     732,   733,   734,   120,    87,   737,   168,    32,   160,    32,
     937,   938,   432,   165,   170,    34,   165,    31,   438,   165,
     140,    85,   170,   167,   167,   757,   140,   759,  1116,   170,
     113,   803,   764,   141,     2,   767,    58,   120,   770,   166,
     772,   937,   938,   775,    12,  1133,   170,   658,   160,   160,
     143,   599,   167,   601,   143,   143,   135,    25,   141,    27,
     168,   143,   135,  1151,   135,    87,   143,  1155,   165,   143,
      84,   803,   248,   143,    88,   120,   143,   160,   100,   255,
     143,   813,   165,   815,   504,   168,   818,   143,   508,   821,
     143,   113,   135,   407,   135,    27,   516,   143,   830,   165,
      34,   146,   160,   148,   149,    73,   976,   152,   153,    77,
      78,   168,   100,   168,   168,    47,   168,   135,   160,    51,
     160,   135,   136,   437,   732,   733,   140,   441,   142,   143,
     160,   160,   100,   147,   135,   159,   170,   105,   160,    71,
     316,   155,    74,   165,    76,   877,   159,   161,   162,   163,
     141,   451,   697,    85,    24,   331,   470,   807,   300,   891,
     892,   831,   894,   895,   896,   897,   331,   976,   971,   834,
     641,   783,   104,   905,   906,  1135,   908,    31,   910,  1063,
     912,   913,  1093,  1126,   916,  1119,   964,    35,   465,   601,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   169,    -1,   935,   936,   937,   938,    -1,    -1,    -1,
     630,   943,    -1,   945,    -1,    -1,    -1,   949,    -1,    -1,
      -1,    -1,    -1,   955,   956,   957,   958,   959,   404,    -1,
      84,    -1,    -1,  1005,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   980,   981,
     982,   983,   984,   985,   986,   987,   432,    -1,    -1,    -1,
      -1,    -1,   438,    -1,   684,    -1,    -1,   999,    -1,   445,
     690,    -1,    -1,  1005,    -1,    -1,    -1,    -1,  1010,    47,
     248,   135,  1014,    -1,    -1,    -1,   140,   255,   142,   143,
      58,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,   613,
     614,   155,    -1,    -1,    -1,   619,   620,   161,   162,   163,
      -1,    -1,    -1,    -1,    -1,    -1,  1088,   631,    -1,    87,
      -1,    -1,    -1,    -1,  1056,  1057,  1058,  1059,   504,    -1,
      -1,    -1,   508,    -1,    -1,    -1,    -1,   757,    -1,   759,
     516,    -1,    -1,    -1,   764,   113,  1078,   767,   316,    -1,
    1082,  1083,   120,    -1,   774,    -1,  1088,   777,   672,    -1,
      -1,    -1,     2,   331,    -1,  1097,  1098,  1099,  1100,  1101,
    1102,    -1,    12,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   929,   802,  1115,  1116,    25,  1118,    27,    -1,   937,
     938,    -1,   160,   813,    -1,   815,    -1,   165,    -1,     3,
     168,    -1,    -1,    -1,    -1,    -1,   582,    -1,    -1,    -1,
      -1,    -1,     2,    17,    -1,    -1,    20,    -1,    -1,  1151,
      -1,    25,    12,  1155,    -1,    -1,    -1,    -1,   742,   743,
      -1,    35,    -1,    73,    -1,    25,   404,    27,    -1,    -1,
     754,    45,   756,    -1,    -1,    -1,    -1,    -1,    52,   763,
      -1,    -1,   766,    -1,   630,   769,    60,    -1,    -1,    -1,
     100,    -1,  1010,    67,   432,   105,    -1,    -1,    -1,    -1,
     438,    -1,    -1,    -1,    -1,    -1,    -1,   445,    82,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    98,    -1,   810,    -1,    -1,    -1,
      -1,   105,    -1,    -1,   924,    -1,    -1,   111,   684,    -1,
     100,    -1,    -1,    -1,   690,   105,  1064,    -1,    -1,   939,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   948,   169,
      -1,    -1,   952,    -1,    -1,    -1,   504,    -1,    -1,    31,
     508,   717,    -1,    -1,    -1,    -1,    -1,    -1,   516,    -1,
      22,    -1,    -1,    -1,    26,    27,   732,   733,    67,    -1,
      -1,    -1,    -1,    35,    -1,    37,    38,    -1,  1116,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,   169,
    1000,   757,    -1,   759,    -1,    -1,    -1,    -1,   764,    -1,
      -1,   767,    84,    -1,    -1,    -1,    88,    -1,   774,    -1,
      72,   777,    74,    -1,    76,    -1,    78,  1155,   248,    81,
      -1,    83,    -1,    85,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   802,   941,    -1,    -1,
      -1,    -1,   104,    -1,    -1,   107,    -1,   813,   110,   815,
      -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,     2,
     142,   143,    -1,    -1,    -1,   147,    -1,    -1,   248,    12,
      -1,    -1,   630,   155,    -1,   255,    -1,    -1,    -1,   161,
     162,   163,    25,    -1,    27,    -1,   316,    -1,    -1,   993,
     994,    -1,    -1,   997,   998,    -1,    -1,    -1,   160,    -1,
      -1,   331,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,
      -1,  1015,    -1,    -1,    -1,   214,   215,   216,   217,  1023,
      -1,  1025,    -1,  1027,    -1,    -1,   684,    -1,    -1,    -1,
      73,    -1,   690,    -1,    -1,    -1,   316,    -1,    31,   905,
      -1,    -1,    -1,    -1,    -1,    -1,   912,    -1,    -1,    -1,
      -1,   331,    -1,    -1,    -1,    -1,    -1,   100,   924,   258,
      -1,    -1,   105,    -1,    -1,    -1,   265,    -1,    -1,    -1,
      -1,    -1,    -1,   939,   404,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   948,    -1,    -1,    -1,   952,    -1,    -1,   288,
      -1,    84,    -1,    -1,    -1,    88,    -1,    -1,    -1,   757,
      -1,   759,   432,    -1,    -1,    -1,   764,   306,   438,   767,
      -1,    -1,    -1,    -1,    -1,   445,   774,    -1,    -1,   777,
      -1,    -1,    -1,    -1,   404,    -1,   169,    -1,     2,    -1,
      -1,  1135,    -1,    -1,  1000,    -1,    -1,    -1,    12,    -1,
      -1,    -1,   135,   136,   802,    -1,   139,   140,    -1,   142,
     143,    25,   432,    27,   147,   813,    -1,   815,   438,    -1,
      -1,    -1,   155,    -1,    -1,   445,    -1,    -1,   161,   162,
     163,    -1,    -1,    -1,   504,    -1,    -1,    -1,   508,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,    -1,
    1056,  1057,  1058,  1059,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,   407,     2,
      -1,    -1,   255,    -1,    -1,    -1,  1082,  1083,    -1,    12,
      -1,    -1,    -1,    -1,   504,    -1,   100,    -1,   508,    -1,
      -1,   105,    25,    -1,    27,    22,   516,    -1,   437,    26,
      27,    -1,   441,    -1,    -1,    -1,    -1,   905,    35,    -1,
      37,    38,    -1,    -1,   912,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,   924,    -1,    -1,    -1,
      -1,   470,    -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,
      73,   939,    -1,    -1,    -1,    72,    -1,    74,   331,     3,
     948,    -1,    -1,    -1,   952,   169,    83,    -1,    85,    -1,
     630,    -1,    -1,    17,    18,    -1,    20,   100,    -1,    -1,
      -1,    25,   105,    -1,    -1,    -1,    -1,   104,    -1,    33,
     107,    -1,    -1,   110,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,  1000,    -1,    -1,    -1,    60,    -1,    -1,    -1,
     630,    -1,    66,    67,   684,    -1,    -1,    -1,    -1,    73,
     690,   404,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,   248,    -1,   169,    91,    92,    -1,
      94,   255,    96,    -1,    98,    -1,    -1,   101,    -1,   432,
      -1,   105,   106,    -1,   108,   438,    -1,   111,  1056,  1057,
    1058,  1059,   445,    -1,   684,    -1,    -1,    -1,    -1,    -1,
     690,    -1,    -1,    -1,   613,   614,    -1,    -1,    -1,    -1,
     619,   620,    -1,    -1,  1082,  1083,    -1,   757,    -1,   759,
      -1,    -1,    -1,    -1,   764,    -1,    -1,   767,    -1,    -1,
      -1,    -1,   316,    -1,   774,    -1,    -1,   777,    -1,    -1,
      -1,    -1,    -1,   167,    -1,   248,    -1,   331,    -1,    -1,
      -1,   504,   255,    -1,    -1,   508,    -1,    -1,    -1,    -1,
      -1,    -1,   802,   516,    -1,    -1,    -1,   757,    -1,   759,
      -1,    -1,    -1,   813,   764,   815,     2,   767,    -1,    -1,
      -1,    -1,    -1,    -1,   774,    -1,    12,   777,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   802,   316,    -1,    -1,    -1,    -1,    -1,    -1,
     404,    -1,    -1,   813,    -1,   815,    42,    -1,   331,    -1,
      -1,    -1,    -1,   742,   743,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   754,    -1,    73,   432,    -1,
      -1,    -1,    -1,    -1,   438,    -1,    -1,   766,    -1,    -1,
     769,   445,    -1,    79,    -1,   905,    -1,    -1,    31,    -1,
      -1,    -1,   912,    -1,   100,    -1,    -1,   630,    -1,   105,
      -1,    -1,    -1,    -1,   924,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   939,
      -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,   948,    -1,
      -1,    -1,   952,    -1,    -1,   905,   132,    -1,   134,    -1,
     504,    84,   912,    -1,   508,    88,    -1,    -1,    -1,   432,
      -1,   684,   516,    -1,   924,   438,    -1,   690,    -1,    -1,
      -1,    -1,   445,   169,    -1,    -1,    -1,    -1,    -1,   939,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   948,    -1,
    1000,    -1,   952,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,   138,   139,   140,   194,   142,
     143,   144,    -1,   146,   147,   148,   149,    -1,    -1,   152,
     153,   154,   155,   156,   210,   158,   212,    -1,   161,   162,
     163,   504,    -1,    -1,   757,   508,   759,    -1,    -1,   172,
    1000,   764,    -1,   516,   767,    -1,  1056,  1057,  1058,  1059,
      -1,   774,   248,    -1,   777,    -1,    -1,    -1,    -1,   255,
      -1,    -1,   941,    -1,    -1,   251,    -1,    -1,    -1,    -1,
      -1,    -1,  1082,  1083,    -1,    -1,   630,    -1,    -1,   802,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     813,   277,   815,    -1,    -1,    -1,  1056,  1057,  1058,  1059,
      -1,    -1,    -1,     1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
     316,    -1,  1082,  1083,    22,    -1,    -1,    -1,    26,    27,
     684,    -1,    -1,    -1,    -1,   331,   690,    35,    -1,    37,
      38,    -1,    -1,    -1,    42,    -1,    -1,    -1,   164,    -1,
      -1,   167,    50,   169,    -1,    53,    -1,   630,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,
      78,    79,   905,    81,    -1,    83,    -1,    85,    -1,   912,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   924,    -1,   757,    -1,   759,   104,    -1,   404,   107,
     764,   684,   110,   767,    -1,    -1,   939,   690,    -1,    -1,
     774,    -1,    -1,   777,    -1,   948,    -1,    -1,    -1,   952,
      -1,    -1,    -1,    -1,    -1,   421,   432,    -1,    -1,   425,
      -1,    -1,   438,    -1,    -1,    -1,    -1,    -1,   802,   445,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   813,
      -1,   815,   160,    -1,    -1,    -1,    -1,    -1,   166,    -1,
      -1,   457,    -1,    -1,    -1,    -1,    -1,  1000,    -1,    -1,
      -1,    -1,    -1,    -1,   757,    -1,   759,    -1,    -1,    -1,
      -1,   764,    -1,    -1,   767,    -1,    -1,    -1,    -1,    -1,
      -1,   774,    -1,    -1,   777,    -1,    -1,    -1,   504,    -1,
      -1,    -1,   508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   802,
      -1,   517,    -1,  1056,  1057,  1058,  1059,    -1,    -1,   525,
     813,    -1,   815,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,   905,    -1,    -1,    -1,    -1,    -1,    -1,   912,  1082,
    1083,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,    25,
     924,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    39,    -1,   939,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    49,   948,    -1,    52,    -1,   952,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,   602,    73,    -1,   605,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,   905,    -1,   630,    91,    92,    -1,    94,   912,
      96,    -1,    98,    31,    -1,   101,  1000,    -1,    -1,   105,
      -1,   924,   108,    -1,    -1,   111,    22,    -1,   644,    -1,
      26,    27,   648,    -1,    -1,    -1,   939,    -1,    -1,    35,
      -1,    37,    38,    -1,    -1,   948,    42,    -1,    -1,   952,
      -1,    -1,    -1,    -1,    50,    -1,   672,    -1,   684,    -1,
     676,    -1,    -1,    -1,   690,    -1,    84,    -1,    -1,    -1,
      88,    -1,  1056,  1057,  1058,  1059,    72,    -1,    74,   165,
      76,   167,    78,    -1,    -1,    81,    -1,    83,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1000,  1082,  1083,
      -1,   717,    -1,    -1,    -1,    -1,    -1,    -1,   104,    -1,
      -1,   107,    -1,    -1,   110,    -1,    -1,   135,   136,    -1,
     138,   139,   140,    -1,   142,   143,    -1,    -1,    -1,   147,
      -1,   757,    -1,   759,    -1,    -1,   154,   155,   764,    -1,
     158,   767,    -1,   161,   162,   163,    -1,    -1,   774,    -1,
      -1,   777,    -1,  1056,  1057,  1058,  1059,    -1,    -1,    -1,
      -1,    -1,    -1,   779,   160,    -1,   782,    -1,    -1,   785,
     166,    -1,    -1,    -1,    -1,    -1,   802,    -1,    -1,  1082,
    1083,    -1,    -1,    -1,    -1,    -1,    -1,   813,    -1,   815,
      -1,   807,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,   831,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,
      41,   857,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,
      -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,
      61,    -1,    63,    64,    -1,    66,    67,    -1,    12,    -1,
      -1,    -1,    73,    -1,    75,    19,    77,    -1,    -1,   905,
      -1,    82,    83,    -1,    -1,    -1,   912,    31,    32,    -1,
      91,    92,    93,    94,    95,    96,    -1,    98,   924,    -1,
     101,    -1,    -1,    47,   105,    -1,    -1,   108,    -1,    -1,
     111,    -1,    -1,   939,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,   948,    -1,    -1,    -1,   952,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,
      84,    -1,    -1,   144,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,    -1,
     976,    -1,   163,    -1,   165,    -1,   167,    -1,   169,   170,
      -1,   172,    -1,    -1,  1000,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,   138,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,   162,   163,
      -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,
    1056,  1057,  1058,  1059,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,  1082,  1083,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,   165,
     166,   167,    -1,   169,    -1,     1,   172,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
     166,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
     166,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
     166,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
     166,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
     166,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,    -1,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    -1,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    -1,    48,    49,    50,    -1,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    -1,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,    -1,   101,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,    -1,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,   160,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     1,   172,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     3,   172,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,    -1,   105,    -1,    -1,
     108,    -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
      -1,   169,    -1,    -1,   172,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,   102,   103,    -1,   105,   106,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
      -1,   169,    -1,    -1,   172,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,   102,   103,    -1,   105,   106,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
     168,   169,    -1,    -1,   172,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,   102,   103,    -1,   105,   106,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
     168,   169,    -1,     3,   172,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    47,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,   105,    -1,    -1,   108,    -1,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
      -1,     3,   172,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
     102,   103,    -1,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,   157,   158,   159,   160,    -1,
      -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,    -1,
     172,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
     102,   103,    -1,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,     3,
     172,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    -1,    98,    -1,    -1,   101,   102,   103,
      -1,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,   157,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,     3,   172,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,   104,   105,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     3,   172,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,   117,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
      -1,   169,    -1,    -1,   172,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,   117,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
      -1,   169,    -1,     3,   172,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,   102,   103,    -1,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
      -1,    -1,   172,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,   166,   167,    -1,   169,
      -1,    -1,   172,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
     170,    -1,   172,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
     170,     3,   172,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,   117,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,     3,
     172,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
      -1,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,   157,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,     3,   172,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    43,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,    -1,   172,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     3,   172,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,   104,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
      -1,   169,    -1,     3,   172,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
     170,     3,   172,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,    -1,   105,   106,    -1,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,    -1,
     172,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,     3,
     172,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
      -1,   105,   106,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,   157,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,    -1,   172,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
      -1,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,   157,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,    -1,   172,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
      -1,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,   157,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,     3,   172,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     3,   172,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
      -1,   169,    -1,     3,   172,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
      -1,     3,   172,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,     3,
     172,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
      -1,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,   157,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,     3,   172,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     3,   172,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
      -1,   169,    -1,     3,   172,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
      -1,     3,   172,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,     3,
     172,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
      -1,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,   157,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,     3,   172,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,   157,   158,   159,    -1,    -1,    -1,   163,    -1,   165,
      -1,   167,    -1,   169,    -1,     3,   172,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,    -1,   101,    -1,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,   157,
     158,   159,    -1,    -1,    -1,   163,    -1,   165,    -1,   167,
      -1,   169,    -1,     3,   172,     5,     6,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,    -1,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    95,    96,    -1,    98,    -1,
      -1,   101,    -1,    -1,    -1,   105,    -1,    -1,   108,    -1,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   154,    -1,    -1,   157,   158,   159,
      -1,    -1,    -1,   163,    -1,   165,    -1,   167,    -1,   169,
      -1,     3,   172,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,   157,   158,   159,    -1,    -1,
      -1,   163,    -1,   165,    -1,   167,    -1,   169,    -1,     3,
     172,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,
      -1,   105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     154,    -1,    -1,   157,   158,   159,    -1,    -1,    -1,   163,
      -1,   165,    -1,   167,    -1,   169,    -1,     3,   172,     5,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,   135,
     136,   137,   138,   139,    -1,    -1,    -1,    12,   144,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    -1,   154,    -1,
      25,   157,   158,   159,    -1,    -1,    -1,   163,    33,    -1,
      35,   167,    -1,   169,    39,    -1,   172,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    94,
      -1,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,   121,   122,   123,   124,
     125,    -1,    -1,   128,   129,   130,   131,    -1,   133,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,    -1,    -1,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,   158,    -1,    -1,   161,   162,   163,   164,
      -1,     3,   167,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    35,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,   138,   139,    -1,    -1,
      -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    -1,   164,   158,   159,   167,    -1,
     169,   163,    -1,   165,    -1,   167,    -1,   169,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    31,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    84,    73,    -1,
      75,    88,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,   135,   136,
      -1,   138,   139,   140,    -1,   142,   143,   144,    -1,    -1,
     147,    -1,   137,    -1,    -1,    -1,   141,   154,   155,    -1,
     145,   158,    -1,    -1,   161,   162,   163,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   172,    -1,    -1,    -1,    -1,
     165,    -1,   167,   168,   169,     3,    -1,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      18,    -1,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      58,    -1,    60,    61,    -1,    63,    64,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    96,    -1,
      98,    -1,   100,   101,    -1,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,   111,    -1,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,   137,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      25,   159,   160,    -1,    -1,    -1,    -1,   165,    33,   167,
      35,   169,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,    -1,
      -1,    56,    57,    -1,    -1,    60,    61,    -1,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,
     105,    -1,    -1,   108,    -1,    -1,   111,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,     3,   137,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    25,   159,    -1,    -1,    -1,    -1,    -1,
     165,    33,   167,    35,   169,    -1,    -1,    39,    40,    41,
      -1,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,    96,    -1,    98,    -1,    -1,   101,
      -1,    -1,    -1,   105,    -1,    -1,   108,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,   137,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,
      -1,    20,    -1,    22,    -1,    -1,    25,   159,    -1,    -1,
      -1,    -1,    -1,   165,    33,   167,    35,   169,    -1,    -1,
      39,    40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,    -1,
      -1,    60,    61,    -1,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    82,    83,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    96,    -1,    98,
      17,    18,   101,    20,    -1,    -1,   105,    -1,    25,   108,
      -1,    -1,   111,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    49,    -1,    -1,    52,    -1,    -1,   137,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,   167,    -1,
     169,    -1,    -1,    -1,    91,    92,    -1,    94,     3,    96,
      -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,    -1,
      -1,   108,    17,    18,   111,    20,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    22,    -1,
      45,    -1,    26,    27,    49,    -1,    -1,    52,    -1,    -1,
      -1,    35,    -1,    37,    38,    60,    -1,    -1,    42,    -1,
      -1,    66,    67,    -1,    -1,    -1,    50,    -1,    73,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    72,    94,
      74,    96,    76,    98,    78,     3,   101,    81,    -1,    83,
     105,    85,    -1,   108,    12,    -1,   111,    -1,    -1,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,
     104,    -1,    -1,   107,    -1,    33,   110,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,   167,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,   160,    -1,    -1,    -1,
      -1,    -1,   166,    91,    92,    12,    94,    -1,    96,    -1,
      98,    -1,    19,   101,    -1,    -1,    -1,   105,    -1,    -1,
     108,    -1,    -1,   111,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,   121,   122,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,    -1,   133,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,    -1,    -1,    -1,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
     158,    -1,    -1,   161,   162,   163,   164,    84,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      97,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,    -1,
      -1,   128,   129,   130,   131,    -1,   133,   134,   135,   136,
      -1,   138,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,    -1,    -1,   161,   162,   163,    84,   165,    -1,
      -1,    88,    -1,    -1,    -1,   172,    -1,    12,    -1,    -1,
      97,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,   122,   123,   124,   125,    -1,
      -1,   128,   129,   130,   131,    -1,   133,   134,   135,   136,
      -1,   138,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,    -1,    -1,   161,   162,   163,    -1,   165,    84,
      -1,    -1,    -1,    88,    -1,   172,    -1,    12,    -1,    -1,
      -1,    -1,    97,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,    -1,    -1,   128,   129,   130,   131,    -1,   133,   134,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,   162,   163,    84,
     165,    -1,    -1,    88,    -1,    -1,    -1,   172,    -1,    12,
      -1,    -1,    97,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,   122,   123,   124,
     125,    -1,    -1,   128,   129,   130,   131,    -1,   133,   134,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,   162,   163,    -1,
     165,    84,    -1,    -1,    -1,    88,    -1,   172,    -1,    12,
      -1,    -1,    -1,    -1,    97,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,    -1,    -1,   128,   129,   130,   131,    -1,
     133,   134,   135,   136,    -1,   138,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,   162,
     163,    84,   165,    -1,    -1,    88,    -1,    -1,    -1,   172,
      -1,    12,    -1,    -1,    97,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,   122,
     123,   124,   125,    -1,    -1,   128,   129,   130,   131,    -1,
     133,   134,   135,   136,    -1,   138,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,   162,
     163,    -1,   165,    84,    -1,    -1,    -1,    88,    -1,   172,
      -1,    12,    -1,    -1,    -1,    -1,    97,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,   128,   129,   130,
     131,    -1,   133,   134,   135,   136,    -1,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,   162,   163,    84,   165,    -1,    -1,    88,    -1,    -1,
      -1,   172,    -1,    12,    -1,    -1,    97,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,   128,   129,   130,
     131,    -1,   133,   134,   135,   136,    -1,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,   162,   163,    -1,   165,    84,    -1,    -1,    -1,    88,
      -1,   172,    -1,    12,    -1,    -1,    -1,    -1,    97,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,   122,   123,   124,   125,    -1,    47,   128,
     129,   130,   131,    -1,   133,   134,   135,   136,    -1,   138,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
      -1,    -1,   161,   162,   163,    84,   165,    -1,    -1,    88,
      -1,    -1,    -1,   172,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,   115,    -1,    -1,    36,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,    69,   152,   153,   154,   155,   156,   157,   158,
      -1,    -1,   161,   162,   163,    -1,   165,    84,    -1,    -1,
      -1,    88,    -1,   172,    -1,    -1,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      22,    36,   119,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    37,    38,    -1,   135,   136,
      42,   138,   139,   140,    -1,   142,   143,   144,    50,   146,
     147,   148,   149,   150,    69,   152,   153,   154,   155,   156,
     157,   158,    -1,   160,   161,   162,   163,    -1,    -1,    84,
      72,    -1,    74,    88,    76,   172,    78,    12,    -1,    81,
      -1,    83,    -1,    85,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,   104,    -1,   119,   107,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,   162,   163,    84,
      -1,    -1,    -1,    88,    -1,    -1,    -1,   172,   160,    12,
      -1,    -1,    -1,    -1,   166,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
     115,    -1,    22,    -1,   119,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    35,    -1,    37,    38,    -1,
     135,   136,    42,   138,   139,   140,    -1,   142,   143,   144,
      50,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,   162,   163,    -1,
     165,    84,    72,    -1,    74,    88,    76,   172,    78,    12,
      -1,    81,    -1,    83,    -1,    85,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      -1,    -1,   115,    -1,   104,    -1,   119,   107,    -1,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,   138,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,   162,
     163,    84,    -1,    -1,    -1,    88,    -1,    -1,    -1,   172,
     160,    12,    -1,    -1,    -1,    -1,   166,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,   138,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,   162,
     163,    -1,   165,    84,    -1,    -1,    -1,    88,    -1,   172,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,   162,   163,    84,    -1,    -1,    -1,    88,    -1,    -1,
      -1,   172,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,   162,   163,    -1,    84,    -1,    -1,    -1,    88,    -1,
      -1,   172,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,   162,   163,    84,   165,    -1,    -1,    88,    -1,
      -1,    -1,   172,    -1,    12,    -1,    -1,    97,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    22,    -1,   119,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    37,    38,    -1,   135,   136,    42,   138,   139,
     140,    -1,   142,   143,   144,    50,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,   162,   163,    -1,   165,    84,    72,    -1,    74,
      88,    76,   172,    78,    -1,    -1,    81,    -1,    83,    -1,
      85,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,   115,    -1,   104,
      -1,   119,   107,    31,    -1,   110,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,
     138,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,    69,    -1,   161,   162,   163,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,   160,    84,    -1,    -1,    -1,
      88,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,
     138,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,   162,   163,    84,    -1,    -1,    -1,
      88,    -1,    -1,    -1,   172,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,
     138,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,   162,   163,    -1,   165,    84,    -1,
      -1,    -1,    88,    -1,   172,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,    -1,   160,   161,   162,   163,    84,    -1,
      -1,    -1,    88,    -1,    -1,    -1,   172,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,    -1,   160,   161,   162,   163,    -1,    84,
      -1,    -1,    -1,    88,    -1,    -1,   172,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,   163,    84,
      -1,    -1,    -1,    88,    -1,    -1,    -1,   172,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,    -1,   160,   161,   162,   163,    -1,
      84,    -1,    -1,    -1,    88,    -1,    -1,   172,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,   138,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,   162,   163,
      84,    -1,    -1,    -1,    88,    -1,    -1,    -1,   172,    12,
      -1,    -1,    -1,    97,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,   138,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,   162,   163,
      -1,    84,    -1,    -1,    -1,    88,    -1,    -1,   172,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,   138,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,   162,
     163,    -1,    84,    -1,    -1,   168,    88,    -1,    -1,   172,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,    -1,    -1,   161,
     162,   163,    84,    -1,    -1,    -1,    88,    -1,    -1,    -1,
     172,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,    -1,    -1,   161,
     162,   163,    -1,    84,    -1,    -1,    -1,    88,    -1,    -1,
     172,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,   115,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,   162,   163,    84,    -1,    -1,    -1,    88,    -1,    -1,
      -1,   172,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,    -1,   160,
     161,   162,   163,    -1,    84,    -1,    -1,    -1,    88,    -1,
      -1,   172,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,   162,   163,    84,    -1,    -1,    -1,    88,    -1,
      -1,    -1,   172,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,   162,   163,    -1,    84,    -1,    -1,    -1,    88,
      -1,    -1,   172,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,
     139,   140,    -1,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
      -1,    -1,   161,   162,   163,    -1,    84,    -1,    -1,   168,
      88,    -1,    -1,   172,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,
     138,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,    -1,    -1,   161,   162,   163,    -1,    84,    -1,    -1,
     168,    88,    -1,    -1,   172,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
      -1,   138,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,    -1,    -1,   161,   162,   163,    84,    -1,    -1,
      -1,    88,    -1,    -1,    -1,   172,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,   136,
      -1,   138,   139,   140,    -1,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,    -1,    -1,   161,   162,   163,    -1,    84,    -1,
      -1,    -1,    88,    -1,    -1,   172,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,   162,   163,    84,    -1,
      -1,    -1,    88,    -1,    -1,    -1,   172,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,   162,   163,    -1,    84,
      -1,    -1,    -1,    88,   170,    -1,   172,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,   162,   163,    84,
      -1,    -1,    -1,    88,    -1,    -1,    -1,   172,    12,    -1,
      -1,    -1,    97,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,   162,   163,    -1,
      84,    -1,    -1,    -1,    88,    -1,    -1,   172,    12,    13,
      -1,    -1,    -1,    97,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,   138,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,   162,   163,
      84,    -1,    -1,    -1,    88,    -1,    -1,    -1,   172,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,   138,   139,   140,    -1,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,    -1,    -1,   161,   162,   163,
      -1,    84,    -1,    -1,    -1,    88,    -1,    -1,   172,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,    -1,   138,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,    -1,    -1,   161,   162,
     163,    -1,    84,    -1,    -1,   168,    88,    -1,    -1,   172,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,    -1,    -1,   161,
     162,   163,    84,    -1,    -1,    -1,    88,    -1,   170,    -1,
     172,    12,    -1,    -1,    -1,    97,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,    -1,    -1,   161,
     162,   163,    -1,    84,    -1,    -1,    -1,    88,    -1,    -1,
     172,    12,    -1,    -1,    -1,    -1,    97,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,   162,   163,    84,    -1,    -1,    -1,    88,    -1,    -1,
      -1,   172,    12,    -1,    -1,    -1,    97,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
     161,   162,   163,    -1,    84,    -1,    -1,    -1,    88,    -1,
      -1,   172,    12,    -1,    -1,    -1,    -1,    97,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,   162,   163,    84,    -1,    -1,    -1,    88,    -1,
      -1,    -1,   172,    12,    -1,    -1,    -1,    97,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,    -1,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,    -1,
      -1,   161,   162,   163,    -1,    84,    -1,    -1,    -1,    88,
      -1,    -1,   172,    -1,    -1,    -1,    12,    -1,    97,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,
     139,   140,    58,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
      -1,    -1,   161,   162,   163,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,   172,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,   162,   163,    84,    -1,
      -1,    -1,    88,    -1,    -1,    -1,   172,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,    31,   152,   153,   154,   155,
     156,   157,   158,    -1,    -1,   161,   162,   163,    -1,    84,
      -1,    -1,    -1,    88,   170,    -1,   172,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,    31,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,   162,   163,    84,
      -1,    -1,    -1,    88,    -1,    -1,    -1,   172,    -1,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,    -1,    -1,   152,   153,   154,   155,
     156,    31,   158,    -1,   119,   161,   162,   163,    -1,    84,
      -1,    -1,    -1,    88,    -1,    -1,   172,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   119,    -1,   161,   162,   163,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,   172,    88,    -1,
     135,   136,    -1,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,    -1,    -1,   152,   153,   154,
     155,   156,   157,   158,    -1,    -1,   161,   162,   163,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,    -1,   142,   143,   144,    -1,    -1,   147,   148,   149,
      -1,    -1,   152,   153,   154,   155,    -1,     1,   158,     3,
      -1,   161,   162,   163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    17,    18,    -1,    20,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    17,    18,    73,
      20,    -1,    -1,    -1,    -1,    25,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    91,    92,    39,
      94,    -1,    96,    -1,    98,    45,    -1,   101,    -1,    49,
      -1,   105,    52,    -1,   108,    -1,    -1,   111,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    91,    92,    -1,    94,    -1,    96,    -1,    98,    17,
      18,   101,    20,    -1,    -1,   105,    -1,    25,   108,    -1,
      -1,   111,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    17,    18,    73,    20,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    82,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    91,    92,    39,    94,    -1,    96,    -1,
      98,    45,    -1,   101,    -1,    49,    -1,   105,    52,    -1,
     108,    -1,    -1,   111,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,
      94,    -1,    96,    -1,    98,    17,    18,   101,    20,    -1,
      -1,   105,    -1,    25,   108,    -1,    -1,   111,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    49,    -1,    -1,
      52,    -1,    -1,    -1,    -1,     3,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    17,
      18,    73,    20,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    91,
      92,    39,    94,    -1,    96,    -1,    98,    45,    -1,   101,
      -1,    49,    -1,   105,    52,    -1,   108,    -1,    -1,   111,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    91,    92,    -1,    94,    -1,    96,    -1,
      98,    17,    18,   101,    20,    -1,    -1,   105,    -1,    25,
     108,    22,    -1,   111,    -1,    26,    27,    33,    -1,    -1,
      -1,    -1,    -1,    39,    35,    -1,    37,    38,    -1,    45,
      -1,    42,    -1,    49,    -1,    46,    52,    -1,    -1,    50,
      -1,    -1,    53,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    82,    -1,    79,    -1,
      -1,    -1,    83,    -1,    85,    91,    92,    -1,    94,    -1,
      96,    -1,    98,    -1,    -1,   101,    -1,    -1,    -1,   105,
      -1,    -1,   108,   104,    -1,   111,   107,    -1,   109,   110
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   177,   178,     0,     1,     3,     5,     6,     7,     8,
       9,    10,    14,    15,    16,    17,    18,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    33,    35,
      37,    38,    39,    40,    41,    42,    44,    45,    48,    49,
      50,    52,    55,    56,    57,    59,    60,    61,    63,    64,
      66,    67,    68,    72,    73,    74,    75,    76,    77,    78,
      81,    82,    83,    85,    86,    87,    89,    90,    91,    92,
      93,    94,    95,    96,    98,    99,   101,   102,   103,   104,
     105,   107,   108,   110,   111,   114,   116,   119,   135,   136,
     137,   138,   139,   144,   154,   157,   158,   159,   160,   163,
     165,   167,   169,   172,   179,   180,   181,   182,   183,   184,
     187,   189,   195,   196,   197,   200,   201,   205,   207,   210,
     211,   213,   214,   215,   220,   221,   223,   224,   225,   229,
     230,   233,   234,   237,   238,   241,   244,   245,   270,   273,
     274,   294,   295,   296,   297,   298,   299,   300,   308,   309,
     310,   311,   312,   315,   316,   317,   318,   319,   320,   321,
     323,   324,   325,   326,   327,   160,   181,   312,   115,   301,
     302,     3,   202,    14,    22,    35,    40,    41,    44,    83,
      96,   165,   169,   241,   294,   299,   310,   311,   312,   315,
     317,   318,   301,   312,   104,   273,    85,   202,   181,   288,
     312,   181,   167,     8,    83,   312,   313,     8,    11,    83,
     104,   313,    74,   117,   222,   312,   222,   312,    26,   274,
     312,   312,   188,   167,     3,    17,    18,    20,    25,    33,
      39,    45,    49,    52,    60,    66,    67,    73,    82,    91,
      92,    94,    96,    98,   101,   105,   108,   111,   204,   206,
     242,   167,   204,   275,   276,    32,   189,   209,   312,   312,
      18,    73,    91,   108,    43,   312,   312,   312,     8,   167,
     212,    22,    35,    38,    83,   213,     4,   159,   264,   287,
     312,   102,   103,   160,   312,   314,   312,   209,   312,   312,
     312,    95,   167,   181,   312,   312,   189,   201,   312,   315,
     189,   201,   312,   204,   271,   312,   312,   312,   312,   312,
     312,   312,   312,     1,   166,   179,   190,   287,   106,   145,
     264,   289,   290,   314,   222,   287,   312,   322,   312,    76,
     181,   165,    80,   185,    46,   109,   204,   204,    53,    79,
     259,   275,   159,   160,   151,   312,    12,    19,    31,    84,
      88,   119,   135,   136,   138,   139,   140,   142,   143,   144,
     146,   147,   148,   149,   150,   152,   153,   154,   155,   156,
     157,   158,   161,   162,   163,   172,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   164,   251,   167,   169,    84,    88,   167,   181,   160,
     312,   312,   312,   287,   165,   189,    47,   301,   271,   275,
     160,   141,   160,   114,   205,   264,   291,   292,   293,   314,
      83,   218,   245,   273,    83,   216,   271,   245,   273,   204,
     167,   209,    32,    47,   209,   115,   209,   304,    32,    47,
     209,   304,    36,    69,   160,    97,   120,   189,   251,    78,
      81,   186,   291,   181,   167,   253,   106,   167,   204,   277,
     278,     1,   140,   282,    47,   141,   181,   209,   167,   167,
     312,   209,   291,   213,   204,   141,   160,   312,   312,   160,
     165,   209,   167,   291,   160,   226,   160,   226,   160,   120,
     272,   160,   209,   160,   166,   166,   179,   141,   166,   312,
     141,   168,   141,   168,   170,   304,    47,   141,   170,   304,
     118,   141,   170,     8,     1,   166,   190,    62,   198,   199,
     312,   192,   312,   140,   235,   165,   246,   160,   312,   312,
     312,   312,   222,   312,   222,   312,   312,   312,   312,   312,
     312,   312,    20,    33,    60,   104,   205,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,    65,   314,   314,   314,   314,   314,
     291,   291,   222,   312,   222,   312,    27,    47,    85,   110,
     303,   306,   307,   312,   327,    32,    47,    32,    47,    97,
      47,   170,   222,   312,   209,   160,   160,   312,   312,   120,
     168,   141,   219,   204,   275,   217,   204,   160,   275,    47,
     287,    44,   312,   222,   312,   167,   209,    44,   312,   222,
     312,   209,   163,   191,   194,   312,   191,   193,   181,   312,
      34,   312,   185,   168,    27,    47,    51,    71,    74,    85,
     104,   180,   254,   255,   256,   257,   243,   278,   141,   168,
      33,    49,    92,    96,   169,   208,   283,   295,   120,   279,
     312,   276,   312,   312,   209,   168,   264,   312,     1,   231,
     291,   168,    21,   227,   283,   295,   141,   166,   168,   168,
     289,   168,   289,   181,   170,   222,   312,   170,   181,   312,
     170,   312,   170,   312,   166,   166,   204,   141,   160,    13,
     143,   141,   160,    13,    36,    69,   287,   165,     1,   204,
     239,   240,    27,    74,    85,   104,   248,   258,   167,   160,
     160,   160,   160,   160,   160,   168,   170,    47,    85,   141,
     168,   294,    84,    84,    44,   222,   312,    44,   222,   312,
     222,   312,   301,   301,   160,   264,   314,   293,   204,   235,
     160,   204,   235,   160,   312,   168,   312,    32,   209,    32,
     209,   305,   306,   312,    32,   209,   304,    32,   209,   304,
     141,   160,    13,   160,    34,    34,   181,    97,   189,    62,
      47,    85,   256,   141,   168,   167,   204,    27,    74,    85,
     104,   260,   168,   278,   282,     1,   287,    65,   314,   168,
     168,   166,    70,   112,   166,   232,   168,   167,   189,   204,
     228,   271,   181,   170,   304,   170,   304,   181,   118,   198,
     205,   165,   312,   106,   312,   194,   193,     1,   236,   166,
     120,   141,   166,    85,   247,     1,     3,    12,    17,    19,
      20,    25,    39,    45,    52,    54,    60,    66,    67,    82,
      94,    98,   101,   105,   111,   135,   136,   137,   138,   139,
     142,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   158,   161,   162,   163,   164,   167,   203,   204,
     206,   249,   250,   251,   294,   168,   306,   282,   294,   294,
     312,    32,    32,   312,    32,    32,   170,   170,   209,   209,
     235,   165,   235,   165,   209,    97,    44,   312,    44,   312,
     141,   168,    97,    44,   312,   209,    44,   312,   209,   312,
     312,   181,   312,   181,    34,   204,   204,   255,   278,   140,
     286,    85,   282,   279,   170,    47,   170,   167,   167,    32,
     181,   287,   228,   140,   189,    44,   181,   312,   170,    44,
     181,   312,   170,   312,   191,    13,    36,    69,    36,    69,
     160,   160,   166,    78,    81,   166,   180,   211,   312,   240,
     260,   167,   252,   204,   312,   135,   143,   252,   252,   279,
      97,    44,    44,    97,    44,    44,    44,    44,   165,   236,
     165,   236,   312,   312,   312,   306,   312,   312,   312,    13,
      34,   181,   160,   286,   168,   169,   208,   264,   285,   295,
     145,   265,   279,    58,   113,   266,   312,   283,   295,   291,
     291,   181,   209,   168,   312,   312,   181,   312,   181,   166,
     106,   312,   194,   193,   194,   193,   211,     1,   140,   281,
     254,   168,     3,    98,   250,   251,   312,   312,   312,   312,
     312,   312,   236,   166,   236,   166,    97,    97,    97,    97,
     312,   181,   279,   286,   170,   287,   264,   312,     3,    87,
      98,   267,   268,   269,   312,   189,   210,   263,   170,   168,
     168,   189,    97,    97,   160,   160,   160,   160,   169,   208,
     280,   295,   100,   261,   168,   252,   252,    97,    97,    97,
      97,    97,    97,   166,   166,   312,   312,   312,   312,   265,
     279,   264,   284,   285,   295,    47,   170,   269,   113,   141,
     120,   146,   148,   149,   152,   153,    58,   295,   159,   159,
     312,   312,     1,   170,   287,   266,   312,   284,   285,   312,
     268,   269,   269,   269,   269,   269,   269,   267,   170,   280,
     295,   170,   160,   262,   263,   170,   280,   295,   284
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   176,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   182,   183,   183,   183,   184,   184,   184,   185,
     185,   186,   186,   186,   188,   187,   189,   189,   189,   190,
     190,   191,   191,   191,   191,   192,   192,   192,   192,   192,
     192,   193,   193,   194,   194,   195,   195,   195,   196,   196,
     196,   196,   196,   196,   196,   197,   198,   198,   198,   199,
     199,   200,   201,   201,   201,   201,   201,   201,   202,   202,
     203,   203,   203,   203,   203,   203,   204,   204,   204,   204,
     204,   204,   205,   205,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   208,   208,   208,   208,   209,
     209,   210,   210,   211,   211,   211,   212,   211,   213,   213,
     213,   213,   213,   213,   213,   214,   214,   214,   214,   216,
     215,   217,   215,   218,   215,   219,   215,   215,   215,   215,
     215,   220,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   222,   223,
     223,   223,   223,   223,   223,   223,   223,   224,   225,   225,
     225,   225,   225,   225,   226,   226,   227,   227,   227,   228,
     228,   229,   230,   230,   231,   231,   232,   232,   232,   233,
     233,   234,   234,   234,   235,   235,   236,   236,   236,   237,
     237,   238,   239,   239,   239,   240,   240,   242,   243,   241,
     244,   244,   244,   246,   247,   245,   248,   248,   248,   248,
     248,   249,   249,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   252,   252,   253,   254,   254,   254,   255,
     255,   255,   255,   255,   256,   256,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   258,   258,   258,   258,   258,
     258,   259,   259,   260,   260,   260,   260,   260,   260,   261,
     261,   262,   262,   263,   263,   264,   264,   265,   265,   265,
     266,   266,   266,   266,   266,   267,   267,   268,   268,   268,
     268,   268,   268,   268,   269,   269,   270,   270,   270,   271,
     271,   272,   272,   272,   273,   273,   273,   273,   273,   274,
     274,   275,   275,   276,   276,   277,   277,   277,   278,   278,
     278,   279,   279,   279,   280,   280,   280,   280,   280,   280,
     280,   281,   281,   281,   281,   281,   282,   282,   282,   282,
     282,   283,   283,   283,   283,   284,   284,   284,   285,   285,
     285,   285,   285,   286,   286,   286,   286,   286,   287,   287,
     287,   287,   288,   288,   289,   289,   289,   290,   290,   291,
     291,   292,   292,   293,   293,   293,   293,   294,   294,   295,
     295,   295,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   298,   299,   300,   300,   300,   300,   300,   300,   300,
     300,   301,   301,   302,   303,   303,   304,   305,   305,   306,
     306,   306,   307,   307,   307,   307,   307,   307,   308,   308,
     309,   309,   309,   309,   309,   310,   310,   310,   310,   310,
     310,   310,   311,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   313,
     313,   314,   314,   314,   315,   315,   315,   315,   316,   316,
     316,   316,   317,   317,   317,   318,   318,   318,   318,   318,
     319,   319,   319,   319,   320,   320,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     322,   322,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   324,   324,   324,   324,   324,
     324,   324,   325,   325,   325,   325,   326,   326,   326,   326,
     327,   327,   327,   327,   327,   327,   327
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     4,     3,     2,     2,
       3,     2,     4,     3,     4,     4,     0,     1,     1,     0,
       1,     0,     1,     1,     0,     7,     2,     3,     3,     1,
       2,     1,     3,     3,     5,     1,     3,     3,     3,     5,
       5,     0,     1,     1,     1,     0,     1,     1,     4,     6,
       8,     8,     6,     8,     8,     4,     1,     3,     5,     1,
       3,     3,     4,     4,     4,     4,     4,     4,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     3,     1,     1,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     5,     2,     0,
       8,     0,     9,     0,     8,     0,     9,     3,     3,     5,
       5,     2,     5,     3,     6,     6,     4,     5,     5,     3,
       3,     6,     5,     6,     5,     6,     3,     4,     3,     4,
       6,     7,     6,     7,     4,     5,     4,     5,     4,     4,
       3,     6,     5,     6,     5,     8,     7,     2,     3,     3,
       2,     2,     3,     3,     0,     2,     2,     3,     5,     1,
       3,     3,     5,     5,     0,     2,     3,     2,     3,     6,
       6,     1,     1,     1,     0,     2,     0,     2,     3,     5,
       5,     1,     1,     2,     3,     1,     3,     0,     0,     8,
       0,     1,     1,     0,     0,    10,     3,     3,     5,     5,
       3,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     3,     0,     1,     3,     4,
       5,     4,     6,     6,     0,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     0,     1,     1,     2,     1,
       1,     1,     1,     0,     1,     2,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     2,
       0,     2,     2,     4,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     3,     4,     4,     2,
       4,     0,     2,     2,     1,     1,     1,     2,     1,     4,
       3,     1,     3,     3,     5,     1,     1,     3,     1,     2,
       3,     0,     2,     2,     3,     2,     4,     3,     3,     4,
       3,     0,     2,     2,     2,     1,     0,     2,     2,     2,
       1,     4,     4,     6,     3,     0,     1,     1,     3,     4,
       3,     4,     6,     0,     2,     2,     2,     2,     1,     1,
       3,     3,     1,     3,     1,     1,     1,     3,     3,     0,
       1,     1,     3,     3,     3,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     5,     2,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     6,     6,     4,     9,     9,     7,
       6,     6,     4,     9,     9,     7,     4,     6,     6,     9,
       9,     6,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     4,     1,     3,     4,     1,     3,     4,
       3,     3,     1,     1,     2,     1,     2,     1,     1,     3,
       1,     2,     2,     2,     2,     2,     8,     8,     9,     9,
       5,     5,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     3,     3,     2,     2,     2,     1,     0,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     4,     4,     4,     3,     3,     3,     3,     5,
       3,     4,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     4,     3,     4,
       3,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, context);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, ParserContext* context)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif
/* Parser data structure.  */
struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;
    /* Whether this instance has not started parsing yet.
     * If 2, it corresponds to a finished parsing.  */
    int yynew;
  };






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}





#define yynerrs yyps->yynerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yystacksize yyps->yystacksize

/* Initialize the parser data structure.  */
static void
yypstate_clear (yypstate *yyps)
{
  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

  /* Initialize the state stack, in case yypcontext_expected_tokens is
     called before the first call to yyparse. */
  *yyssp = 0;
  yyps->yynew = 1;
}

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = YY_CAST (yypstate *, malloc (sizeof *yyps));
  if (!yyps)
    return YY_NULLPTR;
  yystacksize = YYINITDEPTH;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yypstate_clear (yyps);
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
  if (yyps)
    {
#ifndef yyoverflow
      /* If the stack was reallocated but the parse did not complete, then the
         stack still needs to be freed.  */
      if (yyss != yyssa)
        YYSTACK_FREE (yyss);
#endif
      free (yyps);
    }
}



/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps,
              int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  switch (yyps->yynew)
    {
    case 2:
      yypstate_clear (yyps);
      goto case_0;

    case_0:
    case 0:
      yyn = yypact[yystate];
      goto yyread_pushed_token;
    }

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = *yypushed_loc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: toplevel_stmt_ls  */
#line 507 "chapel.ypp"
                                       { yyblock = (yyval.pblockstmt); }
#line 6238 "bison-chapel.cpp"
    break;

  case 3: /* toplevel_stmt_ls: %empty  */
#line 512 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
#line 6244 "bison-chapel.cpp"
    break;

  case 4: /* toplevel_stmt_ls: toplevel_stmt_ls toplevel_stmt  */
#line 513 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 6250 "bison-chapel.cpp"
    break;

  case 6: /* toplevel_stmt: pragma_ls stmt  */
#line 520 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 6256 "bison-chapel.cpp"
    break;

  case 7: /* pragma_ls: TPRAGMA STRINGLITERAL  */
#line 525 "chapel.ypp"
                                       { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 6262 "bison-chapel.cpp"
    break;

  case 8: /* pragma_ls: pragma_ls TPRAGMA STRINGLITERAL  */
#line 526 "chapel.ypp"
                                       { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 6268 "bison-chapel.cpp"
    break;

  case 25: /* stmt: stmt_level_expr TSEMI  */
#line 547 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 6274 "bison-chapel.cpp"
    break;

  case 26: /* stmt: TATOMIC stmt  */
#line 548 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 6280 "bison-chapel.cpp"
    break;

  case 27: /* stmt: TBEGIN opt_task_intent_ls stmt  */
#line 549 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 6286 "bison-chapel.cpp"
    break;

  case 28: /* stmt: TBREAK opt_label_ident TSEMI  */
#line 550 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 6292 "bison-chapel.cpp"
    break;

  case 29: /* stmt: TCOBEGIN opt_task_intent_ls block_stmt  */
#line 551 "chapel.ypp"
                                         { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 6298 "bison-chapel.cpp"
    break;

  case 30: /* stmt: TCONTINUE opt_label_ident TSEMI  */
#line 552 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 6304 "bison-chapel.cpp"
    break;

  case 31: /* stmt: TDELETE simple_expr_ls TSEMI  */
#line 553 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildDeleteStmt((yyvsp[-1].pcallexpr)); }
#line 6310 "bison-chapel.cpp"
    break;

  case 32: /* stmt: TLABEL ident_def stmt  */
#line 554 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 6316 "bison-chapel.cpp"
    break;

  case 33: /* stmt: TLOCAL expr do_stmt  */
#line 555 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6322 "bison-chapel.cpp"
    break;

  case 34: /* stmt: TLOCAL do_stmt  */
#line 556 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 6328 "bison-chapel.cpp"
    break;

  case 35: /* stmt: TON expr do_stmt  */
#line 557 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6334 "bison-chapel.cpp"
    break;

  case 36: /* stmt: TON TGPU expr do_stmt  */
#line 558 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildOnGPUStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6340 "bison-chapel.cpp"
    break;

  case 37: /* stmt: TSERIAL expr do_stmt  */
#line 559 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 6346 "bison-chapel.cpp"
    break;

  case 38: /* stmt: TSERIAL do_stmt  */
#line 560 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 6352 "bison-chapel.cpp"
    break;

  case 39: /* stmt: TSYNC stmt  */
#line 561 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 6358 "bison-chapel.cpp"
    break;

  case 40: /* stmt: TYIELD expr TSEMI  */
#line 562 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 6364 "bison-chapel.cpp"
    break;

  case 41: /* stmt: error TSEMI  */
#line 563 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 6370 "bison-chapel.cpp"
    break;

  case 42: /* module_decl_start: access_control opt_prototype TMODULE ident_def  */
#line 568 "chapel.ypp"
    {
      (yyval.pmodsymbol) = buildModule((yyvsp[0].pch), currentModuleType, NULL, yyfilename, (yyvsp[-3].b), (yyvsp[-2].b), (yylsp[-3]).comment);
      // store previous module name in order to restore it once we're
      // done with this module in module_decl_stmt below.  Ultimately,
      // we will need to store a stack of module names in order to
      // support full module path resolution of -s config flags.
      (yyloc).prevModule = currentModuleName;
      currentModuleName = (yyvsp[0].pch);
    }
#line 6384 "bison-chapel.cpp"
    break;

  case 43: /* module_decl_stmt: module_decl_start TLCBR TRCBR  */
#line 581 "chapel.ypp"
    { (yyvsp[-2].pmodsymbol)->block = new BlockStmt();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-2].pmodsymbol)));
      currentModuleName = (yylsp[-2]).prevModule;  // restore previous module name
    }
#line 6393 "bison-chapel.cpp"
    break;

  case 44: /* module_decl_stmt: module_decl_start TLCBR stmt_ls TRCBR  */
#line 586 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = (yyvsp[-1].pblockstmt);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 6402 "bison-chapel.cpp"
    break;

  case 45: /* module_decl_stmt: module_decl_start TLCBR error TRCBR  */
#line 591 "chapel.ypp"
    { (yyvsp[-3].pmodsymbol)->block = buildErrorStandin();
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr((yyvsp[-3].pmodsymbol)));
      currentModuleName = (yylsp[-3]).prevModule;  // restore previous module name
    }
#line 6411 "bison-chapel.cpp"
    break;

  case 46: /* access_control: %empty  */
#line 598 "chapel.ypp"
        { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6417 "bison-chapel.cpp"
    break;

  case 47: /* access_control: TPUBLIC  */
#line 599 "chapel.ypp"
          { (yyval.b) = false; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6423 "bison-chapel.cpp"
    break;

  case 48: /* access_control: TPRIVATE  */
#line 600 "chapel.ypp"
           { (yyval.b) = true; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 6429 "bison-chapel.cpp"
    break;

  case 49: /* opt_prototype: %empty  */
#line 604 "chapel.ypp"
             { (yyval.b) = false; }
#line 6435 "bison-chapel.cpp"
    break;

  case 50: /* opt_prototype: TPROTOTYPE  */
#line 605 "chapel.ypp"
             { (yyval.b) = true;  }
#line 6441 "bison-chapel.cpp"
    break;

  case 51: /* include_access_control: %empty  */
#line 609 "chapel.ypp"
           { (yyval.b) = false; }
#line 6447 "bison-chapel.cpp"
    break;

  case 52: /* include_access_control: TPUBLIC  */
#line 610 "chapel.ypp"
           { (yyval.b) = false; }
#line 6453 "bison-chapel.cpp"
    break;

  case 53: /* include_access_control: TPRIVATE  */
#line 611 "chapel.ypp"
           { (yyval.b) = true; }
#line 6459 "bison-chapel.cpp"
    break;

  case 54: /* $@1: %empty  */
#line 616 "chapel.ypp"
  {
    (yylsp[0]).comment = context->latestComment;
    context->latestComment = NULL;
  }
#line 6468 "bison-chapel.cpp"
    break;

  case 55: /* include_module_stmt: TINCLUDE $@1 include_access_control opt_prototype TMODULE ident_def TSEMI  */
#line 621 "chapel.ypp"
 {
   (yyval.pblockstmt) = buildIncludeModule((yyvsp[-1].pch), (yyvsp[-4].b), (yyvsp[-3].b), (yylsp[-6]).comment);
 }
#line 6476 "bison-chapel.cpp"
    break;

  case 56: /* block_stmt: TLCBR TRCBR  */
#line 636 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); }
#line 6482 "bison-chapel.cpp"
    break;

  case 57: /* block_stmt: TLCBR stmt_ls TRCBR  */
#line 637 "chapel.ypp"
                                       { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 6488 "bison-chapel.cpp"
    break;

  case 58: /* block_stmt: TLCBR error TRCBR  */
#line 638 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildErrorStandin(); }
#line 6494 "bison-chapel.cpp"
    break;

  case 59: /* stmt_ls: toplevel_stmt  */
#line 643 "chapel.ypp"
                                       { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 6500 "bison-chapel.cpp"
    break;

  case 60: /* stmt_ls: stmt_ls toplevel_stmt  */
#line 644 "chapel.ypp"
                                       { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 6506 "bison-chapel.cpp"
    break;

  case 61: /* renames_ls: expr  */
#line 649 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 6516 "bison-chapel.cpp"
    break;

  case 62: /* renames_ls: expr TAS expr  */
#line 654 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 6526 "bison-chapel.cpp"
    break;

  case 63: /* renames_ls: renames_ls TCOMMA expr  */
#line 659 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 6535 "bison-chapel.cpp"
    break;

  case 64: /* renames_ls: renames_ls TCOMMA expr TAS expr  */
#line 663 "chapel.ypp"
                                          { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 6544 "bison-chapel.cpp"
    break;

  case 65: /* use_renames_ls: expr  */
#line 672 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyval.ponlylist)->push_back(cur); }
#line 6554 "bison-chapel.cpp"
    break;

  case 66: /* use_renames_ls: expr TAS expr  */
#line 677 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyval.ponlylist)->push_back(cur); }
#line 6564 "bison-chapel.cpp"
    break;

  case 67: /* use_renames_ls: expr TAS TUNDERSCORE  */
#line 682 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyval.ponlylist)->push_back(cur); }
#line 6574 "bison-chapel.cpp"
    break;

  case 68: /* use_renames_ls: use_renames_ls TCOMMA expr  */
#line 687 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = (yyvsp[0].pexpr);
                                         (yyvsp[-2].ponlylist)->push_back(cur); }
#line 6583 "bison-chapel.cpp"
    break;

  case 69: /* use_renames_ls: use_renames_ls TCOMMA expr TAS expr  */
#line 691 "chapel.ypp"
                                       { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), (yyvsp[0].pexpr));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 6592 "bison-chapel.cpp"
    break;

  case 70: /* use_renames_ls: use_renames_ls TCOMMA expr TAS TUNDERSCORE  */
#line 695 "chapel.ypp"
                                             { PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::DOUBLE;
                                         cur->renamed = new std::pair<Expr*, Expr*>((yyvsp[-2].pexpr), new UnresolvedSymExpr("_"));
                                         (yyvsp[-4].ponlylist)->push_back(cur); }
#line 6601 "bison-chapel.cpp"
    break;

  case 71: /* opt_only_ls: %empty  */
#line 703 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 6611 "bison-chapel.cpp"
    break;

  case 73: /* except_ls: TSTAR  */
#line 712 "chapel.ypp"
                                       { (yyval.ponlylist) = new std::vector<PotentialRename*>();
                                         PotentialRename* cur = new PotentialRename();
                                         cur->tag = PotentialRename::SINGLE;
                                         cur->elem = new UnresolvedSymExpr("");
                                         (yyval.ponlylist)->push_back(cur); }
#line 6621 "bison-chapel.cpp"
    break;

  case 75: /* use_access_control: %empty  */
#line 721 "chapel.ypp"
           { (yyval.b) = true; }
#line 6627 "bison-chapel.cpp"
    break;

  case 76: /* use_access_control: TPUBLIC  */
#line 722 "chapel.ypp"
           { (yyval.b) = false; }
#line 6633 "bison-chapel.cpp"
    break;

  case 77: /* use_access_control: TPRIVATE  */
#line 723 "chapel.ypp"
           { (yyval.b) = true; }
#line 6639 "bison-chapel.cpp"
    break;

  case 78: /* use_stmt: use_access_control TUSE use_renames_ls TSEMI  */
#line 727 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].ponlylist), (yyvsp[-3].b)); }
#line 6645 "bison-chapel.cpp"
    break;

  case 79: /* use_stmt: use_access_control TUSE expr TEXCEPT except_ls TSEMI  */
#line 728 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), true, (yyvsp[-5].b)); }
#line 6651 "bison-chapel.cpp"
    break;

  case 80: /* use_stmt: use_access_control TUSE expr TAS expr TEXCEPT except_ls TSEMI  */
#line 729 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 6657 "bison-chapel.cpp"
    break;

  case 81: /* use_stmt: use_access_control TUSE expr TAS TUNDERSCORE TEXCEPT except_ls TSEMI  */
#line 730 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), true, (yyvsp[-7].b)); }
#line 6663 "bison-chapel.cpp"
    break;

  case 82: /* use_stmt: use_access_control TUSE expr TONLY opt_only_ls TSEMI  */
#line 731 "chapel.ypp"
                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-3].pexpr), "", (yyvsp[-1].ponlylist), false, (yyvsp[-5].b)); }
#line 6669 "bison-chapel.cpp"
    break;

  case 83: /* use_stmt: use_access_control TUSE expr TAS expr TONLY opt_only_ls TSEMI  */
#line 732 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), (yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 6675 "bison-chapel.cpp"
    break;

  case 84: /* use_stmt: use_access_control TUSE expr TAS TUNDERSCORE TONLY opt_only_ls TSEMI  */
#line 733 "chapel.ypp"
                                                                          { (yyval.pblockstmt) = buildUseStmt((yyvsp[-5].pexpr), new UnresolvedSymExpr("_"), (yyvsp[-1].ponlylist), false, (yyvsp[-7].b)); }
#line 6681 "bison-chapel.cpp"
    break;

  case 85: /* import_stmt: use_access_control TIMPORT import_ls TSEMI  */
#line 737 "chapel.ypp"
                                             { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);
                                               setImportPrivacy((yyval.pblockstmt), (yyvsp[-3].b));}
#line 6688 "bison-chapel.cpp"
    break;

  case 86: /* import_expr: expr  */
#line 742 "chapel.ypp"
       { (yyval.pimportstmt) = buildImportStmt((yyvsp[0].pexpr)); }
#line 6694 "bison-chapel.cpp"
    break;

  case 87: /* import_expr: expr TAS ident_use  */
#line 743 "chapel.ypp"
                     { (yyval.pimportstmt) = buildImportStmt((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 6700 "bison-chapel.cpp"
    break;

  case 88: /* import_expr: expr TDOT TLCBR renames_ls TRCBR  */
#line 744 "chapel.ypp"
                                   { (yyval.pimportstmt) = buildImportStmt((yyvsp[-4].pexpr), (yyvsp[-1].ponlylist)); }
#line 6706 "bison-chapel.cpp"
    break;

  case 89: /* import_ls: import_expr  */
#line 748 "chapel.ypp"
              { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pimportstmt)); }
#line 6712 "bison-chapel.cpp"
    break;

  case 90: /* import_ls: import_ls TCOMMA import_expr  */
#line 749 "chapel.ypp"
                               { (yyval.pblockstmt) = (yyvsp[-2].pblockstmt); (yyval.pblockstmt)->insertAtTail((yyvsp[0].pimportstmt)); }
#line 6718 "bison-chapel.cpp"
    break;

  case 91: /* require_stmt: TREQUIRE expr_ls TSEMI  */
#line 753 "chapel.ypp"
                                       { (yyval.pblockstmt) = buildRequireStmt((yyvsp[-1].pcallexpr)); }
#line 6724 "bison-chapel.cpp"
    break;

  case 92: /* assignment_stmt: lhs_expr assignop_ident opt_try_expr TSEMI  */
#line 758 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[-2].pch));   }
#line 6730 "bison-chapel.cpp"
    break;

  case 93: /* assignment_stmt: lhs_expr TSWAP opt_try_expr TSEMI  */
#line 760 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 6736 "bison-chapel.cpp"
    break;

  case 94: /* assignment_stmt: lhs_expr TASSIGNREDUCE opt_try_expr TSEMI  */
#line 762 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), PRIM_REDUCE_ASSIGN); }
#line 6742 "bison-chapel.cpp"
    break;

  case 95: /* assignment_stmt: lhs_expr TASSIGNLAND opt_try_expr TSEMI  */
#line 764 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 6748 "bison-chapel.cpp"
    break;

  case 96: /* assignment_stmt: lhs_expr TASSIGNLOR opt_try_expr TSEMI  */
#line 766 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 6754 "bison-chapel.cpp"
    break;

  case 97: /* assignment_stmt: lhs_expr TASSIGN TNOINIT TSEMI  */
#line 768 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), new SymExpr(gNoInit), "="); }
#line 6760 "bison-chapel.cpp"
    break;

  case 98: /* opt_label_ident: %empty  */
#line 774 "chapel.ypp"
         { (yyval.pch) = NULL; }
#line 6766 "bison-chapel.cpp"
    break;

  case 99: /* opt_label_ident: TIDENT  */
#line 775 "chapel.ypp"
         { (yyval.pch) = (yyvsp[0].pch); }
#line 6772 "bison-chapel.cpp"
    break;

  case 100: /* ident_fn_def: TIDENT  */
#line 779 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 6778 "bison-chapel.cpp"
    break;

  case 101: /* ident_fn_def: TNONE  */
#line 780 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 6784 "bison-chapel.cpp"
    break;

  case 102: /* ident_fn_def: TTHIS  */
#line 781 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 6790 "bison-chapel.cpp"
    break;

  case 103: /* ident_fn_def: TFALSE  */
#line 782 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 6796 "bison-chapel.cpp"
    break;

  case 104: /* ident_fn_def: TTRUE  */
#line 783 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 6802 "bison-chapel.cpp"
    break;

  case 105: /* ident_fn_def: internal_type_ident_def  */
#line 784 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 6808 "bison-chapel.cpp"
    break;

  case 106: /* ident_def: TIDENT  */
#line 787 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 6814 "bison-chapel.cpp"
    break;

  case 107: /* ident_def: TNONE  */
#line 788 "chapel.ypp"
                           { (yyval.pch) = "none"; redefiningReservedWordError((yyval.pch)); }
#line 6820 "bison-chapel.cpp"
    break;

  case 108: /* ident_def: TTHIS  */
#line 789 "chapel.ypp"
                           { (yyval.pch) = "this"; redefiningReservedWordError((yyval.pch)); }
#line 6826 "bison-chapel.cpp"
    break;

  case 109: /* ident_def: TFALSE  */
#line 790 "chapel.ypp"
                           { (yyval.pch) = "false"; redefiningReservedWordError((yyval.pch)); }
#line 6832 "bison-chapel.cpp"
    break;

  case 110: /* ident_def: TTRUE  */
#line 791 "chapel.ypp"
                           { (yyval.pch) = "true"; redefiningReservedWordError((yyval.pch)); }
#line 6838 "bison-chapel.cpp"
    break;

  case 111: /* ident_def: internal_type_ident_def  */
#line 792 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); redefiningReservedTypeError((yyvsp[0].pch)); }
#line 6844 "bison-chapel.cpp"
    break;

  case 112: /* ident_use: TIDENT  */
#line 804 "chapel.ypp"
                           { (yyval.pch) = (yyvsp[0].pch); }
#line 6850 "bison-chapel.cpp"
    break;

  case 113: /* ident_use: TTHIS  */
#line 805 "chapel.ypp"
                           { (yyval.pch) = "this"; }
#line 6856 "bison-chapel.cpp"
    break;

  case 114: /* internal_type_ident_def: TBOOL  */
#line 816 "chapel.ypp"
             { (yyval.pch) = "bool"; }
#line 6862 "bison-chapel.cpp"
    break;

  case 115: /* internal_type_ident_def: TINT  */
#line 817 "chapel.ypp"
             { (yyval.pch) = "int"; }
#line 6868 "bison-chapel.cpp"
    break;

  case 116: /* internal_type_ident_def: TUINT  */
#line 818 "chapel.ypp"
             { (yyval.pch) = "uint"; }
#line 6874 "bison-chapel.cpp"
    break;

  case 117: /* internal_type_ident_def: TREAL  */
#line 819 "chapel.ypp"
             { (yyval.pch) = "real"; }
#line 6880 "bison-chapel.cpp"
    break;

  case 118: /* internal_type_ident_def: TIMAG  */
#line 820 "chapel.ypp"
             { (yyval.pch) = "imag"; }
#line 6886 "bison-chapel.cpp"
    break;

  case 119: /* internal_type_ident_def: TCOMPLEX  */
#line 821 "chapel.ypp"
             { (yyval.pch) = "complex"; }
#line 6892 "bison-chapel.cpp"
    break;

  case 120: /* internal_type_ident_def: TBYTES  */
#line 822 "chapel.ypp"
             { (yyval.pch) = "bytes"; }
#line 6898 "bison-chapel.cpp"
    break;

  case 121: /* internal_type_ident_def: TSTRING  */
#line 823 "chapel.ypp"
             { (yyval.pch) = "string"; }
#line 6904 "bison-chapel.cpp"
    break;

  case 122: /* internal_type_ident_def: TSYNC  */
#line 824 "chapel.ypp"
             { (yyval.pch) = "sync"; }
#line 6910 "bison-chapel.cpp"
    break;

  case 123: /* internal_type_ident_def: TSINGLE  */
#line 825 "chapel.ypp"
             { (yyval.pch) = "single"; }
#line 6916 "bison-chapel.cpp"
    break;

  case 124: /* internal_type_ident_def: TOWNED  */
#line 826 "chapel.ypp"
             { (yyval.pch) = "owned"; }
#line 6922 "bison-chapel.cpp"
    break;

  case 125: /* internal_type_ident_def: TSHARED  */
#line 827 "chapel.ypp"
             { (yyval.pch) = "shared"; }
#line 6928 "bison-chapel.cpp"
    break;

  case 126: /* internal_type_ident_def: TBORROWED  */
#line 828 "chapel.ypp"
             { (yyval.pch) = "borrowed"; }
#line 6934 "bison-chapel.cpp"
    break;

  case 127: /* internal_type_ident_def: TUNMANAGED  */
#line 829 "chapel.ypp"
             { (yyval.pch) = "unmanaged"; }
#line 6940 "bison-chapel.cpp"
    break;

  case 128: /* internal_type_ident_def: TDOMAIN  */
#line 830 "chapel.ypp"
             { (yyval.pch) = "domain"; }
#line 6946 "bison-chapel.cpp"
    break;

  case 129: /* internal_type_ident_def: TINDEX  */
#line 831 "chapel.ypp"
             { (yyval.pch) = "index"; }
#line 6952 "bison-chapel.cpp"
    break;

  case 130: /* internal_type_ident_def: TLOCALE  */
#line 832 "chapel.ypp"
             { (yyval.pch) = "locale"; }
#line 6958 "bison-chapel.cpp"
    break;

  case 131: /* internal_type_ident_def: TNOTHING  */
#line 833 "chapel.ypp"
             { (yyval.pch) = "nothing"; }
#line 6964 "bison-chapel.cpp"
    break;

  case 132: /* internal_type_ident_def: TVOID  */
#line 834 "chapel.ypp"
             { (yyval.pch) = "void"; }
#line 6970 "bison-chapel.cpp"
    break;

  case 133: /* scalar_type: TBOOL  */
#line 838 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBools[BOOL_SIZE_DEFAULT]->symbol); }
#line 6976 "bison-chapel.cpp"
    break;

  case 134: /* scalar_type: TENUM  */
#line 839 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtAnyEnumerated->symbol); }
#line 6982 "bison-chapel.cpp"
    break;

  case 135: /* scalar_type: TINT  */
#line 840 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtInt[INT_SIZE_DEFAULT]->symbol); }
#line 6988 "bison-chapel.cpp"
    break;

  case 136: /* scalar_type: TUINT  */
#line 841 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtUInt[INT_SIZE_DEFAULT]->symbol); }
#line 6994 "bison-chapel.cpp"
    break;

  case 137: /* scalar_type: TREAL  */
#line 842 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtReal[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7000 "bison-chapel.cpp"
    break;

  case 138: /* scalar_type: TIMAG  */
#line 843 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtImag[FLOAT_SIZE_DEFAULT]->symbol); }
#line 7006 "bison-chapel.cpp"
    break;

  case 139: /* scalar_type: TCOMPLEX  */
#line 844 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtComplex[COMPLEX_SIZE_DEFAULT]->symbol); }
#line 7012 "bison-chapel.cpp"
    break;

  case 140: /* scalar_type: TBYTES  */
#line 845 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtBytes->symbol); }
#line 7018 "bison-chapel.cpp"
    break;

  case 141: /* scalar_type: TSTRING  */
#line 846 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtString->symbol); }
#line 7024 "bison-chapel.cpp"
    break;

  case 142: /* scalar_type: TLOCALE  */
#line 847 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtLocale->symbol); }
#line 7030 "bison-chapel.cpp"
    break;

  case 143: /* scalar_type: TNOTHING  */
#line 848 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtNothing->symbol); }
#line 7036 "bison-chapel.cpp"
    break;

  case 144: /* scalar_type: TVOID  */
#line 849 "chapel.ypp"
           { (yyval.pexpr) = new SymExpr(dtVoid->symbol); }
#line 7042 "bison-chapel.cpp"
    break;

  case 145: /* reserved_type_ident_use: TSYNC  */
#line 856 "chapel.ypp"
             { (yyval.pch) = "_syncvar"; }
#line 7048 "bison-chapel.cpp"
    break;

  case 146: /* reserved_type_ident_use: TSINGLE  */
#line 857 "chapel.ypp"
             { (yyval.pch) = "_singlevar"; }
#line 7054 "bison-chapel.cpp"
    break;

  case 147: /* reserved_type_ident_use: TDOMAIN  */
#line 858 "chapel.ypp"
             { (yyval.pch) = "_domain"; }
#line 7060 "bison-chapel.cpp"
    break;

  case 148: /* reserved_type_ident_use: TINDEX  */
#line 859 "chapel.ypp"
             { (yyval.pch) = "_index"; }
#line 7066 "bison-chapel.cpp"
    break;

  case 149: /* do_stmt: TDO stmt  */
#line 863 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7072 "bison-chapel.cpp"
    break;

  case 150: /* do_stmt: block_stmt  */
#line 864 "chapel.ypp"
              { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7078 "bison-chapel.cpp"
    break;

  case 151: /* return_stmt: TRETURN TSEMI  */
#line 868 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN); }
#line 7084 "bison-chapel.cpp"
    break;

  case 152: /* return_stmt: TRETURN opt_try_expr TSEMI  */
#line 869 "chapel.ypp"
                              { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 7090 "bison-chapel.cpp"
    break;

  case 153: /* class_level_stmt: TSEMI  */
#line 873 "chapel.ypp"
                        { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 7096 "bison-chapel.cpp"
    break;

  case 155: /* class_level_stmt: TPUBLIC private_decl  */
#line 875 "chapel.ypp"
                        { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7102 "bison-chapel.cpp"
    break;

  case 156: /* @2: %empty  */
#line 885 "chapel.ypp"
           { (yyval.b) = parsingPrivate; parsingPrivate=true;}
#line 7108 "bison-chapel.cpp"
    break;

  case 157: /* class_level_stmt: TPRIVATE @2 private_decl  */
#line 886 "chapel.ypp"
                 { parsingPrivate=(yyvsp[-1].b); applyPrivateToBlock((yyvsp[0].pblockstmt)); (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 7114 "bison-chapel.cpp"
    break;

  case 165: /* forwarding_stmt: TFORWARDING expr TSEMI  */
#line 900 "chapel.ypp"
                          { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-1].pexpr)); }
#line 7120 "bison-chapel.cpp"
    break;

  case 166: /* forwarding_stmt: TFORWARDING expr TEXCEPT except_ls TSEMI  */
#line 901 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), true); }
#line 7126 "bison-chapel.cpp"
    break;

  case 167: /* forwarding_stmt: TFORWARDING expr TONLY opt_only_ls TSEMI  */
#line 902 "chapel.ypp"
                                            { (yyval.pblockstmt) = buildForwardingStmt((yyvsp[-3].pexpr), (yyvsp[-1].ponlylist), false); }
#line 7132 "bison-chapel.cpp"
    break;

  case 168: /* forwarding_stmt: TFORWARDING var_decl_stmt  */
#line 903 "chapel.ypp"
                            { (yyval.pblockstmt) = buildForwardingDeclStmt((yyvsp[0].pblockstmt)); }
#line 7138 "bison-chapel.cpp"
    break;

  case 169: /* $@3: %empty  */
#line 908 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7147 "bison-chapel.cpp"
    break;

  case 170: /* extern_export_decl_stmt: TEXTERN TRECORD $@3 ident_def opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 913 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7161 "bison-chapel.cpp"
    break;

  case 171: /* $@4: %empty  */
#line 923 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7170 "bison-chapel.cpp"
    break;

  case 172: /* extern_export_decl_stmt: TEXTERN STRINGLITERAL TRECORD $@4 ident_def opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 928 "chapel.ypp"
    {

      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXTERN,
                                             (yylsp[-6]).comment));
    }
#line 7185 "bison-chapel.cpp"
    break;

  case 173: /* $@5: %empty  */
#line 939 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7194 "bison-chapel.cpp"
    break;

  case 174: /* extern_export_decl_stmt: TEXPORT TRECORD $@5 ident_def opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 944 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7208 "bison-chapel.cpp"
    break;

  case 175: /* $@6: %empty  */
#line 954 "chapel.ypp"
    {
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7217 "bison-chapel.cpp"
    break;

  case 176: /* extern_export_decl_stmt: TEXPORT STRINGLITERAL TRECORD $@6 ident_def opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 959 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             (yyvsp[-7].pch),
                                             AGGREGATE_RECORD,
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_EXPORT,
                                             (yylsp[-6]).comment));
    }
#line 7231 "bison-chapel.cpp"
    break;

  case 177: /* extern_export_decl_stmt: TEXTERN opt_expr fn_decl_stmt  */
#line 970 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXTERN, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7239 "bison-chapel.cpp"
    break;

  case 178: /* extern_export_decl_stmt: TEXPORT opt_expr fn_decl_stmt  */
#line 974 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternExportFunctionDecl(FLAG_EXPORT, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt));
    }
#line 7247 "bison-chapel.cpp"
    break;

  case 179: /* extern_export_decl_stmt: TEXTERN opt_expr var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 979 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXTERN);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7259 "bison-chapel.cpp"
    break;

  case 180: /* extern_export_decl_stmt: TEXPORT opt_expr var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 987 "chapel.ypp"
    {
      const char* comment = context->latestComment;
      context->latestComment = NULL;

      (yyvsp[-2].pflagset)->insert(FLAG_EXPORT);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), comment, (yyvsp[-2].pflagset), (yyvsp[-3].pexpr));
    }
#line 7271 "bison-chapel.cpp"
    break;

  case 181: /* extern_block_stmt: TEXTERN EXTERNCODE  */
#line 998 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
    }
#line 7279 "bison-chapel.cpp"
    break;

  case 182: /* loop_stmt: TDO stmt TWHILE expr TSEMI  */
#line 1004 "chapel.ypp"
                                                { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 7285 "bison-chapel.cpp"
    break;

  case 183: /* loop_stmt: TWHILE expr do_stmt  */
#line 1005 "chapel.ypp"
                                                { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7291 "bison-chapel.cpp"
    break;

  case 184: /* loop_stmt: TCOFORALL expr TIN expr opt_task_intent_ls do_stmt  */
#line 1006 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));       }
#line 7297 "bison-chapel.cpp"
    break;

  case 185: /* loop_stmt: TCOFORALL expr TIN zippered_iterator opt_task_intent_ls do_stmt  */
#line 1007 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 7303 "bison-chapel.cpp"
    break;

  case 186: /* loop_stmt: TCOFORALL expr opt_task_intent_ls do_stmt  */
#line 1008 "chapel.ypp"
                                                                  { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));     }
#line 7309 "bison-chapel.cpp"
    break;

  case 187: /* loop_stmt: TFOR expr TIN expr do_stmt  */
#line 1009 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 7315 "bison-chapel.cpp"
    break;

  case 188: /* loop_stmt: TFOR expr TIN zippered_iterator do_stmt  */
#line 1010 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 7321 "bison-chapel.cpp"
    break;

  case 189: /* loop_stmt: TFOR expr do_stmt  */
#line 1011 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 7327 "bison-chapel.cpp"
    break;

  case 190: /* loop_stmt: TFOR zippered_iterator do_stmt  */
#line 1012 "chapel.ypp"
                                                { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true, false); }
#line 7333 "bison-chapel.cpp"
    break;

  case 191: /* loop_stmt: TFOR TPARAM ident_def TIN expr do_stmt  */
#line 1013 "chapel.ypp"
                                                { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7339 "bison-chapel.cpp"
    break;

  case 192: /* loop_stmt: TFORALL expr TIN expr do_stmt  */
#line 1014 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 7345 "bison-chapel.cpp"
    break;

  case 193: /* loop_stmt: TFORALL expr TIN expr forall_intent_clause do_stmt  */
#line 1015 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 7351 "bison-chapel.cpp"
    break;

  case 194: /* loop_stmt: TFORALL expr TIN zippered_iterator do_stmt  */
#line 1016 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-3].pexpr),   (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 7357 "bison-chapel.cpp"
    break;

  case 195: /* loop_stmt: TFORALL expr TIN zippered_iterator forall_intent_clause do_stmt  */
#line 1017 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pexpr),   (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 7363 "bison-chapel.cpp"
    break;

  case 196: /* loop_stmt: TFORALL expr do_stmt  */
#line 1018 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), false, false); }
#line 7369 "bison-chapel.cpp"
    break;

  case 197: /* loop_stmt: TFORALL expr forall_intent_clause do_stmt  */
#line 1019 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), false, false); }
#line 7375 "bison-chapel.cpp"
    break;

  case 198: /* loop_stmt: TFORALL zippered_iterator do_stmt  */
#line 1020 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-1].pcallexpr), NULL, (yyvsp[0].pblockstmt), true,  false); }
#line 7381 "bison-chapel.cpp"
    break;

  case 199: /* loop_stmt: TFORALL zippered_iterator forall_intent_clause do_stmt  */
#line 1021 "chapel.ypp"
                                                                   { (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true,  false); }
#line 7387 "bison-chapel.cpp"
    break;

  case 200: /* loop_stmt: TLSBR expr_ls TIN expr TRSBR stmt  */
#line 1023 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7397 "bison-chapel.cpp"
    break;

  case 201: /* loop_stmt: TLSBR expr_ls TIN expr forall_intent_clause TRSBR stmt  */
#line 1029 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7407 "bison-chapel.cpp"
    break;

  case 202: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator TRSBR stmt  */
#line 1035 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7417 "bison-chapel.cpp"
    break;

  case 203: /* loop_stmt: TLSBR expr_ls TIN zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1041 "chapel.ypp"
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pcallexpr), "invalid index expression");
      (yyval.pblockstmt) = ForallStmt::build((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7427 "bison-chapel.cpp"
    break;

  case 204: /* loop_stmt: TLSBR expr_ls TRSBR stmt  */
#line 1047 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(),                       NULL, new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7438 "bison-chapel.cpp"
    break;

  case 205: /* loop_stmt: TLSBR expr_ls forall_intent_clause TRSBR stmt  */
#line 1054 "chapel.ypp"
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = ForallStmt::build(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
      else
        (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(),                       (yyvsp[-2].pcallexpr), new BlockStmt((yyvsp[0].pblockstmt)), false, true);
    }
#line 7449 "bison-chapel.cpp"
    break;

  case 206: /* loop_stmt: TLSBR zippered_iterator TRSBR stmt  */
#line 1061 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-2].pcallexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7457 "bison-chapel.cpp"
    break;

  case 207: /* loop_stmt: TLSBR zippered_iterator forall_intent_clause TRSBR stmt  */
#line 1065 "chapel.ypp"
    {
      (yyval.pblockstmt) = ForallStmt::build(NULL, (yyvsp[-3].pcallexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true,  true);
    }
#line 7465 "bison-chapel.cpp"
    break;

  case 208: /* zippered_iterator: TZIP TLP expr_ls TRP  */
#line 1071 "chapel.ypp"
                            { (yyval.pcallexpr) = new CallExpr(PRIM_ZIP, (yyvsp[-1].pcallexpr)); }
#line 7471 "bison-chapel.cpp"
    break;

  case 209: /* if_stmt: TIF expr TTHEN stmt  */
#line 1075 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 7477 "bison-chapel.cpp"
    break;

  case 210: /* if_stmt: TIF expr block_stmt  */
#line 1076 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 7483 "bison-chapel.cpp"
    break;

  case 211: /* if_stmt: TIF expr TTHEN stmt TELSE stmt  */
#line 1077 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7489 "bison-chapel.cpp"
    break;

  case 212: /* if_stmt: TIF expr block_stmt TELSE stmt  */
#line 1078 "chapel.ypp"
                                     { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7495 "bison-chapel.cpp"
    break;

  case 213: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt  */
#line 1079 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-4].pexpr),(yyvsp[-3].pch),(yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 7502 "bison-chapel.cpp"
    break;

  case 214: /* if_stmt: TIF expr assignop_ident expr block_stmt  */
#line 1081 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-3].pexpr),(yyvsp[-2].pch),(yyvsp[-1].pexpr)), (yyvsp[0].pblockstmt)); }
#line 7509 "bison-chapel.cpp"
    break;

  case 215: /* if_stmt: TIF expr assignop_ident expr TTHEN stmt TELSE stmt  */
#line 1083 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-6].pexpr),(yyvsp[-5].pch),(yyvsp[-4].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7516 "bison-chapel.cpp"
    break;

  case 216: /* if_stmt: TIF expr assignop_ident expr block_stmt TELSE stmt  */
#line 1085 "chapel.ypp"
                                                         {
(yyval.pblockstmt) = buildIfStmt(convertAssignmentAndWarn((yyvsp[-5].pexpr),(yyvsp[-4].pch),(yyvsp[-3].pexpr)), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7523 "bison-chapel.cpp"
    break;

  case 217: /* defer_stmt: TDEFER stmt  */
#line 1090 "chapel.ypp"
                          { (yyval.pblockstmt) = DeferStmt::build((yyvsp[0].pblockstmt)); }
#line 7529 "bison-chapel.cpp"
    break;

  case 218: /* try_stmt: TTRY expr TSEMI  */
#line 1093 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pexpr)); }
#line 7535 "bison-chapel.cpp"
    break;

  case 219: /* try_stmt: TTRYBANG expr TSEMI  */
#line 1094 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pexpr)); }
#line 7541 "bison-chapel.cpp"
    break;

  case 220: /* try_stmt: TTRY assignment_stmt  */
#line 1095 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[0].pblockstmt)); }
#line 7547 "bison-chapel.cpp"
    break;

  case 221: /* try_stmt: TTRYBANG assignment_stmt  */
#line 1096 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[0].pblockstmt)); }
#line 7553 "bison-chapel.cpp"
    break;

  case 222: /* try_stmt: TTRY block_stmt catch_stmt_ls  */
#line 1097 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(false, (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7559 "bison-chapel.cpp"
    break;

  case 223: /* try_stmt: TTRYBANG block_stmt catch_stmt_ls  */
#line 1098 "chapel.ypp"
                                         { (yyval.pblockstmt) = TryStmt::build(true,  (yyvsp[-1].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 7565 "bison-chapel.cpp"
    break;

  case 224: /* catch_stmt_ls: %empty  */
#line 1102 "chapel.ypp"
                           { (yyval.pblockstmt) = buildChapelStmt(); }
#line 7571 "bison-chapel.cpp"
    break;

  case 225: /* catch_stmt_ls: catch_stmt_ls catch_stmt  */
#line 1103 "chapel.ypp"
                           { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 7577 "bison-chapel.cpp"
    break;

  case 226: /* catch_stmt: TCATCH block_stmt  */
#line 1107 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[0].pblockstmt)); }
#line 7583 "bison-chapel.cpp"
    break;

  case 227: /* catch_stmt: TCATCH catch_expr block_stmt  */
#line 1108 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-1].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 7589 "bison-chapel.cpp"
    break;

  case 228: /* catch_stmt: TCATCH TLP catch_expr TRP block_stmt  */
#line 1109 "chapel.ypp"
                                       { (yyval.pexpr) = CatchStmt::build((yyvsp[-2].pdefexpr), (yyvsp[0].pblockstmt)); }
#line 7595 "bison-chapel.cpp"
    break;

  case 229: /* catch_expr: ident_def  */
#line 1113 "chapel.ypp"
                      { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch)), NULL, new UnresolvedSymExpr("Error")); }
#line 7601 "bison-chapel.cpp"
    break;

  case 230: /* catch_expr: ident_def TCOLON expr  */
#line 1114 "chapel.ypp"
                        { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[-2].pch)), NULL, (yyvsp[0].pexpr));   }
#line 7607 "bison-chapel.cpp"
    break;

  case 231: /* throw_stmt: TTHROW expr TSEMI  */
#line 1118 "chapel.ypp"
                    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_THROW, (yyvsp[-1].pexpr)); }
#line 7613 "bison-chapel.cpp"
    break;

  case 232: /* select_stmt: TSELECT expr TLCBR when_stmt_ls TRCBR  */
#line 1122 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 7619 "bison-chapel.cpp"
    break;

  case 233: /* select_stmt: TSELECT expr TLCBR error TRCBR  */
#line 1124 "chapel.ypp"
    { (yyval.pblockstmt) = buildErrorStandin(); }
#line 7625 "bison-chapel.cpp"
    break;

  case 234: /* when_stmt_ls: %empty  */
#line 1128 "chapel.ypp"
                          { (yyval.pblockstmt) = buildChapelStmt(); }
#line 7631 "bison-chapel.cpp"
    break;

  case 235: /* when_stmt_ls: when_stmt_ls when_stmt  */
#line 1129 "chapel.ypp"
                          { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 7637 "bison-chapel.cpp"
    break;

  case 236: /* when_stmt: TWHEN expr_ls do_stmt  */
#line 1134 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 7643 "bison-chapel.cpp"
    break;

  case 237: /* when_stmt: TOTHERWISE stmt  */
#line 1136 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 7649 "bison-chapel.cpp"
    break;

  case 238: /* when_stmt: TOTHERWISE TDO stmt  */
#line 1138 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 7655 "bison-chapel.cpp"
    break;

  case 239: /* class_decl_stmt: class_tag ident_def opt_inherit TLCBR class_level_stmt_ls TRCBR  */
#line 1145 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             (yyvsp[-1].pblockstmt),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 7669 "bison-chapel.cpp"
    break;

  case 240: /* class_decl_stmt: class_tag ident_def opt_inherit TLCBR error TRCBR  */
#line 1155 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch),
                                             NULL,
                                             (yyvsp[-5].aggrTag),
                                             (yyvsp[-3].pcallexpr),
                                             new BlockStmt(),
                                             FLAG_UNKNOWN,
                                             (yylsp[-5]).comment));
    }
#line 7683 "bison-chapel.cpp"
    break;

  case 241: /* class_tag: TCLASS  */
#line 1168 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_CLASS;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 7693 "bison-chapel.cpp"
    break;

  case 242: /* class_tag: TRECORD  */
#line 1173 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_RECORD;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 7703 "bison-chapel.cpp"
    break;

  case 243: /* class_tag: TUNION  */
#line 1178 "chapel.ypp"
           {
             (yyval.aggrTag)                     = AGGREGATE_UNION;
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 7713 "bison-chapel.cpp"
    break;

  case 244: /* opt_inherit: %empty  */
#line 1186 "chapel.ypp"
                  { (yyval.pcallexpr) = NULL; }
#line 7719 "bison-chapel.cpp"
    break;

  case 245: /* opt_inherit: TCOLON expr_ls  */
#line 1187 "chapel.ypp"
                  { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 7725 "bison-chapel.cpp"
    break;

  case 246: /* class_level_stmt_ls: %empty  */
#line 1192 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 7731 "bison-chapel.cpp"
    break;

  case 247: /* class_level_stmt_ls: class_level_stmt_ls class_level_stmt  */
#line 1194 "chapel.ypp"
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 7737 "bison-chapel.cpp"
    break;

  case 248: /* class_level_stmt_ls: class_level_stmt_ls pragma_ls class_level_stmt  */
#line 1196 "chapel.ypp"
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 7743 "bison-chapel.cpp"
    break;

  case 249: /* enum_decl_stmt: enum_header ident_def TLCBR enum_ls TRCBR  */
#line 1201 "chapel.ypp"
    {
      EnumType* pdt = (yyvsp[-4].penumtype);
      for_vector(DefExpr, ec, *(yyvsp[-1].pvecOfDefs)) {
        ec->sym->type = pdt;
        pdt->constants.insertAtTail(ec);
        if (pdt->defaultValue == NULL) {
          pdt->defaultValue = ec->sym;
        }
      }
      delete (yyvsp[-1].pvecOfDefs);
      pdt->doc = (yylsp[-4]).comment;
      TypeSymbol* pst = new TypeSymbol((yyvsp[-3].pch), pdt);
      (yyvsp[-4].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
#line 7763 "bison-chapel.cpp"
    break;

  case 250: /* enum_decl_stmt: enum_header ident_def TLCBR error TRCBR  */
#line 1217 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildErrorStandin();
    }
#line 7771 "bison-chapel.cpp"
    break;

  case 251: /* enum_header: TENUM  */
#line 1224 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyloc).comment = context->latestComment;
      context->latestComment = NULL;
    }
#line 7781 "bison-chapel.cpp"
    break;

  case 252: /* enum_ls: enum_item  */
#line 1233 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = new std::vector<DefExpr*>();
      (yyval.pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
      //$$->doc = context->latestComment;
      // start here for enabling documentation of enum constants
      //context->latestComment = NULL;
    }
#line 7793 "bison-chapel.cpp"
    break;

  case 253: /* enum_ls: enum_ls TCOMMA  */
#line 1241 "chapel.ypp"
    {
      (yyval.pvecOfDefs) = (yyvsp[-1].pvecOfDefs);
    }
#line 7801 "bison-chapel.cpp"
    break;

  case 254: /* enum_ls: enum_ls TCOMMA enum_item  */
#line 1245 "chapel.ypp"
    {
      (yyvsp[-2].pvecOfDefs)->push_back((yyvsp[0].pdefexpr));
    }
#line 7809 "bison-chapel.cpp"
    break;

  case 255: /* enum_item: ident_def  */
#line 1251 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 7815 "bison-chapel.cpp"
    break;

  case 256: /* enum_item: ident_def TASSIGN expr  */
#line 1252 "chapel.ypp"
                          { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 7821 "bison-chapel.cpp"
    break;

  case 257: /* $@7: %empty  */
#line 1257 "chapel.ypp"
    {
      captureTokens = 1;
      captureString.clear();
    }
#line 7830 "bison-chapel.cpp"
    break;

  case 258: /* $@8: %empty  */
#line 1262 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 7839 "bison-chapel.cpp"
    break;

  case 259: /* lambda_decl_expr: TLAMBDA $@7 req_formal_ls $@8 opt_ret_tag opt_type opt_lifetime_where function_body_stmt  */
#line 1267 "chapel.ypp"
    {
      (yyvsp[-5].pfnsymbol)->retTag = (yyvsp[-3].retTag);
      if ((yyvsp[-3].retTag) == RET_REF || (yyvsp[-3].retTag) == RET_CONST_REF)
        USR_FATAL("'ref' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[-2].pexpr))
        (yyvsp[-5].pfnsymbol)->retExprType = new BlockStmt((yyvsp[-2].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[-1].lifetimeAndWhere).where)
        (yyvsp[-5].pfnsymbol)->where = new BlockStmt((yyvsp[-1].lifetimeAndWhere).where);
      if ((yyvsp[-1].lifetimeAndWhere).lifetime)
        (yyvsp[-5].pfnsymbol)->lifetimeConstraints = new BlockStmt((yyvsp[-1].lifetimeAndWhere).lifetime);
      (yyvsp[-5].pfnsymbol)->insertAtTail((yyvsp[0].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[-5].pfnsymbol)));
    }
#line 7861 "bison-chapel.cpp"
    break;

  case 260: /* linkage_spec: %empty  */
#line 1289 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                }
#line 7869 "bison-chapel.cpp"
    break;

  case 261: /* linkage_spec: TINLINE  */
#line 1292 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);
                }
#line 7878 "bison-chapel.cpp"
    break;

  case 262: /* linkage_spec: TOVERRIDE  */
#line 1296 "chapel.ypp"
                {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_OVERRIDE);
                }
#line 7887 "bison-chapel.cpp"
    break;

  case 263: /* $@9: %empty  */
#line 1304 "chapel.ypp"
    {
      // Capture the latest comment
      (yylsp[0]).comment = context->latestComment;
      context->latestComment = NULL;

      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString.clear();
    }
#line 7901 "bison-chapel.cpp"
    break;

  case 264: /* $@10: %empty  */
#line 1314 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 7912 "bison-chapel.cpp"
    break;

  case 265: /* fn_decl_stmt: linkage_spec proc_or_iter $@9 fn_decl_stmt_inner $@10 opt_ret_tag opt_ret_type opt_throws_error opt_lifetime_where opt_function_body_stmt  */
#line 1321 "chapel.ypp"
    {
      FnSymbol* fn = (yyvsp[-6].pfnsymbol);
      FnSymbol* linkageFn = (yyvsp[-9].pfnsymbol);

      fn->copyFlags((yyvsp[-9].pfnsymbol));
      if (*linkageFn->name)
        // The user explicitly named this function (controls mangling).
        fn->cname = linkageFn->name;
      else if (linkageFn->numFormals() == 1)
        // cname should be set based upon param
        fn->insertFormalAtTail(linkageFn->getFormal(1));

      if ((yyvsp[-8].procIter) == ProcIter_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[-6].pfnsymbol), (yyvsp[-4].retTag), (yyvsp[-3].pexpr), (yyvsp[-2].b), (yyvsp[-1].lifetimeAndWhere).where, (yyvsp[-1].lifetimeAndWhere).lifetime, (yyvsp[0].pblockstmt), (yylsp[-8]).comment);
      context->latestComment = NULL;
    }
#line 7939 "bison-chapel.cpp"
    break;

  case 266: /* fn_decl_stmt_inner: opt_this_intent_tag fn_ident opt_formal_ls  */
#line 1347 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 7947 "bison-chapel.cpp"
    break;

  case 267: /* fn_decl_stmt_inner: opt_this_intent_tag assignop_ident opt_formal_ls  */
#line 1351 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 7956 "bison-chapel.cpp"
    break;

  case 268: /* fn_decl_stmt_inner: opt_this_intent_tag fn_decl_receiver_expr TDOT fn_ident opt_formal_ls  */
#line 1356 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
    }
#line 7964 "bison-chapel.cpp"
    break;

  case 269: /* fn_decl_stmt_inner: opt_this_intent_tag fn_decl_receiver_expr TDOT assignop_ident opt_formal_ls  */
#line 1360 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pexpr));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 7973 "bison-chapel.cpp"
    break;

  case 270: /* fn_decl_stmt_inner: opt_this_intent_tag error opt_formal_ls  */
#line 1365 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), "dummy", INTENT_BLANK, NULL);
    }
#line 7981 "bison-chapel.cpp"
    break;

  case 272: /* fn_decl_receiver_expr: TLP expr TRP  */
#line 1372 "chapel.ypp"
                      { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 7987 "bison-chapel.cpp"
    break;

  case 273: /* fn_ident: ident_fn_def  */
#line 1376 "chapel.ypp"
                  { (yyval.pch) = (yyvsp[0].pch); }
#line 7993 "bison-chapel.cpp"
    break;

  case 274: /* fn_ident: TBNOT ident_def  */
#line 1377 "chapel.ypp"
                  { (yyval.pch) = astr("~", (yyvsp[0].pch)); }
#line 7999 "bison-chapel.cpp"
    break;

  case 275: /* fn_ident: TBAND  */
#line 1378 "chapel.ypp"
                 { (yyval.pch) = "&"; }
#line 8005 "bison-chapel.cpp"
    break;

  case 276: /* fn_ident: TBOR  */
#line 1379 "chapel.ypp"
                 { (yyval.pch) = "|"; }
#line 8011 "bison-chapel.cpp"
    break;

  case 277: /* fn_ident: TBXOR  */
#line 1380 "chapel.ypp"
                 { (yyval.pch) = "^"; }
#line 8017 "bison-chapel.cpp"
    break;

  case 278: /* fn_ident: TBNOT  */
#line 1381 "chapel.ypp"
                 { (yyval.pch) = "~"; }
#line 8023 "bison-chapel.cpp"
    break;

  case 279: /* fn_ident: TEQUAL  */
#line 1382 "chapel.ypp"
                 { (yyval.pch) = "=="; }
#line 8029 "bison-chapel.cpp"
    break;

  case 280: /* fn_ident: TNOTEQUAL  */
#line 1383 "chapel.ypp"
                 { (yyval.pch) = "!="; }
#line 8035 "bison-chapel.cpp"
    break;

  case 281: /* fn_ident: TLESSEQUAL  */
#line 1384 "chapel.ypp"
                 { (yyval.pch) = "<="; }
#line 8041 "bison-chapel.cpp"
    break;

  case 282: /* fn_ident: TGREATEREQUAL  */
#line 1385 "chapel.ypp"
                 { (yyval.pch) = ">="; }
#line 8047 "bison-chapel.cpp"
    break;

  case 283: /* fn_ident: TLESS  */
#line 1386 "chapel.ypp"
                 { (yyval.pch) = "<"; }
#line 8053 "bison-chapel.cpp"
    break;

  case 284: /* fn_ident: TGREATER  */
#line 1387 "chapel.ypp"
                 { (yyval.pch) = ">"; }
#line 8059 "bison-chapel.cpp"
    break;

  case 285: /* fn_ident: TPLUS  */
#line 1388 "chapel.ypp"
                 { (yyval.pch) = "+"; }
#line 8065 "bison-chapel.cpp"
    break;

  case 286: /* fn_ident: TMINUS  */
#line 1389 "chapel.ypp"
                 { (yyval.pch) = "-"; }
#line 8071 "bison-chapel.cpp"
    break;

  case 287: /* fn_ident: TSTAR  */
#line 1390 "chapel.ypp"
                 { (yyval.pch) = "*"; }
#line 8077 "bison-chapel.cpp"
    break;

  case 288: /* fn_ident: TDIVIDE  */
#line 1391 "chapel.ypp"
                 { (yyval.pch) = "/"; }
#line 8083 "bison-chapel.cpp"
    break;

  case 289: /* fn_ident: TSHIFTLEFT  */
#line 1392 "chapel.ypp"
                 { (yyval.pch) = "<<"; }
#line 8089 "bison-chapel.cpp"
    break;

  case 290: /* fn_ident: TSHIFTRIGHT  */
#line 1393 "chapel.ypp"
                 { (yyval.pch) = ">>"; }
#line 8095 "bison-chapel.cpp"
    break;

  case 291: /* fn_ident: TMOD  */
#line 1394 "chapel.ypp"
                 { (yyval.pch) = "%"; }
#line 8101 "bison-chapel.cpp"
    break;

  case 292: /* fn_ident: TEXP  */
#line 1395 "chapel.ypp"
                 { (yyval.pch) = "**"; }
#line 8107 "bison-chapel.cpp"
    break;

  case 293: /* fn_ident: TBANG  */
#line 1396 "chapel.ypp"
                 { (yyval.pch) = "!"; }
#line 8113 "bison-chapel.cpp"
    break;

  case 294: /* fn_ident: TBY  */
#line 1397 "chapel.ypp"
                 { (yyval.pch) = "chpl_by"; }
#line 8119 "bison-chapel.cpp"
    break;

  case 295: /* fn_ident: THASH  */
#line 1398 "chapel.ypp"
                 { (yyval.pch) = "#"; }
#line 8125 "bison-chapel.cpp"
    break;

  case 296: /* fn_ident: TALIGN  */
#line 1399 "chapel.ypp"
                 { (yyval.pch) = "chpl_align"; }
#line 8131 "bison-chapel.cpp"
    break;

  case 297: /* fn_ident: TSWAP  */
#line 1400 "chapel.ypp"
                 { (yyval.pch) = "<=>"; }
#line 8137 "bison-chapel.cpp"
    break;

  case 298: /* fn_ident: TIO  */
#line 1401 "chapel.ypp"
                 { (yyval.pch) = "<~>"; }
#line 8143 "bison-chapel.cpp"
    break;

  case 299: /* fn_ident: TINITEQUALS  */
#line 1402 "chapel.ypp"
                 { (yyval.pch) = "init="; }
#line 8149 "bison-chapel.cpp"
    break;

  case 300: /* fn_ident: ident_def TBANG  */
#line 1403 "chapel.ypp"
                  { (yyval.pch) = astr((yyvsp[-1].pch), "!"); }
#line 8155 "bison-chapel.cpp"
    break;

  case 301: /* assignop_ident: TASSIGN  */
#line 1407 "chapel.ypp"
                 { (yyval.pch) = "="; }
#line 8161 "bison-chapel.cpp"
    break;

  case 302: /* assignop_ident: TASSIGNPLUS  */
#line 1408 "chapel.ypp"
                 { (yyval.pch) = "+="; }
#line 8167 "bison-chapel.cpp"
    break;

  case 303: /* assignop_ident: TASSIGNMINUS  */
#line 1409 "chapel.ypp"
                 { (yyval.pch) = "-="; }
#line 8173 "bison-chapel.cpp"
    break;

  case 304: /* assignop_ident: TASSIGNMULTIPLY  */
#line 1410 "chapel.ypp"
                  { (yyval.pch) = "*="; }
#line 8179 "bison-chapel.cpp"
    break;

  case 305: /* assignop_ident: TASSIGNDIVIDE  */
#line 1411 "chapel.ypp"
                 { (yyval.pch) = "/="; }
#line 8185 "bison-chapel.cpp"
    break;

  case 306: /* assignop_ident: TASSIGNMOD  */
#line 1412 "chapel.ypp"
                 { (yyval.pch) = "%="; }
#line 8191 "bison-chapel.cpp"
    break;

  case 307: /* assignop_ident: TASSIGNEXP  */
#line 1413 "chapel.ypp"
                 { (yyval.pch) = "**="; }
#line 8197 "bison-chapel.cpp"
    break;

  case 308: /* assignop_ident: TASSIGNBAND  */
#line 1414 "chapel.ypp"
                 { (yyval.pch) = "&="; }
#line 8203 "bison-chapel.cpp"
    break;

  case 309: /* assignop_ident: TASSIGNBOR  */
#line 1415 "chapel.ypp"
                 { (yyval.pch) = "|="; }
#line 8209 "bison-chapel.cpp"
    break;

  case 310: /* assignop_ident: TASSIGNBXOR  */
#line 1416 "chapel.ypp"
                 { (yyval.pch) = "^="; }
#line 8215 "bison-chapel.cpp"
    break;

  case 311: /* assignop_ident: TASSIGNSR  */
#line 1417 "chapel.ypp"
                 { (yyval.pch) = ">>="; }
#line 8221 "bison-chapel.cpp"
    break;

  case 312: /* assignop_ident: TASSIGNSL  */
#line 1418 "chapel.ypp"
                 { (yyval.pch) = "<<="; }
#line 8227 "bison-chapel.cpp"
    break;

  case 313: /* opt_formal_ls: %empty  */
#line 1422 "chapel.ypp"
                     { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 8233 "bison-chapel.cpp"
    break;

  case 314: /* opt_formal_ls: TLP formal_ls TRP  */
#line 1423 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 8239 "bison-chapel.cpp"
    break;

  case 315: /* req_formal_ls: TLP formal_ls TRP  */
#line 1427 "chapel.ypp"
                     { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 8245 "bison-chapel.cpp"
    break;

  case 316: /* formal_ls: %empty  */
#line 1431 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 8251 "bison-chapel.cpp"
    break;

  case 317: /* formal_ls: formal  */
#line 1432 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 8257 "bison-chapel.cpp"
    break;

  case 318: /* formal_ls: formal_ls TCOMMA formal  */
#line 1433 "chapel.ypp"
                           { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 8263 "bison-chapel.cpp"
    break;

  case 319: /* formal: opt_intent_tag ident_def opt_formal_type opt_init_expr  */
#line 1438 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 8269 "bison-chapel.cpp"
    break;

  case 320: /* formal: pragma_ls opt_intent_tag ident_def opt_formal_type opt_init_expr  */
#line 1440 "chapel.ypp"
    { (yyval.pdefexpr) = buildPragmaDefExpr((yyvsp[-4].vpch), buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL)); }
#line 8275 "bison-chapel.cpp"
    break;

  case 321: /* formal: opt_intent_tag ident_def opt_formal_type var_arg_expr  */
#line 1442 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 8281 "bison-chapel.cpp"
    break;

  case 322: /* formal: opt_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_formal_type opt_init_expr  */
#line 1444 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 8287 "bison-chapel.cpp"
    break;

  case 323: /* formal: opt_intent_tag TLP tuple_var_decl_stmt_inner_ls TRP opt_formal_type var_arg_expr  */
#line 1446 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 8293 "bison-chapel.cpp"
    break;

  case 324: /* opt_intent_tag: %empty  */
#line 1450 "chapel.ypp"
                      { (yyval.pt) = INTENT_BLANK; }
#line 8299 "bison-chapel.cpp"
    break;

  case 325: /* opt_intent_tag: required_intent_tag  */
#line 1451 "chapel.ypp"
                      { (yyval.pt) = (yyvsp[0].pt); }
#line 8305 "bison-chapel.cpp"
    break;

  case 326: /* required_intent_tag: TIN  */
#line 1455 "chapel.ypp"
          { (yyval.pt) = INTENT_IN; }
#line 8311 "bison-chapel.cpp"
    break;

  case 327: /* required_intent_tag: TINOUT  */
#line 1456 "chapel.ypp"
          { (yyval.pt) = INTENT_INOUT; }
#line 8317 "bison-chapel.cpp"
    break;

  case 328: /* required_intent_tag: TOUT  */
#line 1457 "chapel.ypp"
          { (yyval.pt) = INTENT_OUT; }
#line 8323 "bison-chapel.cpp"
    break;

  case 329: /* required_intent_tag: TCONST  */
#line 1458 "chapel.ypp"
          { (yyval.pt) = INTENT_CONST; }
#line 8329 "bison-chapel.cpp"
    break;

  case 330: /* required_intent_tag: TCONST TIN  */
#line 1459 "chapel.ypp"
             { (yyval.pt) = INTENT_CONST_IN; }
#line 8335 "bison-chapel.cpp"
    break;

  case 331: /* required_intent_tag: TCONST TREF  */
#line 1460 "chapel.ypp"
              { (yyval.pt) = INTENT_CONST_REF; }
#line 8341 "bison-chapel.cpp"
    break;

  case 332: /* required_intent_tag: TPARAM  */
#line 1461 "chapel.ypp"
          { (yyval.pt) = INTENT_PARAM; }
#line 8347 "bison-chapel.cpp"
    break;

  case 333: /* required_intent_tag: TREF  */
#line 1462 "chapel.ypp"
          { (yyval.pt) = INTENT_REF; }
#line 8353 "bison-chapel.cpp"
    break;

  case 334: /* required_intent_tag: TTYPE  */
#line 1463 "chapel.ypp"
          { (yyval.pt) = INTENT_TYPE; }
#line 8359 "bison-chapel.cpp"
    break;

  case 335: /* opt_this_intent_tag: %empty  */
#line 1467 "chapel.ypp"
         { (yyval.pt) = INTENT_BLANK; }
#line 8365 "bison-chapel.cpp"
    break;

  case 336: /* opt_this_intent_tag: TPARAM  */
#line 1468 "chapel.ypp"
         { (yyval.pt) = INTENT_PARAM; }
#line 8371 "bison-chapel.cpp"
    break;

  case 337: /* opt_this_intent_tag: TREF  */
#line 1469 "chapel.ypp"
         { (yyval.pt) = INTENT_REF;   }
#line 8377 "bison-chapel.cpp"
    break;

  case 338: /* opt_this_intent_tag: TCONST TREF  */
#line 1470 "chapel.ypp"
                { (yyval.pt) = INTENT_CONST_REF;   }
#line 8383 "bison-chapel.cpp"
    break;

  case 339: /* opt_this_intent_tag: TCONST  */
#line 1471 "chapel.ypp"
         { (yyval.pt) = INTENT_CONST;   }
#line 8389 "bison-chapel.cpp"
    break;

  case 340: /* opt_this_intent_tag: TTYPE  */
#line 1472 "chapel.ypp"
         { (yyval.pt) = INTENT_TYPE;  }
#line 8395 "bison-chapel.cpp"
    break;

  case 341: /* proc_or_iter: TPROC  */
#line 1476 "chapel.ypp"
         { (yyval.procIter) = ProcIter_PROC; }
#line 8401 "bison-chapel.cpp"
    break;

  case 342: /* proc_or_iter: TITER  */
#line 1477 "chapel.ypp"
         { (yyval.procIter) = ProcIter_ITER; }
#line 8407 "bison-chapel.cpp"
    break;

  case 343: /* opt_ret_tag: %empty  */
#line 1481 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 8413 "bison-chapel.cpp"
    break;

  case 344: /* opt_ret_tag: TCONST  */
#line 1482 "chapel.ypp"
              { (yyval.retTag) = RET_VALUE; }
#line 8419 "bison-chapel.cpp"
    break;

  case 345: /* opt_ret_tag: TCONST TREF  */
#line 1483 "chapel.ypp"
              { (yyval.retTag) = RET_CONST_REF; }
#line 8425 "bison-chapel.cpp"
    break;

  case 346: /* opt_ret_tag: TREF  */
#line 1484 "chapel.ypp"
              { (yyval.retTag) = RET_REF; }
#line 8431 "bison-chapel.cpp"
    break;

  case 347: /* opt_ret_tag: TPARAM  */
#line 1485 "chapel.ypp"
              { (yyval.retTag) = RET_PARAM; }
#line 8437 "bison-chapel.cpp"
    break;

  case 348: /* opt_ret_tag: TTYPE  */
#line 1486 "chapel.ypp"
              { (yyval.retTag) = RET_TYPE; }
#line 8443 "bison-chapel.cpp"
    break;

  case 349: /* opt_throws_error: %empty  */
#line 1490 "chapel.ypp"
          { (yyval.b) = false; }
#line 8449 "bison-chapel.cpp"
    break;

  case 350: /* opt_throws_error: TTHROWS  */
#line 1491 "chapel.ypp"
          { (yyval.b) = true;  }
#line 8455 "bison-chapel.cpp"
    break;

  case 351: /* opt_function_body_stmt: TSEMI  */
#line 1494 "chapel.ypp"
            { (yyval.pblockstmt) = NULL; }
#line 8461 "bison-chapel.cpp"
    break;

  case 354: /* function_body_stmt: return_stmt  */
#line 1500 "chapel.ypp"
               { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 8467 "bison-chapel.cpp"
    break;

  case 355: /* query_expr: TQUESTION ident_def  */
#line 1504 "chapel.ypp"
                      { 
      DefExpr * de = new DefExpr(new VarSymbol((yyvsp[0].pch)));
      USR_WARN(de, "support for space in query expressions is deprecated");
      (yyval.pexpr) = de;
  }
#line 8477 "bison-chapel.cpp"
    break;

  case 356: /* query_expr: TQUERIEDIDENT  */
#line 1509 "chapel.ypp"
                      { (yyval.pexpr) = buildQueriedExpr((yyvsp[0].pch)); }
#line 8483 "bison-chapel.cpp"
    break;

  case 357: /* var_arg_expr: TDOTDOTDOT  */
#line 1513 "chapel.ypp"
                         { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 8489 "bison-chapel.cpp"
    break;

  case 358: /* var_arg_expr: TDOTDOTDOT expr  */
#line 1514 "chapel.ypp"
                         { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8495 "bison-chapel.cpp"
    break;

  case 359: /* var_arg_expr: TDOTDOTDOT query_expr  */
#line 1515 "chapel.ypp"
                         { if (DefExpr* def = toDefExpr((yyvsp[0].pexpr))) {
                             def->sym->addFlag(FLAG_PARAM);
                           }
                           (yyval.pexpr) = (yyvsp[0].pexpr);
                         }
#line 8505 "bison-chapel.cpp"
    break;

  case 360: /* opt_lifetime_where: %empty  */
#line 1523 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, NULL); }
#line 8511 "bison-chapel.cpp"
    break;

  case 361: /* opt_lifetime_where: TWHERE expr  */
#line 1525 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), NULL); }
#line 8517 "bison-chapel.cpp"
    break;

  case 362: /* opt_lifetime_where: TLIFETIME lifetime_components_expr  */
#line 1527 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime(NULL, (yyvsp[0].pexpr)); }
#line 8523 "bison-chapel.cpp"
    break;

  case 363: /* opt_lifetime_where: TWHERE expr TLIFETIME lifetime_components_expr  */
#line 1529 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 8529 "bison-chapel.cpp"
    break;

  case 364: /* opt_lifetime_where: TLIFETIME lifetime_components_expr TWHERE expr  */
#line 1531 "chapel.ypp"
  { (yyval.lifetimeAndWhere) = makeWhereAndLifetime((yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 8535 "bison-chapel.cpp"
    break;

  case 365: /* lifetime_components_expr: lifetime_expr  */
#line 1536 "chapel.ypp"
  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8541 "bison-chapel.cpp"
    break;

  case 366: /* lifetime_components_expr: lifetime_components_expr TCOMMA lifetime_expr  */
#line 1538 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(",", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 8547 "bison-chapel.cpp"
    break;

  case 367: /* lifetime_expr: lifetime_ident TASSIGN lifetime_ident  */
#line 1542 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8553 "bison-chapel.cpp"
    break;

  case 368: /* lifetime_expr: lifetime_ident TLESS lifetime_ident  */
#line 1543 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8559 "bison-chapel.cpp"
    break;

  case 369: /* lifetime_expr: lifetime_ident TLESSEQUAL lifetime_ident  */
#line 1544 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8565 "bison-chapel.cpp"
    break;

  case 370: /* lifetime_expr: lifetime_ident TEQUAL lifetime_ident  */
#line 1545 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8571 "bison-chapel.cpp"
    break;

  case 371: /* lifetime_expr: lifetime_ident TGREATER lifetime_ident  */
#line 1546 "chapel.ypp"
                                             {(yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8577 "bison-chapel.cpp"
    break;

  case 372: /* lifetime_expr: lifetime_ident TGREATEREQUAL lifetime_ident  */
#line 1547 "chapel.ypp"
                                              {(yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr));}
#line 8583 "bison-chapel.cpp"
    break;

  case 373: /* lifetime_expr: TRETURN lifetime_ident  */
#line 1548 "chapel.ypp"
                         { (yyval.pexpr) = new CallExpr(PRIM_RETURN, (yyvsp[0].pexpr)); }
#line 8589 "bison-chapel.cpp"
    break;

  case 374: /* lifetime_ident: TIDENT  */
#line 1553 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr((yyvsp[0].pch))); }
#line 8595 "bison-chapel.cpp"
    break;

  case 375: /* lifetime_ident: TTHIS  */
#line 1555 "chapel.ypp"
  { (yyval.pexpr) = new CallExpr(PRIM_LIFETIME_OF, new UnresolvedSymExpr("this")); }
#line 8601 "bison-chapel.cpp"
    break;

  case 376: /* type_alias_decl_stmt: TTYPE type_alias_decl_stmt_inner TSEMI  */
#line 1560 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 8607 "bison-chapel.cpp"
    break;

  case 377: /* type_alias_decl_stmt: TCONFIG TTYPE type_alias_decl_stmt_inner TSEMI  */
#line 1562 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 8613 "bison-chapel.cpp"
    break;

  case 378: /* type_alias_decl_stmt: TEXTERN TTYPE type_alias_decl_stmt_inner TSEMI  */
#line 1564 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 8619 "bison-chapel.cpp"
    break;

  case 379: /* type_alias_decl_stmt_inner: ident_def opt_init_type  */
#line 1569 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 8636 "bison-chapel.cpp"
    break;

  case 380: /* type_alias_decl_stmt_inner: ident_def opt_init_type TCOMMA type_alias_decl_stmt_inner  */
#line 1582 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 8654 "bison-chapel.cpp"
    break;

  case 381: /* opt_init_type: %empty  */
#line 1598 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
#line 8660 "bison-chapel.cpp"
    break;

  case 382: /* opt_init_type: TASSIGN type_level_expr  */
#line 1600 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8666 "bison-chapel.cpp"
    break;

  case 383: /* opt_init_type: TASSIGN array_type  */
#line 1602 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 8672 "bison-chapel.cpp"
    break;

  case 384: /* var_decl_type: TPARAM  */
#line 1606 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_PARAM); }
#line 8678 "bison-chapel.cpp"
    break;

  case 385: /* var_decl_type: TCONST  */
#line 1607 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST); }
#line 8684 "bison-chapel.cpp"
    break;

  case 386: /* var_decl_type: TREF  */
#line 1608 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_REF_VAR); }
#line 8690 "bison-chapel.cpp"
    break;

  case 387: /* var_decl_type: TCONST TREF  */
#line 1609 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(FLAG_CONST, FLAG_REF_VAR); }
#line 8696 "bison-chapel.cpp"
    break;

  case 388: /* var_decl_type: TVAR  */
#line 1610 "chapel.ypp"
              { (yyval.pflagset) = buildVarDeclFlags(); }
#line 8702 "bison-chapel.cpp"
    break;

  case 389: /* var_decl_stmt: TCONFIG var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 1615 "chapel.ypp"
    {
      (yyvsp[-2].pflagset)->insert(FLAG_CONFIG);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 8712 "bison-chapel.cpp"
    break;

  case 390: /* var_decl_stmt: var_decl_type var_decl_stmt_inner_ls TSEMI  */
#line 1621 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), context->latestComment, (yyvsp[-2].pflagset));
      context->latestComment = NULL;
    }
#line 8721 "bison-chapel.cpp"
    break;

  case 392: /* var_decl_stmt_inner_ls: var_decl_stmt_inner_ls TCOMMA var_decl_stmt_inner  */
#line 1630 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 8730 "bison-chapel.cpp"
    break;

  case 393: /* var_decl_stmt_inner: ident_def opt_type opt_init_expr  */
#line 1638 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 8736 "bison-chapel.cpp"
    break;

  case 394: /* var_decl_stmt_inner: TLP tuple_var_decl_stmt_inner_ls TRP opt_type opt_init_expr  */
#line 1640 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 8742 "bison-chapel.cpp"
    break;

  case 395: /* tuple_var_decl_component: TUNDERSCORE  */
#line 1645 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 8748 "bison-chapel.cpp"
    break;

  case 396: /* tuple_var_decl_component: ident_def  */
#line 1647 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 8754 "bison-chapel.cpp"
    break;

  case 397: /* tuple_var_decl_component: TLP tuple_var_decl_stmt_inner_ls TRP  */
#line 1649 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 8760 "bison-chapel.cpp"
    break;

  case 398: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_component  */
#line 1654 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 8766 "bison-chapel.cpp"
    break;

  case 399: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_component TCOMMA  */
#line 1656 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 8772 "bison-chapel.cpp"
    break;

  case 400: /* tuple_var_decl_stmt_inner_ls: tuple_var_decl_component TCOMMA tuple_var_decl_stmt_inner_ls  */
#line 1658 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 8778 "bison-chapel.cpp"
    break;

  case 401: /* opt_init_expr: %empty  */
#line 1664 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 8784 "bison-chapel.cpp"
    break;

  case 402: /* opt_init_expr: TASSIGN TNOINIT  */
#line 1665 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 8790 "bison-chapel.cpp"
    break;

  case 403: /* opt_init_expr: TASSIGN opt_try_expr  */
#line 1666 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8796 "bison-chapel.cpp"
    break;

  case 404: /* ret_array_type: TLSBR TRSBR type_level_expr  */
#line 1672 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8802 "bison-chapel.cpp"
    break;

  case 405: /* ret_array_type: TLSBR TRSBR  */
#line 1674 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, NULL); }
#line 8808 "bison-chapel.cpp"
    break;

  case 406: /* ret_array_type: TLSBR expr_ls TRSBR type_level_expr  */
#line 1676 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 8816 "bison-chapel.cpp"
    break;

  case 407: /* ret_array_type: TLSBR expr_ls TRSBR  */
#line 1680 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)), NULL);
    }
#line 8824 "bison-chapel.cpp"
    break;

  case 408: /* ret_array_type: TLSBR TRSBR ret_array_type  */
#line 1684 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8830 "bison-chapel.cpp"
    break;

  case 409: /* ret_array_type: TLSBR expr_ls TRSBR ret_array_type  */
#line 1686 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 8838 "bison-chapel.cpp"
    break;

  case 410: /* ret_array_type: TLSBR error TRSBR  */
#line 1690 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr(PRIM_ERROR);
    }
#line 8846 "bison-chapel.cpp"
    break;

  case 411: /* opt_ret_type: %empty  */
#line 1697 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 8852 "bison-chapel.cpp"
    break;

  case 412: /* opt_ret_type: TCOLON type_level_expr  */
#line 1698 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8858 "bison-chapel.cpp"
    break;

  case 413: /* opt_ret_type: TCOLON ret_array_type  */
#line 1699 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8864 "bison-chapel.cpp"
    break;

  case 414: /* opt_ret_type: TCOLON reserved_type_ident_use  */
#line 1700 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 8870 "bison-chapel.cpp"
    break;

  case 415: /* opt_ret_type: error  */
#line 1701 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 8876 "bison-chapel.cpp"
    break;

  case 416: /* opt_type: %empty  */
#line 1706 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 8882 "bison-chapel.cpp"
    break;

  case 417: /* opt_type: TCOLON type_level_expr  */
#line 1707 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8888 "bison-chapel.cpp"
    break;

  case 418: /* opt_type: TCOLON array_type  */
#line 1708 "chapel.ypp"
                          { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 8894 "bison-chapel.cpp"
    break;

  case 419: /* opt_type: TCOLON reserved_type_ident_use  */
#line 1709 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 8900 "bison-chapel.cpp"
    break;

  case 420: /* opt_type: error  */
#line 1710 "chapel.ypp"
                          { (yyval.pexpr) = NULL; }
#line 8906 "bison-chapel.cpp"
    break;

  case 421: /* array_type: TLSBR expr_ls TRSBR type_level_expr  */
#line 1731 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 8914 "bison-chapel.cpp"
    break;

  case 422: /* array_type: TLSBR expr_ls TRSBR array_type  */
#line 1735 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 8922 "bison-chapel.cpp"
    break;

  case 423: /* array_type: TLSBR expr_ls TIN expr TRSBR type_level_expr  */
#line 1739 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 8934 "bison-chapel.cpp"
    break;

  case 424: /* array_type: TLSBR error TRSBR  */
#line 1747 "chapel.ypp"
    {
      (yyval.pcallexpr) = new CallExpr(PRIM_ERROR);
    }
#line 8942 "bison-chapel.cpp"
    break;

  case 425: /* opt_formal_array_elt_type: %empty  */
#line 1753 "chapel.ypp"
                        { (yyval.pexpr) = NULL; }
#line 8948 "bison-chapel.cpp"
    break;

  case 426: /* opt_formal_array_elt_type: type_level_expr  */
#line 1754 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8954 "bison-chapel.cpp"
    break;

  case 427: /* opt_formal_array_elt_type: query_expr  */
#line 1755 "chapel.ypp"
                        { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 8960 "bison-chapel.cpp"
    break;

  case 428: /* formal_array_type: TLSBR TRSBR opt_formal_array_elt_type  */
#line 1760 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8966 "bison-chapel.cpp"
    break;

  case 429: /* formal_array_type: TLSBR expr_ls TRSBR opt_formal_array_elt_type  */
#line 1762 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 8972 "bison-chapel.cpp"
    break;

  case 430: /* formal_array_type: TLSBR TRSBR formal_array_type  */
#line 1768 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 8978 "bison-chapel.cpp"
    break;

  case 431: /* formal_array_type: TLSBR expr_ls TRSBR formal_array_type  */
#line 1770 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 8984 "bison-chapel.cpp"
    break;

  case 432: /* formal_array_type: TLSBR expr_ls TIN expr TRSBR opt_formal_array_elt_type  */
#line 1772 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 8990 "bison-chapel.cpp"
    break;

  case 433: /* opt_formal_type: %empty  */
#line 1776 "chapel.ypp"
                            { (yyval.pexpr) = NULL; }
#line 8996 "bison-chapel.cpp"
    break;

  case 434: /* opt_formal_type: TCOLON type_level_expr  */
#line 1777 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9002 "bison-chapel.cpp"
    break;

  case 435: /* opt_formal_type: TCOLON query_expr  */
#line 1778 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9008 "bison-chapel.cpp"
    break;

  case 436: /* opt_formal_type: TCOLON reserved_type_ident_use  */
#line 1779 "chapel.ypp"
                                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9014 "bison-chapel.cpp"
    break;

  case 437: /* opt_formal_type: TCOLON formal_array_type  */
#line 1780 "chapel.ypp"
                            { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9020 "bison-chapel.cpp"
    break;

  case 438: /* expr_ls: expr  */
#line 1786 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 9026 "bison-chapel.cpp"
    break;

  case 439: /* expr_ls: query_expr  */
#line 1787 "chapel.ypp"
                             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 9032 "bison-chapel.cpp"
    break;

  case 440: /* expr_ls: expr_ls TCOMMA expr  */
#line 1788 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9038 "bison-chapel.cpp"
    break;

  case 441: /* expr_ls: expr_ls TCOMMA query_expr  */
#line 1789 "chapel.ypp"
                             { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9044 "bison-chapel.cpp"
    break;

  case 442: /* simple_expr_ls: expr  */
#line 1793 "chapel.ypp"
                                   { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr));}
#line 9050 "bison-chapel.cpp"
    break;

  case 443: /* simple_expr_ls: simple_expr_ls TCOMMA expr  */
#line 1794 "chapel.ypp"
                                   { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9056 "bison-chapel.cpp"
    break;

  case 444: /* tuple_component: TUNDERSCORE  */
#line 1798 "chapel.ypp"
                { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 9062 "bison-chapel.cpp"
    break;

  case 445: /* tuple_component: opt_try_expr  */
#line 1799 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9068 "bison-chapel.cpp"
    break;

  case 446: /* tuple_component: query_expr  */
#line 1800 "chapel.ypp"
                { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9074 "bison-chapel.cpp"
    break;

  case 447: /* tuple_expr_ls: tuple_component TCOMMA tuple_component  */
#line 1804 "chapel.ypp"
                                         { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9080 "bison-chapel.cpp"
    break;

  case 448: /* tuple_expr_ls: tuple_expr_ls TCOMMA tuple_component  */
#line 1805 "chapel.ypp"
                                       { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9086 "bison-chapel.cpp"
    break;

  case 449: /* opt_actual_ls: %empty  */
#line 1809 "chapel.ypp"
             { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 9092 "bison-chapel.cpp"
    break;

  case 451: /* actual_ls: actual_expr  */
#line 1814 "chapel.ypp"
                                { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 9098 "bison-chapel.cpp"
    break;

  case 452: /* actual_ls: actual_ls TCOMMA actual_expr  */
#line 1815 "chapel.ypp"
                                { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9104 "bison-chapel.cpp"
    break;

  case 453: /* actual_expr: ident_use TASSIGN query_expr  */
#line 1819 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 9110 "bison-chapel.cpp"
    break;

  case 454: /* actual_expr: ident_use TASSIGN opt_try_expr  */
#line 1820 "chapel.ypp"
                                 { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 9116 "bison-chapel.cpp"
    break;

  case 455: /* actual_expr: query_expr  */
#line 1821 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9122 "bison-chapel.cpp"
    break;

  case 456: /* actual_expr: opt_try_expr  */
#line 1822 "chapel.ypp"
                             { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9128 "bison-chapel.cpp"
    break;

  case 457: /* ident_expr: ident_use  */
#line 1826 "chapel.ypp"
                 { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 9134 "bison-chapel.cpp"
    break;

  case 458: /* ident_expr: scalar_type  */
#line 1827 "chapel.ypp"
                 { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9140 "bison-chapel.cpp"
    break;

  case 459: /* type_level_expr: sub_type_level_expr  */
#line 1839 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9146 "bison-chapel.cpp"
    break;

  case 460: /* type_level_expr: sub_type_level_expr TQUESTION  */
#line 1841 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr)); }
#line 9152 "bison-chapel.cpp"
    break;

  case 461: /* type_level_expr: TQUESTION  */
#line 1843 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gUninstantiated); }
#line 9158 "bison-chapel.cpp"
    break;

  case 467: /* sub_type_level_expr: TSINGLE expr  */
#line 1854 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 9164 "bison-chapel.cpp"
    break;

  case 468: /* sub_type_level_expr: TINDEX TLP opt_actual_ls TRP  */
#line 1856 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 9170 "bison-chapel.cpp"
    break;

  case 469: /* sub_type_level_expr: TDOMAIN TLP opt_actual_ls TRP  */
#line 1858 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 9176 "bison-chapel.cpp"
    break;

  case 470: /* sub_type_level_expr: TSUBDOMAIN TLP opt_actual_ls TRP  */
#line 1860 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 9182 "bison-chapel.cpp"
    break;

  case 471: /* sub_type_level_expr: TSPARSE TSUBDOMAIN TLP opt_actual_ls TRP  */
#line 1862 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", buildDotExpr((yyvsp[-1].pcallexpr)->copy(), "defaultSparseDist"), (yyvsp[-1].pcallexpr)); }
#line 9188 "bison-chapel.cpp"
    break;

  case 472: /* sub_type_level_expr: TATOMIC expr  */
#line 1864 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 9194 "bison-chapel.cpp"
    break;

  case 473: /* sub_type_level_expr: TSYNC expr  */
#line 1866 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 9200 "bison-chapel.cpp"
    break;

  case 474: /* sub_type_level_expr: TOWNED  */
#line 1869 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_owned"); }
#line 9206 "bison-chapel.cpp"
    break;

  case 475: /* sub_type_level_expr: TOWNED expr  */
#line 1871 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_owned", (yyvsp[0].pexpr)); }
#line 9212 "bison-chapel.cpp"
    break;

  case 476: /* sub_type_level_expr: TUNMANAGED  */
#line 1873 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtUnmanaged->symbol); }
#line 9218 "bison-chapel.cpp"
    break;

  case 477: /* sub_type_level_expr: TUNMANAGED expr  */
#line 1875 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_UNMANAGED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 9224 "bison-chapel.cpp"
    break;

  case 478: /* sub_type_level_expr: TSHARED  */
#line 1877 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_shared"); }
#line 9230 "bison-chapel.cpp"
    break;

  case 479: /* sub_type_level_expr: TSHARED expr  */
#line 1879 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_shared", (yyvsp[0].pexpr)); }
#line 9236 "bison-chapel.cpp"
    break;

  case 480: /* sub_type_level_expr: TBORROWED  */
#line 1881 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtBorrowed->symbol); }
#line 9242 "bison-chapel.cpp"
    break;

  case 481: /* sub_type_level_expr: TBORROWED expr  */
#line 1883 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( PRIM_TO_BORROWED_CLASS_CHECKED, (yyvsp[0].pexpr)); }
#line 9248 "bison-chapel.cpp"
    break;

  case 482: /* sub_type_level_expr: TCLASS  */
#line 1886 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyManagementNonNilable->symbol); }
#line 9254 "bison-chapel.cpp"
    break;

  case 483: /* sub_type_level_expr: TRECORD  */
#line 1888 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(dtAnyRecord->symbol); }
#line 9260 "bison-chapel.cpp"
    break;

  case 484: /* for_expr: TFOR expr TIN expr TDO expr  */
#line 1893 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9266 "bison-chapel.cpp"
    break;

  case 485: /* for_expr: TFOR expr TIN zippered_iterator TDO expr  */
#line 1895 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 9272 "bison-chapel.cpp"
    break;

  case 486: /* for_expr: TFOR expr TDO expr  */
#line 1897 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9278 "bison-chapel.cpp"
    break;

  case 487: /* for_expr: TFOR expr TIN expr TDO TIF expr TTHEN expr  */
#line 1899 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9284 "bison-chapel.cpp"
    break;

  case 488: /* for_expr: TFOR expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 1901 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 9290 "bison-chapel.cpp"
    break;

  case 489: /* for_expr: TFOR expr TDO TIF expr TTHEN expr  */
#line 1903 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9296 "bison-chapel.cpp"
    break;

  case 490: /* for_expr: TFORALL expr TIN expr TDO expr  */
#line 1905 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9302 "bison-chapel.cpp"
    break;

  case 491: /* for_expr: TFORALL expr TIN zippered_iterator TDO expr  */
#line 1907 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 9308 "bison-chapel.cpp"
    break;

  case 492: /* for_expr: TFORALL expr TDO expr  */
#line 1909 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9314 "bison-chapel.cpp"
    break;

  case 493: /* for_expr: TFORALL expr TIN expr TDO TIF expr TTHEN expr  */
#line 1911 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9320 "bison-chapel.cpp"
    break;

  case 494: /* for_expr: TFORALL expr TIN zippered_iterator TDO TIF expr TTHEN expr  */
#line 1913 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 9326 "bison-chapel.cpp"
    break;

  case 495: /* for_expr: TFORALL expr TDO TIF expr TTHEN expr  */
#line 1915 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 9332 "bison-chapel.cpp"
    break;

  case 496: /* for_expr: TLSBR expr_ls TRSBR expr  */
#line 1917 "chapel.ypp"
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 9343 "bison-chapel.cpp"
    break;

  case 497: /* for_expr: TLSBR expr_ls TIN expr TRSBR expr  */
#line 1924 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 9353 "bison-chapel.cpp"
    break;

  case 498: /* for_expr: TLSBR expr_ls TIN zippered_iterator TRSBR expr  */
#line 1930 "chapel.ypp"
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 9363 "bison-chapel.cpp"
    break;

  case 499: /* for_expr: TLSBR expr_ls TIN expr TRSBR TIF expr TTHEN expr  */
#line 1936 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 9373 "bison-chapel.cpp"
    break;

  case 500: /* for_expr: TLSBR expr_ls TIN zippered_iterator TRSBR TIF expr TTHEN expr  */
#line 1942 "chapel.ypp"
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pcallexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pcallexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 9383 "bison-chapel.cpp"
    break;

  case 501: /* cond_expr: TIF expr TTHEN expr TELSE expr  */
#line 1951 "chapel.ypp"
    { (yyval.pexpr) = new IfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9389 "bison-chapel.cpp"
    break;

  case 502: /* nil_expr: TNIL  */
#line 1960 "chapel.ypp"
            { (yyval.pexpr) = new SymExpr(gNil); }
#line 9395 "bison-chapel.cpp"
    break;

  case 510: /* stmt_level_expr: io_expr TIO expr  */
#line 1976 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9401 "bison-chapel.cpp"
    break;

  case 511: /* opt_task_intent_ls: %empty  */
#line 1980 "chapel.ypp"
                                { (yyval.pcallexpr) = NULL; }
#line 9407 "bison-chapel.cpp"
    break;

  case 513: /* task_intent_clause: TWITH TLP task_intent_ls TRP  */
#line 1985 "chapel.ypp"
                                { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 9413 "bison-chapel.cpp"
    break;

  case 514: /* task_intent_ls: intent_expr  */
#line 1989 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addTaskIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9419 "bison-chapel.cpp"
    break;

  case 515: /* task_intent_ls: task_intent_ls TCOMMA intent_expr  */
#line 1990 "chapel.ypp"
                                                    { addTaskIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9425 "bison-chapel.cpp"
    break;

  case 516: /* forall_intent_clause: TWITH TLP forall_intent_ls TRP  */
#line 1994 "chapel.ypp"
                                  { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 9431 "bison-chapel.cpp"
    break;

  case 517: /* forall_intent_ls: intent_expr  */
#line 1998 "chapel.ypp"
              { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); addForallIntent((yyval.pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9437 "bison-chapel.cpp"
    break;

  case 518: /* forall_intent_ls: forall_intent_ls TCOMMA intent_expr  */
#line 1999 "chapel.ypp"
                                                    { addForallIntent((yyvsp[-2].pcallexpr), (yyvsp[0].pShadowVar)); }
#line 9443 "bison-chapel.cpp"
    break;

  case 519: /* intent_expr: shadow_var_prefix ident_expr opt_type opt_init_expr  */
#line 2004 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildForPrefix((yyvsp[-3].pShadowVarPref), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pexpr));
    }
#line 9451 "bison-chapel.cpp"
    break;

  case 520: /* intent_expr: reduce_scan_op_expr TREDUCE ident_expr  */
#line 2008 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 9459 "bison-chapel.cpp"
    break;

  case 521: /* intent_expr: expr TREDUCE ident_expr  */
#line 2012 "chapel.ypp"
    {
      (yyval.pShadowVar) = ShadowVarSymbol::buildFromReduceIntent((yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 9467 "bison-chapel.cpp"
    break;

  case 522: /* shadow_var_prefix: TCONST  */
#line 2018 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST;     }
#line 9473 "bison-chapel.cpp"
    break;

  case 523: /* shadow_var_prefix: TIN  */
#line 2019 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_IN;        }
#line 9479 "bison-chapel.cpp"
    break;

  case 524: /* shadow_var_prefix: TCONST TIN  */
#line 2020 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_IN;  }
#line 9485 "bison-chapel.cpp"
    break;

  case 525: /* shadow_var_prefix: TREF  */
#line 2021 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_REF;       }
#line 9491 "bison-chapel.cpp"
    break;

  case 526: /* shadow_var_prefix: TCONST TREF  */
#line 2022 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_CONST_REF; }
#line 9497 "bison-chapel.cpp"
    break;

  case 527: /* shadow_var_prefix: TVAR  */
#line 2023 "chapel.ypp"
               { (yyval.pShadowVarPref) = SVP_VAR;       }
#line 9503 "bison-chapel.cpp"
    break;

  case 529: /* io_expr: io_expr TIO expr  */
#line 2029 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9509 "bison-chapel.cpp"
    break;

  case 530: /* new_maybe_decorated: TNEW  */
#line 2034 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW); }
#line 9515 "bison-chapel.cpp"
    break;

  case 531: /* new_maybe_decorated: TNEW TOWNED  */
#line 2036 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol))); }
#line 9523 "bison-chapel.cpp"
    break;

  case 532: /* new_maybe_decorated: TNEW TSHARED  */
#line 2040 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol))); }
#line 9531 "bison-chapel.cpp"
    break;

  case 533: /* new_maybe_decorated: TNEW TUNMANAGED  */
#line 2044 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtUnmanaged->symbol))); }
#line 9539 "bison-chapel.cpp"
    break;

  case 534: /* new_maybe_decorated: TNEW TBORROWED  */
#line 2048 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtBorrowed->symbol))); }
#line 9547 "bison-chapel.cpp"
    break;

  case 535: /* new_expr: new_maybe_decorated expr  */
#line 2056 "chapel.ypp"
    { (yyvsp[-1].pcallexpr)->insertAtTail((yyvsp[0].pexpr));
      (yyval.pexpr) = (yyvsp[-1].pcallexpr); }
#line 9554 "bison-chapel.cpp"
    break;

  case 536: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP  */
#line 2061 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 9564 "bison-chapel.cpp"
    break;

  case 537: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP  */
#line 2067 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr((yyvsp[-4].pexpr), (yyvsp[-1].pcallexpr)));
    }
#line 9574 "bison-chapel.cpp"
    break;

  case 538: /* new_expr: TNEW TOWNED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 2073 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtOwned->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 9585 "bison-chapel.cpp"
    break;

  case 539: /* new_expr: TNEW TSHARED TLP expr TRP TLP opt_actual_ls TRP TQUESTION  */
#line 2080 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW,
                        new NamedExpr(astr_chpl_manager,
                                      new SymExpr(dtShared->symbol)),
                        new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED,
                                     new CallExpr((yyvsp[-5].pexpr), (yyvsp[-2].pcallexpr))));
    }
#line 9596 "bison-chapel.cpp"
    break;

  case 540: /* new_expr: TNEW TOWNED TLP expr TRP  */
#line 2089 "chapel.ypp"
    { USR_WARN((yyvsp[-1].pexpr), "the syntax 'new owned(an expression)' is deprecated");
      USR_PRINT((yyvsp[-1].pexpr), "instead use 'owned.create(an expression)'");
      (yyval.pexpr) = new CallExpr(PRIM_NEW, new CallExpr(dtOwned->symbol, (yyvsp[-1].pexpr))); }
#line 9604 "bison-chapel.cpp"
    break;

  case 541: /* new_expr: TNEW TSHARED TLP expr TRP  */
#line 2093 "chapel.ypp"
    { USR_WARN((yyvsp[-1].pexpr), "the syntax 'new shared(an expression)' is deprecated");
      USR_PRINT((yyvsp[-1].pexpr), "instead use 'shared.create(an expression)'");
      (yyval.pexpr) = new CallExpr(PRIM_NEW, new CallExpr(dtShared->symbol, (yyvsp[-1].pexpr))); }
#line 9612 "bison-chapel.cpp"
    break;

  case 542: /* let_expr: TLET var_decl_stmt_inner_ls TIN expr  */
#line 2100 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 9618 "bison-chapel.cpp"
    break;

  case 551: /* expr: TLP TDOTDOTDOT expr TRP  */
#line 2116 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 9624 "bison-chapel.cpp"
    break;

  case 552: /* expr: expr TCOLON expr  */
#line 2118 "chapel.ypp"
    { (yyval.pexpr) = createCast((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9630 "bison-chapel.cpp"
    break;

  case 553: /* expr: expr TDOTDOT expr  */
#line 2120 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9636 "bison-chapel.cpp"
    break;

  case 554: /* expr: expr TDOTDOTOPENHIGH expr  */
#line 2122 "chapel.ypp"
    { (yyval.pexpr) = buildBoundedRange((yyvsp[-2].pexpr), (yyvsp[0].pexpr), false, true); }
#line 9642 "bison-chapel.cpp"
    break;

  case 555: /* expr: expr TDOTDOT  */
#line 2137 "chapel.ypp"
    { (yyval.pexpr) = buildLowBoundedRange((yyvsp[-1].pexpr)); }
#line 9648 "bison-chapel.cpp"
    break;

  case 556: /* expr: TDOTDOT expr  */
#line 2139 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr)); }
#line 9654 "bison-chapel.cpp"
    break;

  case 557: /* expr: TDOTDOTOPENHIGH expr  */
#line 2141 "chapel.ypp"
    { (yyval.pexpr) = buildHighBoundedRange((yyvsp[0].pexpr), true); }
#line 9660 "bison-chapel.cpp"
    break;

  case 558: /* expr: TDOTDOT  */
#line 2143 "chapel.ypp"
    { (yyval.pexpr) = buildUnboundedRange(); }
#line 9666 "bison-chapel.cpp"
    break;

  case 559: /* opt_expr: %empty  */
#line 2147 "chapel.ypp"
                  { (yyval.pexpr) = NULL; }
#line 9672 "bison-chapel.cpp"
    break;

  case 560: /* opt_expr: expr  */
#line 2148 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9678 "bison-chapel.cpp"
    break;

  case 561: /* opt_try_expr: TTRY expr  */
#line 2152 "chapel.ypp"
                  { (yyval.pexpr) = tryExpr((yyvsp[0].pexpr)); }
#line 9684 "bison-chapel.cpp"
    break;

  case 562: /* opt_try_expr: TTRYBANG expr  */
#line 2153 "chapel.ypp"
                  { (yyval.pexpr) = tryBangExpr((yyvsp[0].pexpr)); }
#line 9690 "bison-chapel.cpp"
    break;

  case 563: /* opt_try_expr: expr  */
#line 2154 "chapel.ypp"
                  { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9696 "bison-chapel.cpp"
    break;

  case 568: /* fun_expr: lhs_expr  */
#line 2172 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9702 "bison-chapel.cpp"
    break;

  case 569: /* fun_expr: expr TBANG  */
#line 2173 "chapel.ypp"
                     { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 9708 "bison-chapel.cpp"
    break;

  case 570: /* fun_expr: sub_type_level_expr TQUESTION  */
#line 2174 "chapel.ypp"
                                {(yyval.pexpr) = new CallExpr(PRIM_TO_NILABLE_CLASS_CHECKED, (yyvsp[-1].pexpr));}
#line 9714 "bison-chapel.cpp"
    break;

  case 571: /* fun_expr: lambda_decl_expr  */
#line 2175 "chapel.ypp"
                     { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 9720 "bison-chapel.cpp"
    break;

  case 572: /* call_expr: fun_expr TLP opt_actual_ls TRP  */
#line 2179 "chapel.ypp"
                                        { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 9726 "bison-chapel.cpp"
    break;

  case 573: /* call_expr: fun_expr TLSBR opt_actual_ls TRSBR  */
#line 2180 "chapel.ypp"
                                        { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 9732 "bison-chapel.cpp"
    break;

  case 574: /* call_expr: TPRIMITIVE TLP opt_actual_ls TRP  */
#line 2181 "chapel.ypp"
                                        { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 9738 "bison-chapel.cpp"
    break;

  case 575: /* dot_expr: expr TDOT ident_use  */
#line 2185 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 9744 "bison-chapel.cpp"
    break;

  case 576: /* dot_expr: expr TDOT TTYPE  */
#line 2186 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 9750 "bison-chapel.cpp"
    break;

  case 577: /* dot_expr: expr TDOT TDOMAIN  */
#line 2187 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 9756 "bison-chapel.cpp"
    break;

  case 578: /* dot_expr: expr TDOT TLOCALE  */
#line 2188 "chapel.ypp"
                               { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "locale"); }
#line 9762 "bison-chapel.cpp"
    break;

  case 579: /* dot_expr: expr TDOT TBYTES TLP TRP  */
#line 2189 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr(buildDotExpr((yyvsp[-4].pexpr), "chpl_bytes")); }
#line 9768 "bison-chapel.cpp"
    break;

  case 580: /* parenthesized_expr: TLP tuple_component TRP  */
#line 2197 "chapel.ypp"
                                    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 9774 "bison-chapel.cpp"
    break;

  case 581: /* parenthesized_expr: TLP tuple_component TCOMMA TRP  */
#line 2198 "chapel.ypp"
                                    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 9780 "bison-chapel.cpp"
    break;

  case 582: /* parenthesized_expr: TLP tuple_expr_ls TRP  */
#line 2199 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 9786 "bison-chapel.cpp"
    break;

  case 583: /* parenthesized_expr: TLP tuple_expr_ls TCOMMA TRP  */
#line 2200 "chapel.ypp"
                                    { (yyval.pexpr) = buildTuple((yyvsp[-2].pcallexpr)); }
#line 9792 "bison-chapel.cpp"
    break;

  case 584: /* bool_literal: TFALSE  */
#line 2204 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gFalse); }
#line 9798 "bison-chapel.cpp"
    break;

  case 585: /* bool_literal: TTRUE  */
#line 2205 "chapel.ypp"
         { (yyval.pexpr) = new SymExpr(gTrue); }
#line 9804 "bison-chapel.cpp"
    break;

  case 587: /* literal_expr: INTLITERAL  */
#line 2210 "chapel.ypp"
                        { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch), yyfilename, chplLineno);    }
#line 9810 "bison-chapel.cpp"
    break;

  case 588: /* literal_expr: REALLITERAL  */
#line 2211 "chapel.ypp"
                        { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 9816 "bison-chapel.cpp"
    break;

  case 589: /* literal_expr: IMAGLITERAL  */
#line 2212 "chapel.ypp"
                        { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 9822 "bison-chapel.cpp"
    break;

  case 590: /* literal_expr: STRINGLITERAL  */
#line 2213 "chapel.ypp"
                        { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 9828 "bison-chapel.cpp"
    break;

  case 591: /* literal_expr: BYTESLITERAL  */
#line 2214 "chapel.ypp"
                        { (yyval.pexpr) = buildBytesLiteral((yyvsp[0].pch)); }
#line 9834 "bison-chapel.cpp"
    break;

  case 592: /* literal_expr: CSTRINGLITERAL  */
#line 2215 "chapel.ypp"
                        { (yyval.pexpr) = buildCStringLiteral((yyvsp[0].pch)); }
#line 9840 "bison-chapel.cpp"
    break;

  case 593: /* literal_expr: TNONE  */
#line 2216 "chapel.ypp"
                        { (yyval.pexpr) = new SymExpr(gNone); }
#line 9846 "bison-chapel.cpp"
    break;

  case 594: /* literal_expr: TLCBR expr_ls TRCBR  */
#line 2217 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr)); }
#line 9852 "bison-chapel.cpp"
    break;

  case 595: /* literal_expr: TLCBR expr_ls TCOMMA TRCBR  */
#line 2218 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-2].pcallexpr)); }
#line 9858 "bison-chapel.cpp"
    break;

  case 596: /* literal_expr: TLSBR expr_ls TRSBR  */
#line 2219 "chapel.ypp"
                        { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 9864 "bison-chapel.cpp"
    break;

  case 597: /* literal_expr: TLSBR expr_ls TCOMMA TRSBR  */
#line 2220 "chapel.ypp"
                               { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-2].pcallexpr)); }
#line 9870 "bison-chapel.cpp"
    break;

  case 598: /* literal_expr: TLSBR assoc_expr_ls TRSBR  */
#line 2222 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 9878 "bison-chapel.cpp"
    break;

  case 599: /* literal_expr: TLSBR assoc_expr_ls TCOMMA TRSBR  */
#line 2226 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-2].pcallexpr));
    }
#line 9886 "bison-chapel.cpp"
    break;

  case 600: /* assoc_expr_ls: expr TALIAS expr  */
#line 2233 "chapel.ypp"
                                        { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9892 "bison-chapel.cpp"
    break;

  case 601: /* assoc_expr_ls: assoc_expr_ls TCOMMA expr TALIAS expr  */
#line 2234 "chapel.ypp"
                                        { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 9898 "bison-chapel.cpp"
    break;

  case 602: /* binary_op_expr: expr TPLUS expr  */
#line 2238 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9904 "bison-chapel.cpp"
    break;

  case 603: /* binary_op_expr: expr TMINUS expr  */
#line 2239 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9910 "bison-chapel.cpp"
    break;

  case 604: /* binary_op_expr: expr TSTAR expr  */
#line 2240 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9916 "bison-chapel.cpp"
    break;

  case 605: /* binary_op_expr: expr TDIVIDE expr  */
#line 2241 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9922 "bison-chapel.cpp"
    break;

  case 606: /* binary_op_expr: expr TSHIFTLEFT expr  */
#line 2242 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9928 "bison-chapel.cpp"
    break;

  case 607: /* binary_op_expr: expr TSHIFTRIGHT expr  */
#line 2243 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9934 "bison-chapel.cpp"
    break;

  case 608: /* binary_op_expr: expr TMOD expr  */
#line 2244 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9940 "bison-chapel.cpp"
    break;

  case 609: /* binary_op_expr: expr TEQUAL expr  */
#line 2245 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9946 "bison-chapel.cpp"
    break;

  case 610: /* binary_op_expr: expr TNOTEQUAL expr  */
#line 2246 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9952 "bison-chapel.cpp"
    break;

  case 611: /* binary_op_expr: expr TLESSEQUAL expr  */
#line 2247 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9958 "bison-chapel.cpp"
    break;

  case 612: /* binary_op_expr: expr TGREATEREQUAL expr  */
#line 2248 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9964 "bison-chapel.cpp"
    break;

  case 613: /* binary_op_expr: expr TLESS expr  */
#line 2249 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9970 "bison-chapel.cpp"
    break;

  case 614: /* binary_op_expr: expr TGREATER expr  */
#line 2250 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9976 "bison-chapel.cpp"
    break;

  case 615: /* binary_op_expr: expr TBAND expr  */
#line 2251 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9982 "bison-chapel.cpp"
    break;

  case 616: /* binary_op_expr: expr TBOR expr  */
#line 2252 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9988 "bison-chapel.cpp"
    break;

  case 617: /* binary_op_expr: expr TBXOR expr  */
#line 2253 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 9994 "bison-chapel.cpp"
    break;

  case 618: /* binary_op_expr: expr TAND expr  */
#line 2254 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10000 "bison-chapel.cpp"
    break;

  case 619: /* binary_op_expr: expr TOR expr  */
#line 2255 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10006 "bison-chapel.cpp"
    break;

  case 620: /* binary_op_expr: expr TEXP expr  */
#line 2256 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10012 "bison-chapel.cpp"
    break;

  case 621: /* binary_op_expr: expr TBY expr  */
#line 2257 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10018 "bison-chapel.cpp"
    break;

  case 622: /* binary_op_expr: expr TALIGN expr  */
#line 2258 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl_align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10024 "bison-chapel.cpp"
    break;

  case 623: /* binary_op_expr: expr THASH expr  */
#line 2259 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10030 "bison-chapel.cpp"
    break;

  case 624: /* binary_op_expr: expr TDMAPPED expr  */
#line 2260 "chapel.ypp"
                           { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 10036 "bison-chapel.cpp"
    break;

  case 625: /* unary_op_expr: TPLUS expr  */
#line 2264 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 10042 "bison-chapel.cpp"
    break;

  case 626: /* unary_op_expr: TMINUS expr  */
#line 2265 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 10048 "bison-chapel.cpp"
    break;

  case 627: /* unary_op_expr: TMINUSMINUS expr  */
#line 2266 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 10054 "bison-chapel.cpp"
    break;

  case 628: /* unary_op_expr: TPLUSPLUS expr  */
#line 2267 "chapel.ypp"
                                  { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 10060 "bison-chapel.cpp"
    break;

  case 629: /* unary_op_expr: TBANG expr  */
#line 2268 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 10066 "bison-chapel.cpp"
    break;

  case 630: /* unary_op_expr: expr TBANG  */
#line 2269 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("postfix!", (yyvsp[-1].pexpr)); }
#line 10072 "bison-chapel.cpp"
    break;

  case 631: /* unary_op_expr: TBNOT expr  */
#line 2270 "chapel.ypp"
                                  { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 10078 "bison-chapel.cpp"
    break;

  case 632: /* reduce_expr: expr TREDUCE expr  */
#line 2274 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10084 "bison-chapel.cpp"
    break;

  case 633: /* reduce_expr: expr TREDUCE zippered_iterator  */
#line 2275 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10090 "bison-chapel.cpp"
    break;

  case 634: /* reduce_expr: reduce_scan_op_expr TREDUCE expr  */
#line 2276 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10096 "bison-chapel.cpp"
    break;

  case 635: /* reduce_expr: reduce_scan_op_expr TREDUCE zippered_iterator  */
#line 2277 "chapel.ypp"
                                                 { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10102 "bison-chapel.cpp"
    break;

  case 636: /* scan_expr: expr TSCAN expr  */
#line 2281 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10108 "bison-chapel.cpp"
    break;

  case 637: /* scan_expr: expr TSCAN zippered_iterator  */
#line 2282 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10114 "bison-chapel.cpp"
    break;

  case 638: /* scan_expr: reduce_scan_op_expr TSCAN expr  */
#line 2283 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 10120 "bison-chapel.cpp"
    break;

  case 639: /* scan_expr: reduce_scan_op_expr TSCAN zippered_iterator  */
#line 2284 "chapel.ypp"
                                               { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pcallexpr), true); }
#line 10126 "bison-chapel.cpp"
    break;

  case 640: /* reduce_scan_op_expr: TPLUS  */
#line 2289 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 10132 "bison-chapel.cpp"
    break;

  case 641: /* reduce_scan_op_expr: TSTAR  */
#line 2290 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 10138 "bison-chapel.cpp"
    break;

  case 642: /* reduce_scan_op_expr: TAND  */
#line 2291 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 10144 "bison-chapel.cpp"
    break;

  case 643: /* reduce_scan_op_expr: TOR  */
#line 2292 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 10150 "bison-chapel.cpp"
    break;

  case 644: /* reduce_scan_op_expr: TBAND  */
#line 2293 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 10156 "bison-chapel.cpp"
    break;

  case 645: /* reduce_scan_op_expr: TBOR  */
#line 2294 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 10162 "bison-chapel.cpp"
    break;

  case 646: /* reduce_scan_op_expr: TBXOR  */
#line 2295 "chapel.ypp"
         { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 10168 "bison-chapel.cpp"
    break;


#line 10172 "bison-chapel.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (&yylloc, context, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, context);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
  yyps->yynew = 2;
  goto yypushreturn;


/*-------------------------.
| yypushreturn -- return.  |
`-------------------------*/
yypushreturn:

  return yyresult;
}
#undef yynerrs
#undef yystate
#undef yyerrstatus
#undef yyssa
#undef yyss
#undef yyssp
#undef yyvsa
#undef yyvs
#undef yyvsp
#undef yylsa
#undef yyls
#undef yylsp
#undef yystacksize
