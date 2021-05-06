/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "miniC_B735432.y" /* yacc.c:339  */


	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	int yylex(void);
	void yyerror(char *);
	char tokens[1000];
	extern FILE *yyin;
	extern FILE *yyout;

#line 78 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING_LITERAL = 258,
    IDENTIFIER = 259,
    CONSTANT = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    INLINE = 289,
    RESTRICT = 290,
    CHAR = 291,
    SHORT = 292,
    INT = 293,
    LONG = 294,
    SIGNED = 295,
    UNSIGNED = 296,
    FLOAT = 297,
    DOUBLE = 298,
    CONST = 299,
    VOLATILE = 300,
    VOID = 301,
    STRUCT = 302,
    UNION = 303,
    ENUM = 304,
    ELLIPSIS = 305,
    CASE = 306,
    DEFAULT = 307,
    IF = 308,
    ELSE = 309,
    SWITCH = 310,
    WHILE = 311,
    DO = 312,
    FOR = 313,
    GOTO = 314,
    CONTINUE = 315,
    BREAK = 316,
    RETURN = 317
  };
#endif
/* Tokens.  */
#define STRING_LITERAL 258
#define IDENTIFIER 259
#define CONSTANT 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define INLINE 289
#define RESTRICT 290
#define CHAR 291
#define SHORT 292
#define INT 293
#define LONG 294
#define SIGNED 295
#define UNSIGNED 296
#define FLOAT 297
#define DOUBLE 298
#define CONST 299
#define VOLATILE 300
#define VOID 301
#define STRUCT 302
#define UNION 303
#define ENUM 304
#define ELLIPSIS 305
#define CASE 306
#define DEFAULT 307
#define IF 308
#define ELSE 309
#define SWITCH 310
#define WHILE 311
#define DO 312
#define FOR 313
#define GOTO 314
#define CONTINUE 315
#define BREAK 316
#define RETURN 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "miniC_B735432.y" /* yacc.c:355  */

	char *sval;

#line 246 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 263 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1233

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  168
/* YYNRULES -- Number of rules.  */
#define YYNRULES  332
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  503

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,     2,     2,     2,    78,    71,     2,
      63,    64,    72,    73,    70,    74,    67,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    86,
      79,    85,    80,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,    82,    69,    75,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    36,    35,    41,    42,
      43,    42,    45,    45,    47,    48,    47,    50,    50,    52,
      52,    54,    55,    56,    57,    62,    63,    63,    68,    69,
      69,    71,    71,    73,    74,    75,    79,    82,    83,    84,
      85,    86,    87,    91,    92,    96,    97,    97,    99,    99,
     101,   101,   106,   107,   107,   110,   109,   115,   116,   116,
     118,   118,   123,   124,   124,   126,   126,   128,   128,   130,
     130,   135,   136,   136,   138,   138,   143,   144,   144,   149,
     150,   150,   155,   156,   156,   161,   162,   162,   167,   168,
     168,   173,   174,   178,   179,   180,   179,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   199,   200,
     200,   205,   209,   210,   214,   214,   217,   221,   222,   222,
     224,   225,   225,   227,   228,   228,   234,   235,   235,   240,
     241,   242,   241,   247,   248,   249,   250,   251,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     270,   271,   272,   276,   277,   281,   282,   286,   290,   291,
     292,   293,   297,   298,   302,   303,   304,   308,   309,   310,
     311,   312,   316,   317,   321,   322,   326,   327,   328,   332,
     333,   337,   338,   339,   340,   341,   341,   343,   344,   345,
     345,   346,   346,   347,   348,   349,   348,   351,   352,   351,
     354,   354,   359,   361,   363,   363,   367,   368,   369,   370,
     373,   376,   377,   382,   383,   387,   388,   388,   393,   395,
     396,   400,   401,   401,   406,   407,   407,   412,   413,   414,
     418,   420,   422,   422,   423,   424,   424,   426,   427,   428,
     428,   429,   429,   430,   430,   431,   432,   431,   437,   439,
     442,   443,   443,   444,   444,   444,   448,   452,   453,   454,
     455,   459,   463,   464,   468,   469,   473,   474,   475,   476,
     477,   478,   482,   483,   484,   488,   488,   490,   491,   490,
     496,   497,   501,   502,   506,   507,   507,   513,   512,   515,
     516,   520,   524,   528,   531,   532,   533,   534,   531,   536,
     538,   539,   540,   541,   536,   543,   544,   545,   546,   550,
     553,   555,   557,   559,   561,   564,   565,   565,   567,   567,
     569,   569,   571,   572,   571,   577,   578,   583,   584,   588,
     589,   594,   595
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING_LITERAL", "IDENTIFIER",
  "CONSTANT", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE",
  "RESTRICT", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['",
  "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'", "'~'",
  "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='",
  "';'", "$accept", "primary_expression", "$@1", "$@2",
  "postfix_expression", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9",
  "argument_expression_list", "$@10", "unary_expression", "$@11", "$@12",
  "subroutine8", "unary_operator", "cast_expression",
  "multiplicative_expression", "$@13", "$@14", "$@15",
  "additive_expression", "$@16", "$@17", "shift_expression", "$@18",
  "$@19", "relational_expression", "$@20", "$@21", "$@22", "$@23",
  "equality_expression", "$@24", "$@25", "and_expression", "$@26",
  "exclusive_or_expression", "$@27", "inclusive_or_expression", "$@28",
  "logical_and_expression", "$@29", "logical_or_expression", "$@30",
  "conditional_expression", "assignment_expression", "$@31", "$@32",
  "assignment_operator", "expression", "$@33", "constant_expression",
  "declaration", "declarationsubroutine1", "$@34",
  "declarationsubroutine2", "declaration_specifiers", "$@35", "$@36",
  "$@37", "init_declarator_list", "$@38", "init_declarator", "$@39",
  "$@40", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "$@41", "$@42",
  "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "subroutine4",
  "subroutine5", "subroutine6", "$@49", "pointer", "subroutine7",
  "type_qualifier_list", "parameter_type_list", "parameter_list", "$@50",
  "parameter_declaration", "identifier_list", "$@51", "type_name", "$@52",
  "abstract_declarator", "direct_abstract_declarator", "$@53", "$@54",
  "$@55", "$@56", "$@57", "$@58", "$@59", "subroutine2", "subroutine3",
  "initializer", "$@60", "$@61", "$@62", "subroutine1", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "$@63", "$@64", "$@65",
  "block_item_list", "block_item", "expression_statement", "$@66",
  "selection_statement", "$@67", "ifsubroutine", "ifsubroutine2",
  "ifsubroutine3", "iteration_statement", "$@68", "$@69", "$@70", "$@71",
  "$@72", "$@73", "$@74", "$@75", "$@76", "forsubroutine",
  "forsubroutine2", "forsubroutine3", "forsubroutine4", "forsubroutine5",
  "forsubroutine6", "jump_statement", "$@77", "$@78", "$@79", "$@80",
  "$@81", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    40,    41,    91,    93,    46,   123,   125,
      44,    38,    42,    43,    45,   126,    33,    47,    37,    60,
      62,    94,   124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -309

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-309)))

