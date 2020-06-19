/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 3 "parser.y"

#include "stdio.h"
#include "math.h"
#include "string.h"
#include "define.h"

extern int yylineno;
extern char *yytext;
extern FILE *yyin;
void yyerror(const char* fmt, ...);
void display(struct node *,int);

/* Line 371 of yacc.c  */
#line 81 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
     INT = 258,
     FLOAT = 259,
     CHAR = 260,
     ID = 261,
     RELOP = 262,
     TYPE = 263,
     ARRAY = 264,
     LP = 265,
     RP = 266,
     LB = 267,
     RB = 268,
     LC = 269,
     RC = 270,
     SEMI = 271,
     COMMA = 272,
     BOOL = 273,
     ASSIGNOP = 274,
     PLUS = 275,
     MINUS = 276,
     STAR = 277,
     DIV = 278,
     AND = 279,
     OR = 280,
     DOT = 281,
     NOT = 282,
     STRUCT = 283,
     RETURN = 284,
     BREAK = 285,
     CONTINUE = 286,
     IF = 287,
     ELSE = 288,
     WHILE = 289,
     FOR = 290,
     SELFADD = 291,
     SELFDEC = 292,
     ADD_ASSIGNOP = 293,
     MINUS_ASSIGNOP = 294,
     STAR_ASSIGNOP = 295,
     DIV_ASSIGNOP = 296,
     EXP_STMT = 297,
     FUNCTION = 298,
     PARAM = 299,
     ARG = 300,
     CALL = 301,
     LABEL = 302,
     GOTO = 303,
     JLT = 304,
     JLE = 305,
     JGT = 306,
     JGE = 307,
     EQ = 308,
     NEQ = 309,
     UMINUS = 310,
     LOWER_THAN_RB = 311,
     LOWER_THEN_ELSE = 312,
     ARRAY_FIRST = 313
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 16 "parser.y"

	int    type_int;
	float  type_float;
        char   type_char;
	char   type_id[32];
	struct node *ptr;


