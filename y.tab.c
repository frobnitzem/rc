/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 12 "syn.y"

#include "rc.h"
#include "fns.h"


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "syn.y"
{
	struct tree *tree;
}
/* Line 193 of yacc.c.  */
#line 159 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 172 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      32,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,    29,     2,    34,     2,
      37,    27,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    28,     2,    39,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
      25,    26,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    13,    17,    19,    23,
      27,    31,    32,    35,    38,    40,    41,    44,    45,    47,
      51,    55,    59,    61,    65,    66,    71,    72,    80,    81,
      90,    91,    98,   102,   105,   108,   111,   113,   116,   117,
     122,   126,   130,   133,   136,   138,   140,   143,   146,   149,
     152,   156,   161,   163,   165,   167,   169,   171,   175,   176,
     179,   182,   183,   186,   188,   190,   194,   196,   200,   203,
     209,   212,   215,   218,   221,   223,   225,   227,   229,   231,
     233,   235,   237,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    -1,    42,    32,    -1,    50,    -1,    42,
      33,    50,    -1,    42,    34,    50,    -1,    42,    -1,    43,
      32,    42,    -1,    35,    43,    36,    -1,    37,    43,    27,
      -1,    -1,    47,    46,    -1,    14,    62,    -1,    15,    -1,
      -1,    45,    49,    -1,    -1,    51,    -1,    50,    18,    51,
      -1,    50,    19,    51,    -1,    50,    16,    51,    -1,    57,
      -1,     6,    48,    50,    -1,    -1,     6,     7,    52,    50,
      -1,    -1,     6,    48,    44,     6,     7,    53,    50,    -1,
      -1,     3,    37,    62,     4,    64,    27,    54,    50,    -1,
      -1,     3,    37,    62,    27,    55,    50,    -1,     5,    48,
      50,    -1,     9,    50,    -1,    10,    50,    -1,    47,    51,
      -1,    59,    -1,    59,    51,    -1,    -1,    11,    66,    56,
      44,    -1,     8,    62,    64,    -1,    12,    64,    44,    -1,
      12,    64,    -1,    44,    46,    -1,    60,    -1,    58,    -1,
      60,    47,    -1,    60,    66,    -1,    58,    62,    -1,    58,
      47,    -1,    60,    38,    66,    -1,    60,    28,    38,    66,
      -1,    67,    -1,    13,    -1,    65,    -1,    38,    -1,    61,
      -1,    62,    28,    61,    -1,    -1,    63,    62,    -1,    63,
      32,    -1,    -1,    64,    62,    -1,    60,    -1,    68,    -1,
      37,    63,    27,    -1,    65,    -1,    66,    28,    61,    -1,
      29,    66,    -1,    29,    66,    17,    63,    27,    -1,    30,
      66,    -1,    31,    66,    -1,    39,    44,    -1,    14,    44,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    25,    25,    26,    27,    28,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    50,    52,    52,    54,    54,
      64,    64,    66,    68,    69,    70,    71,    72,    73,    73,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    88,    89,    92,    93,    95,    96,    97,    98,
      99,   100,   101,   103,   104,   105,   107,   108,   110,   111,
     112,   113,   114,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FOR", "IN", "WHILE", "IF", "NOT",
  "TWIDDLE", "BANG", "SUBSHELL", "SWITCH", "FN", "WORD", "REDIR", "DUP",
  "PIPE", "SUB", "ANDAND", "OROR", "SIMPLE", "ARGLIST", "WORDS", "BRACE",
  "PAREN", "PCMD", "PIPEFD", "')'", "'^'", "'$'", "'\"'", "COUNT", "'\\n'",
  "';'", "'&'", "'{'", "'}'", "'('", "'='", "'`'", "$accept", "rc", "line",
  "body", "brace", "paren", "epilog", "redir", "parnl", "@1", "cmdexpr",
  "cmd", "@2", "@3", "@4", "@5", "@6", "simple", "compound", "assign",
  "first", "word_t", "word", "wordsnl", "words", "kword_t", "kword",
  "comword", "keyword", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    41,    94,    36,
      34,   282,    10,    59,    38,   123,   125,    40,    61,    96
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    42,    43,    43,    44,
      45,    46,    46,    47,    47,    49,    48,    50,    50,    50,
      50,    50,    51,    51,    52,    51,    53,    51,    54,    51,
      55,    51,    51,    51,    51,    51,    51,    51,    56,    51,
      51,    51,    51,    51,    57,    57,    57,    58,    58,    58,
      59,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     3,     1,     3,     3,
       3,     0,     2,     2,     1,     0,     2,     0,     1,     3,
       3,     3,     1,     3,     0,     4,     0,     7,     0,     8,
       0,     6,     3,     2,     2,     2,     1,     2,     0,     4,
       3,     3,     2,     2,     1,     1,     2,     2,     2,     2,
       3,     4,     1,     1,     1,     1,     1,     3,     0,     2,
       2,     0,     2,     1,     1,     3,     1,     3,     2,     5,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      17,     0,     0,     0,     0,    17,    17,     0,    61,    53,
       0,    14,     0,     0,     0,    17,     0,     0,     0,    11,
       0,     4,    18,    22,    45,    36,    44,    52,     0,    17,
      15,    17,    24,    17,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,     0,    58,    55,    63,    56,    61,
      54,    64,    33,    34,    66,    38,    42,    73,    13,    68,
      70,    71,     7,     0,    72,     1,     3,    17,    17,     0,
      43,    11,    35,     0,     0,     0,    49,    48,    37,     0,
       0,    46,    47,     0,     0,    16,    32,    17,    11,    23,
       0,     0,    40,     0,     0,    41,    62,    58,    17,     9,
       5,     6,    12,    21,    19,    20,     0,    50,    61,    30,
      10,    25,     0,    65,    60,    59,    57,    67,    39,     0,
       8,    51,     0,    17,    26,    69,    28,    31,    17,    17,
      27,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    17,    62,    63,    19,    30,    70,    20,    31,    85,
      21,    22,    87,   128,   129,   123,    94,    23,    24,    25,
      26,    48,    96,    90,    56,    50,    55,    27,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -45