#define YYTABLE_NINF -321

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1162,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,    42,  -309,    25,    19,    37,  -309,    46,  -309,    67,
     998,  -309,  -309,   -52,    35,  -309,    77,  -309,  -309,   -18,
    -309,   940,     1,    30,  1162,  1162,    -3,  1184,  1162,  -309,
    -309,    35,    44,   163,  -309,    58,   124,  -309,  -309,  -309,
    -309,    72,  -309,    25,    71,  -309,  1128,    15,   121,     1,
    -309,  -309,  1184,  1184,  1058,  -309,    70,  1184,  -309,   174,
     822,  -309,    23,  -309,  -309,  -309,   124,    77,  -309,    74,
     435,   109,  -309,  -309,  -309,  1162,   132,   170,   695,  1093,
    -309,  -309,  -309,   822,    76,  -309,   152,  -309,  -309,    29,
    -309,  -309,  -309,  -309,  -309,  1184,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,   172,  -309,   232,   822,  -309,   150,   173,
     240,    91,   246,   177,   171,   159,   242,     4,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,   178,   822,   183,  -309,
     206,  -309,  -309,  -309,   268,  -309,  -309,   192,  -309,   299,
    -309,  -309,   210,  -309,  -309,  -309,  -309,   361,  -309,  -309,
    -309,  -309,  -309,   378,   113,  -309,   214,  -309,  -309,   217,
    -309,   139,  -309,   226,  -309,   139,  -309,  -309,    70,  -309,
     822,  -309,   829,   829,   822,   230,   238,  -309,  -309,  -309,
     239,  -309,  -309,   850,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,   822,   543,   221,   543,   245,   822,   247,
     543,   248,   223,   241,   243,   244,   822,   934,  -309,   249,
     263,  -309,  -309,  -309,   266,   902,  -309,    55,  -309,   153,
     251,   273,   262,  -309,   274,   702,  -309,   275,   604,  -309,
    -309,  1184,  -309,  -309,   210,    27,   740,   336,   278,   822,
     822,   342,  1184,  -309,   822,   822,   822,   822,   822,   822,
     822,   822,   822,   822,   822,   822,   822,   822,   822,   822,
     822,   822,    51,  -309,   543,  -309,   822,   -46,  -309,   291,
     496,  -309,  -309,  -309,  -309,   210,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,   822,  -309,
    -309,   724,  -309,   284,   285,   153,   287,   288,   514,  -309,
    -309,  1162,   348,  -309,   289,  -309,  -309,   822,  -309,   290,
     292,   295,   296,  1020,   160,  -309,   724,  -309,  -309,  -309,
     293,  -309,   210,  -309,   297,  -309,  -309,  -309,   150,   150,
     173,   173,   240,   240,   240,   240,    91,    91,   246,   177,
     171,   159,   242,   822,  -309,   210,   543,   822,  -309,  -309,
    -309,   276,   822,  -309,   822,   350,  -309,   185,   378,   -25,
    -309,  -309,  -309,  -309,  -309,  1162,   776,  -309,   301,   302,
    -309,  -309,  -309,   305,  -309,  -309,   304,  -309,   195,  -309,
     309,   308,   304,  -309,   311,  -309,   210,   313,   570,   570,
    -309,  -309,   312,  -309,  -309,   618,  -309,  -309,  -309,  -309,
    -309,  -309,   314,   319,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,   649,   822,  -309,  -309,   543,   315,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,   378,   324,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,   822,   801,   815,  -309,  -309,  -309,
    -309,   323,   543,   210,  -309,   210,  -309,   210,  -309,  -309,
    -309,   347,   543,   351,   543,   362,   543,  -309,  -309,  -309,
    -309,  -309,  -309,   339,  -309,   543,  -309,   543,  -309,  -309,
    -309,  -309,  -309
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   149,   133,   134,   135,   136,   137,   177,   139,   140,
     141,   142,   145,   146,   143,   144,   176,   178,   138,   153,
     154,     0,   328,     0,   118,   121,   147,     0,   148,   124,
       0,   325,   327,   171,     0,   181,     0,   210,   114,     0,
     126,   129,   180,     0,     0,     0,   152,     0,     0,     1,
     326,     0,   174,     0,   172,     0,   206,   112,   115,   127,
     116,   277,   331,     0,     0,   330,     0,   194,     0,   179,
     119,   122,     0,   159,     0,   155,     0,   161,   125,     0,
      36,   167,     0,   182,   211,   208,   207,     0,   113,     0,
      36,   129,   131,   332,   329,     0,     0,     0,   203,     0,
     158,   151,   156,    36,     0,   162,   164,   160,   168,     0,
       4,     2,     3,    29,    31,     5,    37,    38,    39,    40,
      41,    42,     8,    28,    43,     0,    36,    45,    52,    57,
      62,    71,    76,    79,    82,    85,    88,    91,   111,   175,
     169,   173,   212,   209,   128,   276,     2,    36,     0,   291,
       0,   294,   299,   309,     0,   316,   318,   322,   284,    43,
      93,   108,   285,   282,   283,   266,   267,    36,   280,   268,
     269,   270,   271,    36,   220,   195,   213,   215,   221,   198,
     201,     0,   193,    38,   185,     0,   150,   165,     0,   157,
      36,   170,    36,    36,    36,   225,     0,    19,    21,    22,
      14,     9,    17,    36,    33,    46,    48,    50,    53,    55,
      58,    60,    67,    69,    63,    65,    72,    74,    77,    80,
      83,    86,    89,    36,    36,     0,    36,     0,    36,     0,
      36,     0,     0,     0,     0,     0,    36,     0,   109,     0,
       0,   281,   250,   132,     0,   249,   218,   227,   219,   228,
       0,     0,   216,   222,     0,    36,   191,     0,    36,   163,
     166,     5,    30,    32,     6,   249,    36,     0,     0,    36,
      36,     0,     5,    34,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,     0,   272,    36,   274,    36,     0,   295,     0,
      36,   315,   317,   319,   321,   323,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    97,    95,    36,   286,
     279,    36,   232,     0,     0,   229,   245,     0,    36,   196,
     214,     0,     0,   199,     0,   192,   186,    36,   184,    38,
       0,     0,     0,   249,   227,   226,    36,    44,    20,    13,
      15,    25,    10,    18,     0,    47,    49,    51,    54,    56,
      59,    61,    68,    70,    64,    66,    73,    75,    78,    81,
      84,    87,    90,    36,   273,   292,    36,    36,   300,   314,
     310,     0,    36,   110,    36,     0,   257,     0,    36,     0,
     262,   233,   231,   230,   243,     0,    36,   234,    38,     0,
     217,   223,   187,     0,   189,   204,     0,     7,     0,    26,
       0,     0,    35,    92,     0,   290,   296,     0,    36,    36,
     324,    96,     0,   265,   251,    36,   258,   261,   263,   244,
     246,   237,    38,     0,   239,   235,   188,   190,   183,   205,
      23,    36,    36,    16,    11,    36,     0,   301,   310,   310,
     264,   252,   253,   259,    36,     0,   241,   238,   240,   236,
      24,    27,   293,   297,    36,    36,    36,   254,   260,   247,
     242,   289,    36,   302,   313,   311,   313,   311,   255,   287,
     298,     0,    36,     0,    36,     0,    36,   303,   312,   313,
     312,   313,   288,     0,   307,    36,   305,    36,   304,   312,
     312,   308,   306
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,   -77,  -309,  -309,  -309,  -309,  -109,
       5,  -309,  -309,  -309,    10,  -309,  -309,    -7,  -309,  -309,
      12,  -309,  -309,  -309,  -309,   140,  -309,  -309,   143,  -309,
     156,  -309,   138,  -309,   151,  -309,  -309,  -309,   -78,   -97,
    -309,  -309,  -309,  -151,  -309,   -96,   -29,  -309,  -309,  -309,
       0,  -309,  -309,  -309,  -309,  -309,   368,  -309,  -309,  -309,
     -19,  -309,  -309,   376,   -36,   -42,  -309,   269,  -309,   405,
     -62,    78,    -1,   -30,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,   -50,  -309,   -37,   -91,
    -309,  -309,   127,  -309,  -309,  -205,  -309,  -159,  -236,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -168,  -309,
    -309,  -309,  -309,   114,  -278,  -309,    73,  -216,  -309,    -9,
    -309,  -309,  -309,  -309,   294,  -291,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,  -309,
    -309,  -309,  -309,  -148,    -8,  -308,  -301,  -309,  -309,  -309,
    -309,  -309,  -309,  -309,  -309,   429,  -309,  -309
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   122,   194,   342,   123,   270,   411,   268,   269,   410,
     271,   267,   350,   442,   159,   192,   193,   125,   126,   127,
     128,   274,   275,   276,   129,   277,   278,   130,   279,   280,
     131,   283,   284,   281,   282,   132,   285,   286,   133,   287,
     134,   288,   135,   289,   136,   290,   137,   291,   160,   161,
     237,   382,   317,   162,   318,   139,    22,    57,    58,    88,
      63,    44,    45,    48,    39,    87,    40,    64,   173,    24,
      25,    26,    27,    74,    75,    76,   104,   105,    28,    53,
      54,    29,    55,    42,   257,   437,   335,    95,   251,    96,
     254,    97,    68,   185,   438,   439,    43,    56,    86,   323,
     176,   331,   177,   179,   332,   196,   265,   324,   249,   391,
     459,   458,   470,   429,   395,   455,   327,   250,   386,   451,
     467,   478,   244,   387,   388,   389,   390,   164,   165,   166,
      89,    90,   240,   167,   168,   169,   239,   170,   486,   227,
     414,   471,   171,   229,   377,   446,   472,   230,   417,   464,
     481,   493,   231,   419,   483,   494,   482,   418,   172,   233,
     234,   235,   236,   381,    30,    31,    32,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   184,   138,   124,   175,   243,    85,   187,   293,   380,
     295,   325,    62,    69,   299,   248,    51,   204,   376,  -197,
     141,   222,    41,  -117,   238,   138,   124,    52,    73,    35,
      23,   100,    65,    52,    35,   107,   143,    93,   102,    52,
     384,  -120,   385,   264,    70,    71,    33,   141,    78,   124,
      46,   225,    59,    73,    73,    73,   341,    94,    73,    35,
     427,   163,    91,   102,    67,    72,  -202,   354,    60,   138,
     124,  -123,   292,   195,    35,   106,   242,   297,   374,  -200,
      73,    35,  -117,  -117,  -117,   305,    91,   223,    36,  -117,
     343,  -117,   140,    36,   260,   174,    73,    37,   191,    37,
    -120,  -120,  -120,   212,   213,  -117,   345,  -120,   325,  -120,
      34,    38,   138,   124,    47,   262,   263,    35,   245,   352,
    -249,   238,    83,  -120,   247,    77,   273,   448,   449,    80,
    -123,  -123,  -123,    36,    84,   373,   178,  -123,   163,  -123,
      36,  -275,    37,   145,   255,   375,   188,   454,   258,    37,
      77,    77,    77,  -123,   103,    77,    92,   347,   334,     7,
     415,   340,   189,   454,   142,   355,   356,   357,    16,    17,
     214,   215,   351,   246,     7,   484,   245,    77,  -249,   197,
     198,   199,   496,    16,    17,    37,    98,   106,   495,   124,
     497,   501,   502,    77,  -130,   247,    37,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   344,   326,    69,  -248,   195,
     426,   383,   205,   343,   242,  -249,   416,   206,   207,   462,
     195,   399,    81,    82,   180,   200,   190,   201,   203,   202,
     403,   220,    73,   108,   109,   174,   208,   209,   218,   242,
     210,   211,   219,    73,   424,   425,   480,   453,   221,    84,
     216,   217,   224,    84,   440,   441,   488,   226,   490,   228,
     492,   379,   232,   453,   362,   363,   364,   365,  -320,   499,
     238,   500,   358,   359,   252,   421,   468,   253,   422,   360,
     361,   242,   256,   344,  -224,   413,   124,   366,   367,   433,
     465,   466,   266,   -12,   430,   294,   138,   124,   296,   301,
     298,   300,   330,   473,   475,   477,   328,   -94,   -94,   -94,
     -94,   -94,   -94,   -94,   -94,   -94,   -94,   302,   242,   303,
     304,   174,   320,   142,   321,   319,   142,   329,   333,    77,
     348,   336,   349,   174,   242,   461,   353,   378,   392,   393,
      77,   394,   401,   396,   423,   402,   404,   242,   405,   406,
     407,   412,   420,   409,   110,   146,   112,   434,   435,   113,
     114,   436,   346,   443,   444,   445,   447,   479,   450,   463,
     456,   110,   111,   112,   -94,   457,   113,   114,   469,     1,
       2,     3,     4,     5,     6,   174,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   487,   147,   148,   149,   489,   150,   151,   152,   153,
     154,   155,   156,   157,   115,   498,   491,   368,   371,    61,
    -278,   369,   116,   117,   118,   119,   120,   121,   110,   146,
     112,   115,   372,   113,   114,   370,  -256,   158,    99,   116,
     117,   118,   119,   120,   121,   144,    79,   259,   400,    50,
     408,   241,   428,     1,     2,     3,     4,     5,     6,   485,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,   147,   148,   149,     0,
     150,   151,   152,   153,   154,   155,   156,   157,   115,   110,
     111,   112,     0,    61,   113,   114,   116,   117,   118,   119,
     120,   121,     0,     0,     0,     0,     0,   110,   111,   112,
       0,   158,   113,   114,     1,     2,     3,     4,     5,     6,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   110,   146,   112,     0,
       0,   113,   114,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,   116,   117,   118,
     119,   120,   121,   110,   111,   112,     0,   115,   113,   114,
     397,     0,   158,     0,     0,   116,   398,   118,   119,   120,
     121,     0,     0,     0,   147,   148,   149,     0,   150,   151,
     152,   153,   154,   155,   156,   157,   115,   110,   111,   112,
       0,    61,   113,   114,   116,   117,   118,   119,   120,   121,
       0,   110,   111,   112,     0,     0,   113,   114,     0,   158,
       0,     0,     0,   115,     0,   337,     0,     0,     0,     7,
       0,   116,   117,   118,   119,   120,   121,     0,    16,    17,
       0,     0,   110,   111,   112,     0,   158,   113,   114,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
     338,     0,     0,     0,     0,   116,   339,   118,   119,   120,
     121,   115,     0,   384,     0,   385,  -256,   452,     0,   116,
     117,   118,   119,   120,   121,     0,     0,     0,   110,   111,
     112,   -36,     0,   113,   114,   110,   111,   112,     0,     0,
     113,   114,   115,     0,   384,     0,   385,  -256,   460,     0,
     116,   117,   118,   119,   120,   121,   181,   110,   111,   112,
       0,     0,   113,   114,     0,     0,     0,     7,     0,     0,
       0,     0,     0,   110,   111,   112,    16,    17,   113,   114,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,   182,     0,     0,     0,   115,   116,   183,   118,   119,
     120,   121,     0,   116,   117,   118,   119,   120,   121,   110,
     111,   112,     0,     0,   113,   114,     0,   115,     0,   384,
       0,   385,  -256,     0,     0,   116,   117,   118,   119,   120,
     121,     0,     0,   115,   110,   111,   112,     0,   346,   113,
     114,   116,   117,   118,   119,   120,   121,     0,   110,   111,
     112,     0,     0,   113,   114,   110,   111,   112,     0,     0,
     113,   114,   110,   111,   112,     0,     0,   113,   114,   115,
       0,     0,   431,     0,     0,     0,     0,   116,   432,   118,
     119,   120,   121,   110,   111,   112,     0,     0,   113,   114,
       0,     0,     0,     0,   115,   474,     0,     0,     0,     0,
       0,     0,   116,   117,   118,   119,   120,   121,   115,   476,
       0,     0,     0,     0,     0,   115,   116,   117,   118,   119,
     120,   121,   261,   116,   117,   118,   119,   120,   121,     0,
     116,   117,   118,   119,   120,   121,    35,     0,     0,     0,
       0,     0,     0,   272,     0,     0,     0,     0,     0,     0,
       0,   116,   117,   118,   119,   120,   121,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,     0,     0,     0,   245,   322,     0,     1,     2,
       3,     4,     5,     6,    37,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   316,
       0,     0,     0,     0,     0,  -130,     1,     2,     3,     4,
       5,     6,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     1,     2,
       3,     4,     5,     6,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,   322,     0,     1,     0,     0,     0,
       0,     0,    37,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,   101,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,   186,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     6,    61,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     1,     0,     0,     0,     0,     0,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    98,    80,    80,    95,   173,    56,   103,   224,   300,
     226,   247,    41,    43,   230,   174,    68,   126,    64,     4,
      82,    17,    23,     4,    70,   103,   103,     4,    47,     4,
      30,    73,    41,     4,     4,    77,    86,    66,    74,     4,
      65,     4,    67,   194,    44,    45,     4,   109,    48,   126,
       4,   147,    70,    72,    73,    74,   261,    66,    77,     4,
      85,    90,    63,    99,    63,    68,    65,   272,    86,   147,
     147,     4,   223,   115,     4,    76,   173,   228,   294,    64,
      99,     4,    63,    64,    65,   236,    87,    83,    63,    70,
      63,    72,    69,    63,   190,    95,   115,    72,    69,    72,
      63,    64,    65,    12,    13,    86,   265,    70,   344,    72,
      68,    86,   190,   190,    68,   192,   193,     4,    63,   270,
      65,    70,    64,    86,   174,    47,   203,   418,   419,    85,
      63,    64,    65,    63,    56,    84,     4,    70,   167,    72,
      63,    69,    72,    69,   181,   296,    70,   425,   185,    72,
      72,    73,    74,    86,    84,    77,    85,   266,   255,    35,
     376,   258,    86,   441,    86,   274,   275,   276,    44,    45,
      79,    80,   269,   174,    35,   476,    63,    99,    65,     7,
       8,     9,   490,    44,    45,    72,    65,   188,   489,   266,
     491,   499,   500,   115,    85,   245,    72,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   265,    63,   247,    65,   261,
     388,   318,    72,    63,   321,    65,   377,    77,    78,   445,
     272,   328,    69,    70,    64,    63,    84,    65,     6,    67,
     337,    82,   261,    69,    70,   245,    73,    74,    71,   346,
      10,    11,    81,   272,    69,    70,   472,   425,    16,   181,
      14,    15,    84,   185,    69,    70,   482,    84,   484,    63,
     486,   300,     4,   441,   281,   282,   283,   284,    86,   495,
      70,   497,   277,   278,    70,   382,   454,    70,   384,   279,
     280,   388,    66,   343,    64,   373,   373,   285,   286,   396,
     448,   449,    64,    64,   395,    84,   384,   384,    63,    86,
      63,    63,    50,   464,   465,   466,    65,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    86,   425,    86,
      86,   331,    69,   255,    68,    86,   258,    64,    64,   261,
       4,    66,    64,   343,   441,   442,     4,    56,    64,    64,
     272,    64,     4,    65,     4,    66,    66,   454,    66,    64,
      64,    64,    86,    70,     3,     4,     5,    66,    66,     8,
       9,    66,    68,    64,    66,    64,    63,    54,    66,    64,
      66,     3,     4,     5,    85,    66,     8,     9,    64,    28,
      29,    30,    31,    32,    33,   395,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    64,    51,    52,    53,    64,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    86,    64,   287,   290,    68,
      69,   288,    71,    72,    73,    74,    75,    76,     3,     4,
       5,    63,   291,     8,     9,   289,    68,    86,    72,    71,
      72,    73,    74,    75,    76,    87,    51,   188,   331,    30,
     346,   167,   389,    28,    29,    30,    31,    32,    33,   477,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     3,
       4,     5,    -1,    68,     8,     9,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    86,     8,     9,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     3,     4,     5,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,     3,     4,     5,    -1,    63,     8,     9,
      66,    -1,    86,    -1,    -1,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     3,     4,     5,
      -1,    68,     8,     9,    71,    72,    73,    74,    75,    76,
      -1,     3,     4,     5,    -1,    -1,     8,     9,    -1,    86,
      -1,    -1,    -1,    63,    -1,    31,    -1,    -1,    -1,    35,
      -1,    71,    72,    73,    74,    75,    76,    -1,    44,    45,
      -1,    -1,     3,     4,     5,    -1,    86,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    63,    -1,    65,    -1,    67,    68,    69,    -1,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,     3,     4,     5,    -1,    -1,
       8,     9,    63,    -1,    65,    -1,    67,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    31,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    44,    45,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    66,    -1,    -1,    -1,    63,    71,    72,    73,    74,
      75,    76,    -1,    71,    72,    73,    74,    75,    76,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    63,    -1,    65,
      -1,    67,    68,    -1,    -1,    71,    72,    73,    74,    75,
      76,    -1,    -1,    63,     3,     4,     5,    -1,    68,     8,
       9,    71,    72,    73,    74,    75,    76,    -1,     3,     4,
       5,    -1,    -1,     8,     9,     3,     4,     5,    -1,    -1,
       8,     9,     3,     4,     5,    -1,    -1,     8,     9,    63,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,     3,     4,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    76,    63,    64,
      -1,    -1,    -1,    -1,    -1,    63,    71,    72,    73,    74,
      75,    76,    63,    71,    72,    73,    74,    75,    76,    -1,
      71,    72,    73,    74,    75,    76,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    63,    64,    -1,    28,    29,
      30,    31,    32,    33,    72,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    85,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    72,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    69,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    69,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    68,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    31,    32,    33,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   143,   147,   156,   157,   158,   159,   165,   168,
     251,   252,   253,     4,    68,     4,    63,    72,    86,   151,
     153,   169,   170,   183,   148,   149,     4,    68,   150,     0,
     252,    68,     4,   166,   167,   169,   184,   144,   145,    70,
      86,    68,   143,   147,   154,   216,   254,    63,   179,   170,
     147,   147,    68,   157,   160,   161,   162,   168,   147,   166,
      85,    69,    70,    64,   168,   183,   185,   152,   146,   217,
     218,   169,    85,   143,   216,   174,   176,   178,    65,   160,
     162,    69,   161,    84,   163,   164,   169,   162,    69,    70,
       3,     4,     5,     8,     9,    63,    71,    72,    73,    74,
      75,    76,    88,    91,   101,   104,   105,   106,   107,   111,
     114,   117,   122,   125,   127,   129,   131,   133,   135,   142,
      69,   167,   168,   183,   153,    69,     4,    51,    52,    53,
      55,    56,    57,    58,    59,    60,    61,    62,    86,   101,
     135,   136,   140,   143,   214,   215,   216,   220,   221,   222,
     224,   229,   245,   155,   147,   186,   187,   189,     4,   190,
      64,    31,    66,    72,   136,   180,    69,   142,    70,    86,
      84,    69,   102,   103,    89,   162,   192,     7,     8,     9,
      63,    65,    67,     6,   106,    72,    77,    78,    73,    74,
      10,    11,    12,    13,    79,    80,    14,    15,    71,    81,
      82,    16,    17,    83,    84,   142,    84,   226,    63,   230,
     234,   239,     4,   246,   247,   248,   249,   137,    70,   223,
     219,   221,   136,   205,   209,    63,   169,   183,   194,   195,
     204,   175,    70,    70,   177,   185,    66,   171,   185,   164,
     142,    63,   101,   101,   140,   193,    64,    98,    94,    95,
      92,    97,    63,   101,   108,   109,   110,   112,   113,   115,
     116,   120,   121,   118,   119,   123,   124,   126,   128,   130,
     132,   134,   140,   214,    84,   214,    63,   140,    63,   214,
      63,    86,    86,    86,    86,   140,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    85,   139,   141,    86,
      69,    68,    64,   186,   194,   195,    63,   203,    65,    64,
      50,   188,   191,    64,   136,   173,    66,    31,    66,    72,
     136,   192,    90,    63,   183,   194,    68,   106,     4,    64,
      99,   136,   140,     4,   192,   106,   106,   106,   107,   107,
     111,   111,   114,   114,   114,   114,   117,   117,   122,   125,
     127,   129,   131,    84,   214,   140,    64,   231,    56,   143,
     222,   250,   138,   136,    65,    67,   205,   210,   211,   212,
     213,   196,    64,    64,    64,   201,    65,    66,    72,   136,
     189,     4,    66,   136,    66,    66,    64,    64,   210,    70,
      96,    93,    64,   135,   227,   214,   140,   235,   244,   240,
      86,   136,   142,     4,    69,    70,   205,    85,   213,   200,
     186,    66,    72,   136,    66,    66,    66,   172,   181,   182,
      69,    70,   100,    64,    66,    64,   232,    63,   222,   222,
      66,   206,    69,   205,   211,   202,    66,    66,   198,   197,
      69,   136,   214,    64,   236,   240,   240,   207,   205,    64,
     199,   228,   233,   140,    64,   140,    64,   140,   208,    54,
     214,   237,   243,   241,   243,   241,   225,    64,   214,    64,
     214,    64,   214,   238,   242,   243,   242,   243,    86,   214,
     214,   242,   242
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    89,    90,    88,    91,    92,
      93,    91,    94,    91,    95,    96,    91,    97,    91,    98,
      91,    91,    91,    91,    91,    99,   100,    99,   101,   102,
     101,   103,   101,   101,   101,   101,   104,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   108,   107,   109,   107,
     110,   107,   111,   112,   111,   113,   111,   114,   115,   114,
     116,   114,   117,   118,   117,   119,   117,   120,   117,   121,
     117,   122,   123,   122,   124,   122,   125,   126,   125,   127,
     128,   127,   129,   130,   129,   131,   132,   131,   133,   134,
     133,   135,   135,   136,   137,   138,   136,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   140,   141,
     140,   142,   143,   143,   145,   144,   146,   147,   148,   147,
     147,   149,   147,   147,   150,   147,   151,   152,   151,   153,
     154,   155,   153,   156,   156,   156,   156,   156,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   158,   158,   159,   159,   160,   160,   161,   162,   162,
     162,   162,   163,   163,   164,   164,   164,   165,   165,   165,
     165,   165,   166,   166,   167,   167,   168,   168,   168,   169,
     169,   170,   170,   170,   170,   171,   170,   170,   170,   172,
     170,   173,   170,   170,   174,   175,   170,   176,   177,   170,
     178,   170,   179,   180,   182,   181,   183,   183,   183,   183,
     184,   185,   185,   186,   186,   187,   188,   187,   189,   189,
     189,   190,   191,   190,   192,   193,   192,   194,   194,   194,
     195,   195,   196,   195,   195,   197,   195,   195,   195,   198,
     195,   199,   195,   200,   195,   201,   202,   195,   203,   204,
     205,   206,   205,   207,   208,   205,   209,   210,   210,   210,
     210,   211,   212,   212,   213,   213,   214,   214,   214,   214,
     214,   214,   215,   215,   215,   217,   216,   218,   219,   216,
     220,   220,   221,   221,   222,   223,   222,   225,   224,   224,
     224,   226,   227,   228,   230,   231,   232,   233,   229,   234,
     235,   236,   237,   238,   229,   229,   229,   229,   229,   239,
     240,   241,   242,   243,   244,   245,   246,   245,   247,   245,
     248,   245,   249,   250,   245,   251,   251,   252,   252,   253,
     253,   254,   254
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     0,     5,     1,     0,
       0,     6,     0,     4,     0,     0,     6,     0,     4,     0,
       4,     2,     2,     6,     7,     1,     0,     4,     1,     0,
       3,     0,     3,     2,     3,     5,     0,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     0,     4,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     0,     4,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     4,     1,
       0,     4,     1,     0,     4,     1,     0,     4,     1,     0,
       4,     1,     5,     1,     0,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     1,     3,     4,     0,     1,     0,     1,     0,     3,
       1,     0,     3,     1,     0,     3,     1,     0,     4,     1,
       0,     0,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     4,     5,     5,
       6,     2,     1,     3,     1,     3,     1,     1,     1,     2,
       1,     1,     3,     8,     6,     0,     6,     7,     8,     0,
       8,     0,     6,     4,     0,     0,     6,     0,     0,     6,
       0,     4,     0,     0,     0,     1,     2,     3,     3,     4,
       0,     1,     2,     1,     3,     1,     0,     4,     2,     2,
       1,     1,     0,     4,     1,     0,     3,     1,     1,     2,
       3,     3,     0,     3,     3,     0,     5,     4,     5,     0,
       5,     0,     6,     0,     4,     0,     0,     6,     0,     0,
       1,     0,     5,     0,     0,     7,     0,     1,     2,     3,
       4,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     0,     3,     0,     0,     5,
       1,     2,     1,     1,     1,     0,     3,     0,    11,     8,
       5,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,    12,    11,    13,    11,    13,     0,
       0,     0,     0,     0,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     0,     5,     1,     2,     1,     1,     4,
       3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 32 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s		shift IDENTIFIER:primary_expression\n",tokens);}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 33 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift CONSTANT:primary_expression\n",tokens);}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift STRING_LITERAL:primary_expression\n",tokens);}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term1 in primary_expression_expression\n",tokens);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 36 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce  expression:primary_expression\n",tokens);}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 37 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s                shift ):term3 in primary_expression_expression\n",tokens);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 41 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce primary_expression:postfix_expression\n",tokens);}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 42 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"[ ");fprintf(yyout,"%s                shift [:term2 in postfix_expression\n",tokens);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 43 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce expression:postfix_expression\n",tokens);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 44 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");fprintf(yyout,"%s                shift ]:term4 in postfix_expression\n",tokens);}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 45 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term2 in postfix_expression\n",tokens);}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 46 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s                shift ):term3 in postfix_expression\n",tokens);}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 47 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term2 in postfix_expression\n",tokens);}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 48 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce  argument_expression_list:postfix_expression\n",tokens);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 49 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s                shift (:term4 in postfix_expression\n",tokens);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 50 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,". ");fprintf(yyout,"%s                shift .:term2 in postfix_expression\n",tokens);}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 52 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift PTR_OP:postfix_expression\n",tokens);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 54 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift INC_OP:postfix_expression\n",tokens);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 55 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift DEC_OP:postfix_expression\n",tokens);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 62 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce assignment_expression:argument_expression_listn\n",tokens);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 63 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,", ");fprintf(yyout,"%s                shift ,:term2 in argument_expression_list\n",tokens);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 64 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce assignment_expression:argument_expression_listn\n",tokens);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 68 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce postfix_expression:unary_expression\n",tokens);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 69 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift INC_OP in unary_expression\n",tokens);}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 71 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift DEC_OP in unary_expression\n",tokens);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 79 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"sizeof ");fprintf(yyout,"%s		shift SIZEOF:unary_expression\n",tokens);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 82 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"& ");fprintf(yyout,"%s                shift &:term 1 in unary_operator\n",tokens);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 83 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"* ");fprintf(yyout,"%s                shift *:term 1 in unary_operator\n",tokens);}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 84 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"+ ");fprintf(yyout,"%s                shift +:term 1 in unary_operator\n",tokens);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 85 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"- ");fprintf(yyout,"%s                shift -:term 1 in unary_operator\n",tokens);}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 86 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"& ");fprintf(yyout,"%s                shift ~:term 1 in unary_operator\n",tokens);}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 87 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"! ");fprintf(yyout,"%s                shift !:term 1 in unary_operator\n",tokens);}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 91 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce unary_expression:cast_expression\n",tokens);}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 96 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce cast_expression:multiplicative_expression\n",tokens);}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 97 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"* ");fprintf(yyout,"%s             shift *:term2 in multiplicative_expression\n",tokens);}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 98 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce cast_expression:multiplicative_expression\n",tokens);}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 99 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"* ");fprintf(yyout,"%s             shift /:term2 in multiplicative_expression\n",tokens);}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 100 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce cast_expression:multiplicative_expression\n",tokens);}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 101 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"* ");fprintf(yyout,"%s             shift term2 in multiplicative_expression\n",tokens);}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 102 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce cast_expression:multiplicative_expression\n",tokens);}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 106 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce multiplicative_expression:additive_expression\n",tokens);}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 107 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"+ ");fprintf(yyout,"%s             shift +:term2 in additive_expression\n",tokens);}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 108 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce multiplicative_expression:additive_expression\n",tokens);}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 110 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"- ");fprintf(yyout,"%s             shift -:term2 in additive_expression\n",tokens);}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 111 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce multiplicative_expression:additive_expression\n",tokens);}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 115 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce additive_expression:shift_expression\n",tokens);}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 116 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s             shift LEFT_OP in relational_expression\n",tokens);}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 117 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce additive_expression:shift_expression\n",tokens);}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 118 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s             shift RIGHT_OP in relational_expression\n",tokens);}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 119 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce additive_expression:shift_expression\n",tokens);}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 123 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 124 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"< ");fprintf(yyout,"%s		shift <:term2 in relational_expression\n",tokens);}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 125 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 126 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"> ");fprintf(yyout,"%s             shift >:term2 in relational_expression\n",tokens);}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 127 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 128 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s             shift LE_OP in relational_expression\n",tokens);}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 129 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 130 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s             shift GE_OP in relational_expression\n",tokens);}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 131 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce shift_expression:relational_expression\n",tokens);}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 135 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce relational_expression:equality_expression\n",tokens);}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 136 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s             shift EQ_OP in equality_expression\n",tokens);}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 137 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce relational_expression:equality_expression\n",tokens);}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 138 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s             shift NE_OP in equality_expression\n",tokens);}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 139 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce relational_expression:equality_expression\n",tokens);}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 143 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce equality_expression:and_expression\n",tokens);}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 144 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"& ");fprintf(yyout,"%s             shift &:term2 in and_expression\n",tokens);}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 145 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce equality_expression:and_expression\n",tokens);}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 149 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce and_expression:exclusive_or_expression\n",tokens);}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 150 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"^ ");fprintf(yyout,"%s             shift ^:term2 in exclusive_or_expression\n",tokens);}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 151 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce and_expression:exclusive_or_expression\n",tokens);}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 155 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce exclusive_or_expression:inclusive_or_expression\n",tokens);}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 156 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"| ");fprintf(yyout,"%s             shift |:term2 in inclusive_or_expression\n",tokens);}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 157 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce exclusive_or_expression:inclusive_or_expression\n",tokens);}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 161 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce inclusive_or_expression:logical_and_expression\n",tokens);}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 162 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s             shift AND_OP in logical_and_expression\n",tokens);}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 163 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce inclusive_or_expression:logical_and_expression\n",tokens);}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 167 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce logical_and_expression:logical_or_expression\n",tokens);}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 168 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s             shift OR_OP in logical_or_expression\n",tokens);}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 169 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce logical_and_expression:logical_or_expression\n",tokens);}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 173 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce logical_or_expression:conditional_expression\n",tokens);}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 178 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce conditional_expression:assignment_expression\n",tokens);}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 179 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce unary_expression:assignment_expression\n",tokens);}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 180 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce assignment_operator:assignment_expression\n",tokens);}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 185 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"= ");fprintf(yyout,"%s                =:term 1 in assignment_operator\n",tokens);}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 186 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                MUL_ASSIGN in assignment_operator\n",tokens);}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 187 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                DIV_ASSIGN in assignment_operator\n",tokens);}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 188 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                MOD_ASSIGN in assignment_operator\n",tokens);}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 189 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                ADD_ASSIGN in assignment_operator\n",tokens);}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 190 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                SUB_ASSIGN in assignment_operator\n",tokens);}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 191 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                LEFT_ASSIGN in assignment_operator\n",tokens);}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 192 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                RIGHT_ASSIGN in assignment_operator\n",tokens);}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 193 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                AND_ASSIGN in assignment_operator\n",tokens);}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 194 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                XOR_ASSIGN in assignment_operator\n",tokens);}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 195 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                OR_ASSIGN in assignment_operator\n",tokens);}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 199 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce assignment_expression:expression\n",tokens);}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 200 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,", ");fprintf(yyout,"%s                ,:term 2 in expression\n",tokens);}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 201 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce assignment_expression:expression\n",tokens);}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 205 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce conditional_expression:constant_expression\n",tokens);}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 214 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declaration_specifiers:declaration\n",tokens);}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 215 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"; ");fprintf(yyout,"%s                ;:term2 in declaration\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 217 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce init_declarator_list:declaration\n",tokens);
	strcat(tokens,"; ");fprintf(yyout,"%s                ;:term3 in declaration\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 221 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce storage_class_specifier:declaration_specifiers\n",tokens);}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 222 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce storage_class_specifier:declaration_specifiers\n",tokens);}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 223 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declaration_specifiers:declaration_specifiers\n",tokens);}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 224 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce type_specifier:declaration_specifiers\n",tokens);}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 225 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce type_specifier:declaration_specifiers\n",tokens);}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 226 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declaration_specifiers:declaration_specifiers\n",tokens);}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 227 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce type_qualifier:declaration_specifiers\n",tokens);}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 228 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce type_qualifier:declaration_specifiers\n",tokens);}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 229 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declaration_specifiers:declaration_specifiers\n",tokens);}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 234 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce init_declarator:init_declarator_list\n",tokens);}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 235 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,", ");fprintf(yyout,"%s		,:term2 in init_declarator_list\n",tokens);}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 236 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce init_declarator:init_declarator_list\n",tokens);}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 240 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declarator:init_declarator\n",tokens);}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 241 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declarator:init_declarator\n",tokens);}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 242 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"= ");fprintf(yyout,"%s         =:term2 in init_declarator_list\n",tokens);}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 243 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce initializer:init_declarator\n",tokens);}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 255 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift VOID:type_specifier\n",tokens);}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 256 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift CHAR:type_specifier\n",tokens);}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 257 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift SHORT:type_specifier\n",tokens);}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 258 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift INT:type_specifier\n",tokens);}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 259 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift LONG:type_specifier\n",tokens);}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 260 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift FLOAT:type_specifier\n",tokens);}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 261 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s               shift DOUBLE:type_specifier\n",tokens);}
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 262 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s               shift SIGNED:type_specifier\n",tokens);}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 263 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s               shift UNSIGNED:type_specifier\n",tokens);}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 266 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift TYPE_NAME:type_specifier\n",tokens);}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 326 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                CONST:type_qualifier\n",tokens);}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 332 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce direct_declarator:declarator\n",tokens);}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 333 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce direct_declarator:declarator\n",tokens);}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 337 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift IDENTIFIER:direct_declarator\n",tokens);}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 340 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term4 in direct_declarator\n",tokens);}
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 341 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce assignment_expression:direct_declarator\n",tokens);}
#line 2710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 342 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");fprintf(yyout,"%s         shift [:term2 in direct_declarator\n",tokens);}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 345 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term4 in direct_declarator\n",tokens);}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 345 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");fprintf(yyout,",%s         shift ]:term5 in direct_declarator\n",tokens);}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 346 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term3 in direct_declarator\n",tokens);}
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 346 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");printf("%s         shift ]:term4 in direct_declarator\n",tokens);}
#line 2740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 347 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term3 in direct_declarator\n",tokens);}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 348 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_declarator\n",tokens);}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 349 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce parameter_type_list:direct_declarator\n",tokens);}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 350 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s         shift ):term4 in direct_declarator\n",tokens);}
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 351 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_declarator\n",tokens);}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 352 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce identifier_list:direct_declarator\n",tokens);}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 353 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s         shift ):term4 in direct_declarator\n",tokens);}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 354 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_declarator\n",tokens);}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 355 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s         shift ):term3 in direct_declarator\n",tokens);}
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 359 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"[ ");fprintf(yyout,"%s         shift [:term2 in direct_declarator\n",tokens);}
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 361 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce type_qualifier_list:direct_declarator\n",tokens);}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 363 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s          reduce assignment_expression:direct_declarator\n",tokens);}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 364 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");fprintf(yyout,"%s         shift [:term5 in direct_declarator\n",tokens);}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 368 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce type_qualifier_list:pointer\n",tokens);}
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 373 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term1 in pointer\n",tokens);}
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 376 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce type_qualifier:type_qualifier_list\n",tokens);}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 377 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce type_qualifier:type_qualifier_list\n",tokens);}
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 382 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce parameter_list:parameter_type_list\n",tokens);}
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 387 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce  parameter_declaration:parameter_list\n",tokens);}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 388 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,", ");fprintf(yyout,"%s         shift ,:term2 in parameter_list\n",tokens);}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 389 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce  parameter_declaration:parameter_list\n",tokens);}
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 394 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declarator:parameter_declaration\n",tokens);}
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 395 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce abstract_declarator:parameter_declaration\n",tokens);}
#line 2878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 396 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declaration_specifiers:parameter_declaration\n",tokens);}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 400 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s		shift IDENTIFIER:identifier_list\n",tokens);}
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 401 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,", ");fprintf(yyout,"%s         shift ,:term2 in identifier_list\n",tokens);}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 406 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s          reduce specifier_qualifier_list:type_name\n",tokens);}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 407 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s          reduce specifier_qualifier_list:type_name\n",tokens);}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 408 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s          reduce abstract_declarator:type_name\n",tokens);}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 412 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce pointer:abstract_declarator\n",tokens);}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 413 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce direct_abstract_declarator:abstract_declarator\n",tokens);}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 419 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s         shift ):term3 in direct_abstract_declarator\n",tokens);}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 421 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s         shift ):term3 in direct_abstract_declarator\n",tokens);}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 422 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term1 in direct_abstract_declarator\n",tokens);}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 422 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s         shift ):term2 in direct_abstract_declarator\n",tokens);}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 423 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"[ ");fprintf(yyout,"%s         shift ]:term2 in direct_abstract_declarator\n",tokens);}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 424 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce assignment_expression:direct_abstract_declarator\n",tokens);}
#line 2962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 425 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"[ ");fprintf(yyout,"%s         shift ]:term3 in direct_abstract_declarator\n",tokens);}
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 426 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term3 in direct_abstract_declarator\n",tokens);}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 427 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce assignment_expression:direct_abstract_declarator\n",tokens);fprintf(yyout,"%s         shift ]:term4 in direct_abstract_declarator\n",tokens);}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 428 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term2 in direct_abstract_declarator\n",tokens);}
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 428 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term3 in direct_abstract_declarator\n",tokens);}
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 429 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"* ");fprintf(yyout,"%s         shift *:term3 in direct_abstract_declarator\n",tokens);}
#line 2998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 429 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"] ");fprintf(yyout,"%s         shift ]:term4 in direct_abstract_declarator\n",tokens);}
#line 3004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 430 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_abstract_declarator\n",tokens);}
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 430 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s         shift ):term3 in direct_abstract_declarator\n",tokens);}
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 431 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s         shift (:term2 in direct_abstract_declarator\n",tokens);}
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 432 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce  parameter_type_list:direct_abstract_declarator\n",tokens);}
#line 3028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 433 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s         shift ):term4 in direct_abstract_declarator\n",tokens);}
#line 3034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 437 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"[ ");fprintf(yyout,"%s         shift [:term1 in direct_abstract_declarator\n",tokens);}
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 439 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"[ ");fprintf(yyout,"%s         shift [:term2 in direct_abstract_declarator\n",tokens);}
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 442 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce  assignment_expression:initializer\n",tokens);}
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 443 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce initializer_list:initializer\n",tokens);}
#line 3058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 443 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"} ");fprintf(yyout,"%s              shift }:term3 in initializer\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 444 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce initializer_list:initializer\n",tokens);}
#line 3070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 444 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,", ");fprintf(yyout,"%s              shift ,:term3 in initializer\n",tokens);}
#line 3076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 444 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"} ");fprintf(yyout,"%s              shift }:term4 in initializer\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 448 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"{ ");fprintf(yyout,"%s		shift {:term1 in initializer\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 452 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce initializer:initializer_list\n",tokens);}
#line 3094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 473 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce labeled_statement:statement\n",tokens);}
#line 3100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 474 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce compound_statement:statement\n",tokens);}
#line 3106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 475 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce expression_statement:statement\n",tokens);}
#line 3112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 476 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce expression_statement:statement\n",tokens);}
#line 3118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 477 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce iteration_statement:statement\n",tokens);}
#line 3124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 478 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce jump_statement:statement\n",tokens);}
#line 3130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 488 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"{ ");fprintf(yyout,"%s		{:term1 in compound_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 489 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"} ");fprintf(yyout,"%s         }:term2 in compound_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 490 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"{ ");fprintf(yyout,"%s         {:term1 in compound_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 491 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce block_item_list:compound_statement\n",tokens);}
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 492 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"} ");fprintf(yyout,"%s         }:term2 in compound_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 496 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce block_item:block_item_list\n",tokens);}
#line 3166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 497 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce block_item:block_item_list\n",tokens);}
#line 3172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 501 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce block_item:block_item\n",tokens);}
#line 3178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 502 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce statement:block_item\n",tokens);}
#line 3184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 506 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"; ");fprintf(yyout,"%s         ;:term1 in expression_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 507 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce expression:expression_statement\n",tokens);}
#line 3196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 508 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"; ");fprintf(yyout,"%s         ;:term2 in expression_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 513 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"else ");fprintf(yyout,"%s         ELSE:selection_statement\n",tokens);}
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 514 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce statement:selection_statement\n",tokens);}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 520 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"if ");fprintf(yyout,"%s         IF:selection_statement\n",tokens);
	  strcat(tokens,"( ");fprintf(yyout,"%s         (:term2 in selection_statement\n",tokens);}