/* Line 387 of yacc.c  */
#line 191 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 232 "parser.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   274

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  147

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    13,    17,    20,    22,
      26,    28,    33,    35,    40,    44,    46,    50,    53,    58,
      59,    62,    65,    67,    71,    77,    85,    91,    97,   103,
     104,   107,   111,   113,   117,   119,   123,   127,   131,   135,
     139,   143,   147,   151,   155,   159,   162,   165,   168,   171,
     174,   177,   181,   185,   189,   193,   198,   202,   207,   209,
     211,   213,   215,   217,   219,   223,   225,   226,   228,   231,
     235,   237,   241,   242,   246,   247,   249,   251
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    61,    -1,    -1,    62,    61,    -1,    64,
      63,    16,    -1,    64,    66,    69,    -1,     1,    16,    -1,
      65,    -1,    65,    17,    63,    -1,     8,    -1,     6,    12,
       3,    13,    -1,     6,    -1,     6,    10,    67,    11,    -1,
       6,    10,    11,    -1,    68,    -1,    68,    17,    67,    -1,
      64,    65,    -1,    14,    73,    70,    15,    -1,    -1,    71,
      70,    -1,    77,    16,    -1,    69,    -1,    29,    77,    16,
      -1,    32,    10,    77,    11,    71,    -1,    32,    10,    77,
      11,    71,    33,    71,    -1,    34,    10,    77,    11,    71,
      -1,    35,    10,    72,    11,    71,    -1,    79,    16,    82,
      16,    83,    -1,    -1,    74,    73,    -1,    64,    75,    16,
      -1,    76,    -1,    76,    17,    75,    -1,    65,    -1,    65,
      19,    77,    -1,    77,    19,    77,    -1,    77,    24,    77,
      -1,    77,    25,    77,    -1,    77,     7,    77,    -1,    77,
      20,    77,    -1,    77,    21,    77,    -1,    77,    22,    77,
      -1,    77,    23,    77,    -1,    10,    77,    11,    -1,    21,
      77,    -1,    27,    77,    -1,    65,    36,    -1,    36,    65,
      -1,    65,    37,    -1,    37,    65,    -1,    65,    38,    77,
      -1,    65,    39,    77,    -1,    65,    40,    77,    -1,    65,
      41,    77,    -1,     6,    10,    78,    11,    -1,     6,    10,
      11,    -1,     6,    12,    77,    13,    -1,    65,    -1,     3,
      -1,     4,    -1,     5,    -1,    30,    -1,    31,    -1,    77,
      17,    78,    -1,    77,    -1,    -1,    81,    -1,    64,    76,
      -1,    65,    19,    77,    -1,    80,    -1,    80,    17,    81,
      -1,    -1,    65,     7,    77,    -1,    -1,    84,    -1,    77,
      -1,    77,    17,    84,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    53,    54,    56,    57,    58,    61,    62,
      66,    72,    73,    75,    76,    78,    79,    81,    85,    87,
      88,    90,    91,    92,    93,    94,    95,    96,    99,   103,
     104,   106,   108,   109,   111,   112,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   145,   146,   148,   149,   152,   153,
     155,   156,   158,   159,   161,   162,   164,   165
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "FLOAT", "CHAR", "ID", "RELOP",
  "TYPE", "ARRAY", "LP", "RP", "LB", "RB", "LC", "RC", "SEMI", "COMMA",
  "BOOL", "ASSIGNOP", "PLUS", "MINUS", "STAR", "DIV", "AND", "OR", "DOT",
  "NOT", "STRUCT", "RETURN", "BREAK", "CONTINUE", "IF", "ELSE", "WHILE",
  "FOR", "SELFADD", "SELFDEC", "ADD_ASSIGNOP", "MINUS_ASSIGNOP",
  "STAR_ASSIGNOP", "DIV_ASSIGNOP", "EXP_STMT", "FUNCTION", "PARAM", "ARG",
  "CALL", "LABEL", "GOTO", "JLT", "JLE", "JGT", "JGE", "EQ", "NEQ",
  "UMINUS", "LOWER_THAN_RB", "LOWER_THEN_ELSE", "ARRAY_FIRST", "$accept",
  "program", "ExtDefList", "ExtDef", "ExtDecList", "Specifier", "VarDec",
  "FuncDec", "VarList", "ParamDec", "CompSt", "StmtList", "Stmt",
  "ExpForCond", "DefList", "Def", "DecList", "Dec", "Exp", "Args",
  "ExpFor1", "ExpFor1Atom", "ExpFor1List", "ExpFor2", "ExpFor3",
  "ExpFor3List", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    62,    63,    63,
      64,    65,    65,    66,    66,    67,    67,    68,    69,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    72,    73,
      73,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     3,     2,     1,     3,
       1,     4,     1,     4,     3,     1,     3,     2,     4,     0,
       2,     2,     1,     3,     5,     7,     5,     5,     5,     0,
       2,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     4,     3,     4,     1,     1,
       1,     1,     1,     1,     3,     1,     0,     1,     2,     3,
       1,     3,     0,     3,     0,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    10,     0,     2,     0,     0,     7,     1,     4,
      12,     0,     8,     0,     0,     0,     5,     0,    29,     6,
      14,     0,     0,    15,     0,    12,     9,     0,    19,    29,
      17,    13,     0,    11,    34,     0,    32,    59,    60,    61,
      12,     0,     0,     0,     0,    62,    63,     0,     0,     0,
       0,     0,    58,    22,     0,    19,     0,    30,    16,     0,
      31,     0,     0,     0,     0,    45,    46,     0,     0,     0,
      66,    48,    50,    47,    49,     0,     0,     0,     0,    18,
      20,     0,    21,     0,     0,     0,     0,     0,     0,     0,
      35,    33,    56,    65,     0,    59,     0,    44,    23,     0,
       0,     0,     0,     0,     0,    70,    67,    51,    52,    53,
      54,    39,    36,    40,    41,    42,    43,    37,    38,     0,
      55,    57,     0,     0,    68,     0,     0,    72,     0,    64,
      24,    26,    69,    27,     0,     0,    71,     0,     0,    74,
      25,    73,    76,    28,    75,     0,    77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    11,     6,    52,    13,    22,    23,
      53,    54,    55,   103,    28,    29,    35,    36,    56,    94,
     104,   105,   106,   135,   143,   144
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
       2,   -12,   -53,    26,   -53,     2,    53,   -53,   -53,   -53,
       8,    57,    52,    61,     6,    83,   -53,    81,    80,   -53,
     -53,    81,    89,    84,    96,    90,   -53,    81,    62,    80,
     -53,   -53,    80,   -53,    92,    98,    99,   -53,   -53,   -53,
      13,   114,   114,   114,   114,   -53,   -53,   115,   116,   117,
      81,    81,    41,   -53,   113,    62,   136,   -53,   -53,   114,
     -53,    81,   102,   143,   164,   -53,   -53,   174,   114,   114,
      50,   -53,   -53,   -53,   -53,   114,   114,   114,   114,   -53,
     -53,   114,   -53,   114,   114,   114,   114,   114,   114,   114,
     249,   -53,   -53,   184,   119,    96,   203,   -53,   -53,   210,
     229,    81,   112,   123,   120,   125,   -53,   249,   249,   249,
     249,     9,   249,   -10,   -10,   -53,   -53,    40,    15,   114,
     -53,   -53,    62,    62,   -53,   114,    62,    81,    50,   -53,
     104,   -53,   249,   -53,   133,   138,   -53,    62,   114,   114,
     -53,   249,   238,   -53,   -53,   114,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   157,   -53,   146,   -13,    -6,   -53,   134,   -53,
     152,   121,   -52,   -53,   139,   -53,   106,    68,   -35,    58,
     -53,   -53,    44,   -53,   -53,    33
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
      12,    21,    -3,     1,     7,    27,    64,    65,    66,    67,
       2,    12,    86,    87,     2,    30,    27,    20,    14,    21,
      15,    34,    81,    62,    90,    63,     8,    93,    96,    84,
      85,    86,    87,    99,   100,    84,    85,    86,    87,    88,
     107,   108,   109,   110,    71,    72,   111,    81,   112,   113,
     114,   115,   116,   117,   118,    34,    25,   101,     2,    10,
      84,    85,    86,    87,   102,    37,    38,    39,    40,    17,
     130,   131,    41,    16,   133,    18,    18,    73,    74,    75,
      76,    77,    78,    42,    93,   140,    24,    25,     2,    43,
     132,    44,    45,    46,    47,    34,    48,    49,    50,    51,
      31,    32,    15,   141,   142,    37,    38,    39,    40,    33,
     142,    59,    41,    92,    60,   101,    61,    37,    38,    39,
      40,   134,   102,    42,    41,    68,    69,    70,    79,    43,
     120,   125,    45,    46,   126,    42,   127,   137,    50,    51,
     138,    43,   128,    81,    45,    46,    95,    38,    39,    40,
      50,    51,    82,    41,   139,    83,    84,    85,    86,    87,
      88,    89,     9,    26,    42,    19,    58,    91,    57,   124,
      43,    81,   136,    45,    46,    97,    80,   129,   146,    50,
      51,    81,     0,    83,    84,    85,    86,    87,    88,    89,
      98,    81,     0,    83,    84,    85,    86,    87,    88,    89,
       0,   119,     0,    83,    84,    85,    86,    87,    88,    89,
      81,     0,     0,     0,     0,     0,   121,    81,     0,     0,
       0,   122,    83,    84,    85,    86,    87,    88,    89,    83,
      84,    85,    86,    87,    88,    89,    81,     0,     0,     0,
     123,     0,     0,     0,     0,    81,     0,     0,    83,    84,
      85,    86,    87,    88,    89,   145,    81,    83,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,    83,    84,
      85,    86,    87,    88,    89
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-53)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       6,    14,     0,     1,    16,    18,    41,    42,    43,    44,
       8,    17,    22,    23,     8,    21,    29,    11,    10,    32,
      12,    27,     7,    10,    59,    12,     0,    62,    63,    20,
      21,    22,    23,    68,    69,    20,    21,    22,    23,    24,
      75,    76,    77,    78,    50,    51,    81,     7,    83,    84,
      85,    86,    87,    88,    89,    61,     6,    70,     8,     6,
      20,    21,    22,    23,    70,     3,     4,     5,     6,    17,
     122,   123,    10,    16,   126,    14,    14,    36,    37,    38,
      39,    40,    41,    21,   119,   137,     3,     6,     8,    27,
     125,    29,    30,    31,    32,   101,    34,    35,    36,    37,
      11,    17,    12,   138,   139,     3,     4,     5,     6,    13,
     145,    19,    10,    11,    16,   128,    17,     3,     4,     5,
       6,   127,   128,    21,    10,    10,    10,    10,    15,    27,
      11,    19,    30,    31,    11,    21,    16,    33,    36,    37,
       7,    27,    17,     7,    30,    31,     3,     4,     5,     6,
      36,    37,    16,    10,    16,    19,    20,    21,    22,    23,
      24,    25,     5,    17,    21,    13,    32,    61,    29,   101,
      27,     7,   128,    30,    31,    11,    55,   119,   145,    36,
      37,     7,    -1,    19,    20,    21,    22,    23,    24,    25,
      16,     7,    -1,    19,    20,    21,    22,    23,    24,    25,
      -1,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
       7,    -1,    -1,    -1,    -1,    -1,    13,     7,    -1,    -1,
      -1,    11,    19,    20,    21,    22,    23,    24,    25,    19,
      20,    21,    22,    23,    24,    25,     7,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,     7,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    17,     7,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     8,    60,    61,    62,    64,    16,     0,    61,
       6,    63,    65,    66,    10,    12,    16,    17,    14,    69,
      11,    64,    67,    68,     3,     6,    63,    64,    73,    74,
      65,    11,    17,    13,    65,    75,    76,     3,     4,     5,
       6,    10,    21,    27,    29,    30,    31,    32,    34,    35,
      36,    37,    65,    69,    70,    71,    77,    73,    67,    19,
      16,    17,    10,    12,    77,    77,    77,    77,    10,    10,
      10,    65,    65,    36,    37,    38,    39,    40,    41,    15,
      70,     7,    16,    19,    20,    21,    22,    23,    24,    25,
      77,    75,    11,    77,    78,     3,    77,    11,    16,    77,
      77,    64,    65,    72,    79,    80,    81,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    17,
      11,    13,    11,    11,    76,    19,    11,    16,    17,    78,
      71,    71,    77,    71,    65,    82,    81,    33,     7,    16,
      71,    77,    77,    83,    84,    17,    84
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
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
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;


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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 51 "parser.y"
    {/*display($1, 0);*/udisplay((yyvsp[(1) - (1)].ptr), 0);semantic_Analysis0((yyvsp[(1) - (1)].ptr));}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 53 "parser.y"
    {(yyval.ptr)=NULL;}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 54 "parser.y"
    {(yyval.ptr)=mknode(EXT_DEF_LIST,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr),NULL,yylineno);}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 56 "parser.y"
    {(yyval.ptr)=mknode(EXT_DEF_VAR,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr),NULL,yylineno);}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 57 "parser.y"
    {(yyval.ptr)=mknode(EXT_DEF_FUNC,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr),(yyvsp[(3) - (3)].ptr),yylineno);}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 58 "parser.y"
    {(yyval.ptr)=NULL; }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 61 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 62 "parser.y"
    {(yyval.ptr)=mknode(EXT_VARDEC_LIST,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 66 "parser.y"
    {(yyval.ptr)=mknode(TYPE,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));(yyval.ptr)->type=!strcmp((yyvsp[(1) - (1)].type_id),"int")?INT:(!strcmp((yyvsp[(1) - (1)].type_id),"float")?FLOAT:CHAR);}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 72 "parser.y"
    {(yyval.ptr)=mknode(ARRAY,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));(yyval.ptr)->size=(yyvsp[(3) - (4)].type_int);}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 73 "parser.y"
    {(yyval.ptr)=mknode(ID,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 75 "parser.y"
    {(yyval.ptr)=mknode(FUNC_DEC,(yyvsp[(3) - (4)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 76 "parser.y"
    {(yyval.ptr)=mknode(FUNC_DEC,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 78 "parser.y"
    {(yyval.ptr)=mknode(FUNC_PARAM_LIST,(yyvsp[(1) - (1)].ptr),NULL,NULL,yylineno);}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 79 "parser.y"
    {(yyval.ptr)=mknode(FUNC_PARAM_LIST,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 81 "parser.y"
    {(yyval.ptr)=mknode(FUNC_PARAM_DEC,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr),NULL,yylineno);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 85 "parser.y"
    {(yyval.ptr)=mknode(COMP_STM,(yyvsp[(2) - (4)].ptr),(yyvsp[(3) - (4)].ptr),NULL,yylineno);}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 87 "parser.y"
    {(yyval.ptr)=NULL; }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 88 "parser.y"
    {(yyval.ptr)=mknode(COMPSTM_LIST,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr),NULL,yylineno);}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 90 "parser.y"
    {(yyval.ptr)=mknode(COMPSTM_EXP,(yyvsp[(1) - (2)].ptr),NULL,NULL,yylineno);}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 91 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 92 "parser.y"
    {(yyval.ptr)=mknode(RETURN,(yyvsp[(2) - (3)].ptr),NULL,NULL,yylineno);}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 93 "parser.y"
    {(yyval.ptr)=mknode(IF_THEN,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr),NULL,yylineno);}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 94 "parser.y"
    {(yyval.ptr)=mknode(IF_THEN_ELSE,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr),yylineno);}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 95 "parser.y"
    {(yyval.ptr)=mknode(WHILE,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr),NULL,yylineno);}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 96 "parser.y"
    {(yyval.ptr)=mknode(FOR,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr),NULL,yylineno);}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 99 "parser.y"
    {(yyval.ptr)=mknode(FOR_CONDITION,(yyvsp[(1) - (5)].ptr),(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr),yylineno);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 103 "parser.y"
    {(yyval.ptr)=NULL; }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 104 "parser.y"
    {(yyval.ptr)=mknode(DEF_LIST,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr),NULL,yylineno);}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 106 "parser.y"
    {(yyval.ptr)=mknode(VAR_DEF,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr),NULL,yylineno);}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 108 "parser.y"
    {(yyval.ptr)=mknode(VARDEC_LIST,(yyvsp[(1) - (1)].ptr),NULL,NULL,yylineno);}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 109 "parser.y"
    {(yyval.ptr)=mknode(VARDEC_LIST,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 111 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 112 "parser.y"
    {(yyval.ptr)=mknode(ASSIGNOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 116 "parser.y"
    {(yyval.ptr)=mknode(ASSIGNOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 117 "parser.y"
    {(yyval.ptr)=mknode(AND,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"AND");}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 118 "parser.y"
    {(yyval.ptr)=mknode(OR,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"OR");}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 119 "parser.y"
    {(yyval.ptr)=mknode(RELOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (3)].type_id));}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 120 "parser.y"
    {(yyval.ptr)=mknode(PLUS,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"PLUS");}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 121 "parser.y"
    {(yyval.ptr)=mknode(MINUS,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"MINUS");}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 122 "parser.y"
    {(yyval.ptr)=mknode(STAR,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"STAR");}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 123 "parser.y"
    {(yyval.ptr)=mknode(DIV,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"DIV");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 124 "parser.y"
    {(yyval.ptr)=(yyvsp[(2) - (3)].ptr);}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 125 "parser.y"
    {(yyval.ptr)=mknode(UMINUS,(yyvsp[(2) - (2)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"UMINUS");}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 126 "parser.y"
    {(yyval.ptr)=mknode(NOT,(yyvsp[(2) - (2)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"NOT");}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 127 "parser.y"
    {(yyval.ptr)=mknode(SELFADD,(yyvsp[(1) - (2)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"SELFADD");}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 128 "parser.y"
    {(yyval.ptr)=mknode(SELFADD,NULL,(yyvsp[(2) - (2)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"SELFADD");}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 129 "parser.y"
    {(yyval.ptr)=mknode(SELFDEC,(yyvsp[(1) - (2)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,"SELFDEC");}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 130 "parser.y"
    {(yyval.ptr)=mknode(SELFDEC,NULL,(yyvsp[(2) - (2)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"SELFDEC");}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 131 "parser.y"
    {(yyval.ptr)=mknode(ADD_ASSIGNOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ADD_ASSIGNOP");}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 132 "parser.y"
    {(yyval.ptr)=mknode(MINUS_ASSIGNOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"MINUS_ASSIGNOP");}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 133 "parser.y"
    {(yyval.ptr)=mknode(STAR_ASSIGNOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"STAR_ASSIGNOP");}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 134 "parser.y"
    {(yyval.ptr)=mknode(DIV_ASSIGNOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"DIV_ASSIGNOP");}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 135 "parser.y"
    {(yyval.ptr)=mknode(FUNC_CALL,(yyvsp[(3) - (4)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 136 "parser.y"
    {(yyval.ptr)=mknode(FUNC_CALL,NULL,NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 137 "parser.y"
    {(yyval.ptr)=mknode(ARRAY_CALL,(yyvsp[(3) - (4)].ptr),NULL,NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 138 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 139 "parser.y"
    {(yyval.ptr)=mknode(INT,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_int=(yyvsp[(1) - (1)].type_int);(yyval.ptr)->type=INT;}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 140 "parser.y"
    {(yyval.ptr)=mknode(FLOAT,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_float=(yyvsp[(1) - (1)].type_float);(yyval.ptr)->type=FLOAT;}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 141 "parser.y"
    {(yyval.ptr)=mknode(CHAR,NULL,NULL,NULL,yylineno);(yyval.ptr)->type_char=(yyvsp[(1) - (1)].type_char);(yyval.ptr)->type=CHAR;}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 142 "parser.y"
    {(yyval.ptr)=mknode(_BREAK,NULL,NULL,NULL,yylineno);}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 143 "parser.y"
    {(yyval.ptr)=mknode(_CONTINUE,NULL,NULL,NULL,yylineno);}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 145 "parser.y"
    {(yyval.ptr)=mknode(ARGS,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 146 "parser.y"
    {(yyval.ptr)=mknode(ARGS,(yyvsp[(1) - (1)].ptr),NULL,NULL,yylineno);}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 148 "parser.y"
    {(yyval.ptr)=NULL; }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 149 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 152 "parser.y"
    {(yyval.ptr)=mknode(VAR_DEF,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr),NULL,yylineno);}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 153 "parser.y"
    {(yyval.ptr)=mknode(ASSIGNOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,"ASSIGNOP");}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 155 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 156 "parser.y"
    {(yyval.ptr)=mknode(EXP_FOR1_LIST,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 158 "parser.y"
    {(yyval.ptr)=NULL; }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 159 "parser.y"
    {(yyval.ptr)=mknode(RELOP,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (3)].type_id));}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 161 "parser.y"
    {(yyval.ptr)=NULL;}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 162 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 164 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 165 "parser.y"
    {(yyval.ptr)=mknode(EXP_FOR3_LIST,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr),NULL,yylineno);}
    break;


/* Line 1792 of yacc.c  */
#line 2155 "parser.tab.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
		      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


/* Line 2055 of yacc.c  */
#line 168 "parser.y"

#include<stdarg.h>
int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return 0;
	yylineno=1;
	yyparse();
	return 0;
	}

void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}	