static const yytype_int16 yypact[] =
{
     126,   -34,   -31,     1,   312,   359,   359,   324,   -45,   -45,
     225,   -45,   324,   324,   324,   359,     5,    43,    42,    46,
     359,    49,   -45,   -45,   262,   359,   139,   -45,   312,   359,
     -45,   359,   -45,   359,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,     5,   -45,   -45,   -45,   -45,    19,
     -45,   -45,    33,    33,   -45,    27,   225,   -45,    19,    40,
     -45,   -45,    37,    -2,   -45,   -45,   -45,   359,   359,   312,
     -45,    46,   -45,   359,   359,   359,   -45,    19,   -45,    41,
     324,   -45,    27,    18,    12,   -45,    49,   359,    36,    49,
     176,   312,   312,   312,     5,   -45,    19,   -45,   359,   -45,
      49,    49,   -45,   -45,   -45,   -45,   324,    27,   -45,   -45,
     -45,    49,    59,   -45,   -45,    19,   -45,   -45,   -45,   213,
      37,    27,   275,   359,   -45,   -45,   -45,    49,   359,   359,
      49,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,     2,    51,    25,   -45,    13,   -15,    75,   -45,
      -5,    28,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       3,   -39,     8,   -12,   -44,     7,    11,   -45,   -45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      52,    53,    18,    28,    71,    92,    29,    47,    32,    76,
      47,    81,    49,    47,    54,    47,    47,    47,    58,    54,
      54,    54,   108,    59,    60,    61,    86,    47,    89,    47,
      98,    47,    77,    54,    99,    57,    83,    82,    29,   110,
      15,    64,   112,    65,    98,   109,    91,    91,    72,    73,
      69,    11,   116,    78,   117,    93,    71,    97,    88,    47,
      69,    11,   100,   101,   122,    73,   124,    74,    75,    57,
      67,    68,    47,    71,    66,    67,    68,    58,    33,   106,
      84,    95,   111,    47,   102,   119,     0,    54,     0,     0,
       0,   107,     0,    47,    47,    47,    47,     0,   115,     0,
     120,   103,   104,   105,     0,     0,     0,     0,     0,    47,
       0,     0,     0,    54,     0,     0,     0,   121,   127,   118,
       0,     0,    47,   130,   131,    47,    -2,   115,     0,     1,
       0,     2,     3,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,     0,     0,     0,    16,     0,    79,    12,    13,
      14,     0,     0,     0,     0,     0,    45,    80,    16,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     9,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,    12,    13,    14,   114,     0,
       0,     0,     0,    45,    46,    16,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     9,    44,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     9,    44,
     125,     0,    12,    13,    14,   114,     0,     0,     0,     0,
      45,    46,    16,     0,    12,    13,    14,     0,     0,     0,
      15,     0,    45,    46,    16,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,     9,    10,    11,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     9,    44,
       0,    12,    13,    14,     0,     0,     0,     0,     0,    45,
      46,    16,   126,     0,    12,    13,    14,     0,     0,     0,
       0,     0,    45,    46,    16,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,     9,    44,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     9,    44,     0,
       0,    12,    13,    14,     0,     0,     0,     0,     0,    45,
      46,    16,     0,    12,    13,    14,     0,     0,     0,     0,
       0,    45,     1,    16,     2,     3,     0,     4,     5,     6,
       7,     8,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
      14,     0,     0,     0,    15,     0,     0,     0,    16
};