#line 3221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 524 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce expression:selection_statement\n",tokens);
	strcat(tokens,") ");fprintf(yyout,"%s         ):term4 in selection_statement\n",tokens);}
#line 3228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 528 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce statement:selection_statement\n",tokens);}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 531 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s		shift WHILE:iteration_statement\n",tokens);}
#line 3240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 532 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term2 in iteration_statement\n",tokens);}
#line 3246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 533 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce expression:iteration_statement\n",tokens);}
#line 3252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 534 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s                shift ):term4 in iteration_statement\n",tokens);}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 535 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s                reduce statement:iteration_statement\n",tokens);}
#line 3264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 536 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift DO:iteration_statement\n",tokens);}
#line 3270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 538 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"while ");fprintf(yyout,"%s                shift WHILE:iteration_statement\n",tokens);}
#line 3276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 539 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term4 in iteration_statement\n",tokens);}
#line 3282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 540 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce expression:iteration_statement\n",tokens);}
#line 3288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 541 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s                shift ):term6 in iteration_statement\n",tokens);}
#line 3294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 542 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"; ");fprintf(yyout,"%s                shift ;:term7 in iteration_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 550 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"for ");fprintf(yyout,"%s                shift FOR:iteration_statement\n",tokens);
	     strcat(tokens,"( ");fprintf(yyout,"%s                shift (:term2 in iteration_statement\n",tokens);}
#line 3307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 553 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce expression_statement:iteration_statement\n",tokens);}
#line 3313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 555 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce expression:iteration_statement\n",tokens);}
#line 3319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 557 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce statement:iteration_statement\n",tokens);}
#line 3325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 559 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,") ");fprintf(yyout,"%s                shift ):term in iteration_statement\n",tokens);}
#line 3331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 561 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declaration:iteration_statement\n",tokens);}
#line 3337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 565 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift CONTINUE:jump_statement\n",tokens);}
#line 3343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 566 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"; ");fprintf(yyout,"%s                shift ;:term2 in jump_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 567 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s                shift BREAK:jump_statement\n",tokens);}
#line 3355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 568 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"; ");fprintf(yyout,"%s                shift ;:term2 in jump_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 569 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s               shift RETURN in jump_statement\n",tokens);}
#line 3367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 321:
#line 570 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"; ");fprintf(yyout,"%s               shift ;:term2 in jump_statement\n",tokens);}
#line 3373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 322:
#line 571 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,(yyvsp[0].sval));strcat(tokens," ");fprintf(yyout,"%s               shift RETURN in jump_statement\n",tokens);}
#line 3379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 572 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce expression:jump_statement\n",tokens);}
#line 3385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 573 "miniC_B735432.y" /* yacc.c:1646  */
    {strcat(tokens,"; ");fprintf(yyout,"%s               shift ;:term2 in jump_statement\n",tokens);memset(tokens,0,sizeof(char)*1000);}
#line 3391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 577 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s		reduce external_declaration:translation_unit\n",tokens);}
#line 3397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 579 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce external_declaration:translation_unit\n",tokens);}
#line 3403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 327:
#line 583 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce function_definition:external_declaration\n",tokens);}
#line 3409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 328:
#line 584 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declaration:external_declaration\n",tokens);}
#line 3415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 329:
#line 588 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce compound_statementfunction_definition\n",tokens);}
#line 3421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 330:
#line 589 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce compound_statementfunction_definition\n",tokens);}
#line 3427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 594 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declaration:declaration_list\n",tokens);}
#line 3433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 595 "miniC_B735432.y" /* yacc.c:1646  */
    {fprintf(yyout,"%s             reduce declaration:declaration_list\n",tokens);}
#line 3439 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3443 "y.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 599 "miniC_B735432.y" /* yacc.c:1906  */

#include <stdio.h>

extern char yytext[];
extern int column;

void yyerror(char *s)
{
	fprintf(stderr,"%s \n",s);
}

int main(int argc,char *argv[]){

	yyin = fopen(argv[1],"r");
	yyout = fopen(strcat(argv[1],"_B735432.output"),"w");
	yyparse();
	return 0;
}