static const yytype_int16 yycheck[] =
{
       5,     6,     0,    37,    19,    49,    37,     4,     7,    24,
       7,    26,     4,    10,     7,    12,    13,    14,    10,    12,
      13,    14,     4,    12,    13,    14,    31,    24,    33,    26,
      32,    28,    24,    26,    36,    10,    28,    26,    37,    27,
      35,    16,     6,     0,    32,    27,    28,    28,    20,    16,
      14,    15,    91,    25,    93,    28,    71,    17,    33,    56,
      14,    15,    67,    68,   108,    16,     7,    18,    19,    44,
      33,    34,    69,    88,    32,    33,    34,    69,     3,    38,
      29,    56,    87,    80,    71,    97,    -1,    80,    -1,    -1,
      -1,    80,    -1,    90,    91,    92,    93,    -1,    90,    -1,
      98,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,   106,    -1,    -1,    -1,   106,   123,    94,
      -1,    -1,   119,   128,   129,   122,     0,   119,    -1,     3,
      -1,     5,     6,    -1,     8,     9,    10,    11,    12,    13,
      14,    15,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    29,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    39,    -1,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      27,    -1,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      37,    38,    39,    -1,    29,    30,    31,    -1,    -1,    -1,
      35,    -1,    37,    38,    39,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    27,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      -1,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    37,     3,    39,     5,     6,    -1,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,     9,    10,    11,    12,    13,
      14,    15,    29,    30,    31,    35,    39,    41,    42,    44,
      47,    50,    51,    57,    58,    59,    60,    67,    37,    37,
      45,    48,     7,    48,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    14,    37,    38,    60,    61,    62,
      65,    68,    50,    50,    65,    66,    64,    44,    62,    66,
      66,    66,    42,    43,    44,     0,    32,    33,    34,    14,
      46,    47,    51,    16,    18,    19,    47,    62,    51,    28,
      38,    47,    66,    62,    43,    49,    50,    52,    44,    50,
      63,    28,    64,    28,    56,    44,    62,    17,    32,    36,
      50,    50,    46,    51,    51,    51,    38,    66,     4,    27,
      27,    50,     6,    27,    32,    62,    61,    61,    44,    63,
      42,    66,    64,    55,     7,    27,    27,    50,    53,    54,
      50,    50
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 25 "syn.y"
    { return 1;}
    break;

  case 3:
#line 26 "syn.y"
    {return !compile(reassoc((yyvsp[(1) - (2)].tree)));}
    break;

  case 5:
#line 28 "syn.y"
    {(yyval.tree)=tree2(';', (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 6:
#line 33 "syn.y"
    {(yyval.tree)=!(struct tree *)(yyvsp[(1) - (3)].tree)?(yyvsp[(3) - (3)].tree):((yyvsp[(1) - (3)].tree)->type!=';'?tree2(';', tree1('&', (yyvsp[(1) - (3)].tree)), (yyvsp[(3) - (3)].tree)):tree2(';', mung2((yyvsp[(1) - (3)].tree),(yyvsp[(1) - (3)].tree)->child[0],tree1('&',(yyvsp[(1) - (3)].tree)->child[1])), (yyvsp[(3) - (3)].tree)) );}
    break;

  case 7:
#line 34 "syn.y"
    {(yyval.tree)=reassoc((yyvsp[(1) - (1)].tree));}
    break;

  case 8:
#line 35 "syn.y"
    {(yyval.tree)=tree2(';', (yyvsp[(1) - (3)].tree), reassoc((yyvsp[(3) - (3)].tree)));}
    break;

  case 9:
#line 36 "syn.y"
    {(yyval.tree)=tree1(BRACE, reassoc((yyvsp[(2) - (3)].tree)));}
    break;

  case 10:
#line 37 "syn.y"
    {(yyval.tree)=tree1(PCMD, reassoc((yyvsp[(2) - (3)].tree)));}
    break;

  case 11:
#line 38 "syn.y"
    {(yyval.tree)=0;}
    break;

  case 12:
#line 39 "syn.y"
    {(yyval.tree)=mung2((yyvsp[(1) - (2)].tree), (yyvsp[(1) - (2)].tree)->child[0], (yyvsp[(2) - (2)].tree));}
    break;

  case 13:
#line 40 "syn.y"
    {(yyval.tree)=mung1((yyvsp[(1) - (2)].tree), (yyvsp[(1) - (2)].tree)->rtype==HERE?heredoc((yyvsp[(2) - (2)].tree)):(yyvsp[(2) - (2)].tree));}
    break;

  case 15:
#line 42 "syn.y"
    {skipnl();}
    break;

  case 16:
#line 42 "syn.y"
    {(yyval.tree)=(yyvsp[(1) - (2)].tree);}
    break;

  case 17:
#line 43 "syn.y"
    {(yyval.tree)=(struct tree *)0;}
    break;

  case 19:
#line 45 "syn.y"
    {(yyval.tree)=tree2(ANDAND, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 20:
#line 46 "syn.y"
    {(yyval.tree)=tree2(OROR, (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 21:
#line 47 "syn.y"
    {(yyval.tree)=mung2((yyvsp[(2) - (3)].tree), (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 22:
#line 48 "syn.y"
    {(yyval.tree)=simplemung((yyvsp[(1) - (1)].tree));}
    break;

  case 23:
#line 49 "syn.y"
    {(yyval.tree)=mung2((yyvsp[(1) - (3)].tree), (yyvsp[(2) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 24:
#line 50 "syn.y"
    {skipnl();}
    break;

  case 25:
#line 51 "syn.y"
    {(yyval.tree)=mung1((yyvsp[(2) - (4)].tree), (yyvsp[(4) - (4)].tree));}
    break;

  case 26:
#line 52 "syn.y"
    {skipnl();}
    break;

  case 27:
#line 53 "syn.y"
    {(yyval.tree)=tree2(';',mung2((yyvsp[(1) - (7)].tree), (yyvsp[(2) - (7)].tree), (yyvsp[(3) - (7)].tree)),mung1((yyvsp[(5) - (7)].tree), (yyvsp[(7) - (7)].tree)));}
    break;

  case 28:
#line 54 "syn.y"
    {skipnl();}
    break;

  case 29:
#line 63 "syn.y"
    {(yyval.tree)=mung3((yyvsp[(1) - (8)].tree), (yyvsp[(3) - (8)].tree), (yyvsp[(5) - (8)].tree) ? (yyvsp[(5) - (8)].tree) : tree1(PAREN, (yyvsp[(5) - (8)].tree)), (yyvsp[(8) - (8)].tree));}
    break;

  case 30:
#line 64 "syn.y"
    {skipnl();}
    break;

  case 31:
#line 65 "syn.y"
    {(yyval.tree)=mung3((yyvsp[(1) - (6)].tree), (yyvsp[(3) - (6)].tree), (struct tree *)0, (yyvsp[(6) - (6)].tree));}
    break;

  case 32:
#line 67 "syn.y"
    {(yyval.tree)=mung2((yyvsp[(1) - (3)].tree), (yyvsp[(2) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 33:
#line 68 "syn.y"
    {(yyval.tree)=mung1((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));}
    break;

  case 34:
#line 69 "syn.y"
    {(yyval.tree)=mung1((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));}
    break;

  case 35:
#line 70 "syn.y"
    {(yyval.tree)=mung2((yyvsp[(1) - (2)].tree), (yyvsp[(1) - (2)].tree)->child[0], (yyvsp[(2) - (2)].tree));}
    break;

  case 36:
#line 71 "syn.y"
    {(yyval.tree)=mung3((yyvsp[(1) - (1)].tree), (yyvsp[(1) - (1)].tree)->child[0], (yyvsp[(1) - (1)].tree)->child[1], (struct tree *)0);}
    break;

  case 37:
#line 72 "syn.y"
    {(yyval.tree)=mung3((yyvsp[(1) - (2)].tree), (yyvsp[(1) - (2)].tree)->child[0], (yyvsp[(1) - (2)].tree)->child[1], (yyvsp[(2) - (2)].tree));}
    break;

  case 38:
#line 73 "syn.y"
    {skipnl();}
    break;

  case 39:
#line 74 "syn.y"
    {(yyval.tree)=tree2(SWITCH, (yyvsp[(2) - (4)].tree), (yyvsp[(4) - (4)].tree));}
    break;

  case 40:
#line 75 "syn.y"
    {(yyval.tree)=mung2((yyvsp[(1) - (3)].tree), (yyvsp[(2) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 41:
#line 76 "syn.y"
    {(yyval.tree)=tree2(FN, (yyvsp[(2) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 42:
#line 77 "syn.y"
    {(yyval.tree)=tree1(FN, (yyvsp[(2) - (2)].tree));}
    break;

  case 43:
#line 78 "syn.y"
    {(yyval.tree)=epimung((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree), 1);}
    break;

  case 46:
#line 81 "syn.y"
    {(yyval.tree)=tree2(ARGLIST, (yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));}
    break;

  case 47:
#line 82 "syn.y"
    {(yyval.tree)=tree2(ARGLIST, (yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));}
    break;

  case 48:
#line 83 "syn.y"
    {(yyval.tree)=tree2(ARGLIST, (yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));}
    break;

  case 49:
#line 84 "syn.y"
    {(yyval.tree)=tree2(ARGLIST, (yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));}
    break;

  case 50:
#line 85 "syn.y"
    {(yyval.tree)=tree2('=', (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 51:
#line 86 "syn.y"
    {(yyval.tree)=tree2('=', (yyvsp[(1) - (4)].tree), (yyvsp[(4) - (4)].tree));}
    break;

  case 55:
#line 93 "syn.y"
    {lastword=1; (yyval.tree)=token("=", WORD);}
    break;

  case 57:
#line 96 "syn.y"
    {(yyval.tree)=tree2('^', (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 58:
#line 97 "syn.y"
    {(yyval.tree)=(struct tree*)0;}
    break;

  case 59:
#line 98 "syn.y"
    {(yyval.tree)=tree2(WORDS, (yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));}
    break;

  case 60:
#line 99 "syn.y"
    {(yyval.tree)=(yyvsp[(1) - (2)].tree);}
    break;

  case 61:
#line 100 "syn.y"
    {(yyval.tree)=(struct tree*)0;}
    break;

  case 62:
#line 101 "syn.y"
    {(yyval.tree)=tree2(WORDS, (yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree));}
    break;

  case 64:
#line 104 "syn.y"
    {lastword=1; (yyvsp[(1) - (1)].tree)->type=WORD;}
    break;

  case 65:
#line 105 "syn.y"
    {(yyval.tree)=tree1(PAREN, (yyvsp[(2) - (3)].tree));}
    break;

  case 67:
#line 108 "syn.y"
    {(yyval.tree)=tree2('^', (yyvsp[(1) - (3)].tree), (yyvsp[(3) - (3)].tree));}
    break;

  case 68:
#line 110 "syn.y"
    {(yyval.tree)=tree1('$', (yyvsp[(2) - (2)].tree));}
    break;

  case 69:
#line 111 "syn.y"
    {(yyval.tree)=tree2(SUB, (yyvsp[(2) - (5)].tree), (yyvsp[(4) - (5)].tree));}
    break;

  case 70:
#line 112 "syn.y"
    {(yyval.tree)=tree1('"', (yyvsp[(2) - (2)].tree));}
    break;

  case 71:
#line 113 "syn.y"
    {(yyval.tree)=tree1(COUNT, (yyvsp[(2) - (2)].tree));}
    break;

  case 72:
#line 114 "syn.y"
    {(yyval.tree)=tree1('`', (yyvsp[(2) - (2)].tree));}
    break;

  case 73:
#line 115 "syn.y"
    {(yyval.tree)=mung1((yyvsp[(1) - (2)].tree), (yyvsp[(2) - (2)].tree)); (yyval.tree)->type=PIPEFD;}
    break;


/* Line 1267 of yacc.c.  */
#line 1846 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



