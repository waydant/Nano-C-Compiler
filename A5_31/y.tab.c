/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "A5_31.y"

    #include "A5_31_translator.h"
    extern int yylex();
    extern int yylineno;
    void yyerror(string);
    void yyinfo(string);

#line 79 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 229 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHAR = 3,                       /* CHAR  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_FOR = 5,                        /* FOR  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_LSQBRACKET = 10,                /* LSQBRACKET  */
  YYSYMBOL_RSQBRACKET = 11,                /* RSQBRACKET  */
  YYSYMBOL_LBRACE = 12,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 13,                    /* RBRACE  */
  YYSYMBOL_LPARAN = 14,                    /* LPARAN  */
  YYSYMBOL_RPARAN = 15,                    /* RPARAN  */
  YYSYMBOL_ARROW = 16,                     /* ARROW  */
  YYSYMBOL_BIT_AND = 17,                   /* BIT_AND  */
  YYSYMBOL_PLUS = 18,                      /* PLUS  */
  YYSYMBOL_SUB = 19,                       /* SUB  */
  YYSYMBOL_MULT = 20,                      /* MULT  */
  YYSYMBOL_DIV = 21,                       /* DIV  */
  YYSYMBOL_MOD = 22,                       /* MOD  */
  YYSYMBOL_LOGICAL_NOT = 23,               /* LOGICAL_NOT  */
  YYSYMBOL_LOGICAL_AND = 24,               /* LOGICAL_AND  */
  YYSYMBOL_LOGICAL_OR = 25,                /* LOGICAL_OR  */
  YYSYMBOL_LESS = 26,                      /* LESS  */
  YYSYMBOL_GREATER = 27,                   /* GREATER  */
  YYSYMBOL_LESSEQ = 28,                    /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 29,                 /* GREATEREQ  */
  YYSYMBOL_EQUALS = 30,                    /* EQUALS  */
  YYSYMBOL_NOTEQ = 31,                     /* NOTEQ  */
  YYSYMBOL_QUES = 32,                      /* QUES  */
  YYSYMBOL_COLON = 33,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 34,                 /* SEMICOLON  */
  YYSYMBOL_ASSIGN = 35,                    /* ASSIGN  */
  YYSYMBOL_COMMA = 36,                     /* COMMA  */
  YYSYMBOL_ID = 37,                        /* ID  */
  YYSYMBOL_INT_CONST = 38,                 /* INT_CONST  */
  YYSYMBOL_CHAR_CONST = 39,                /* CHAR_CONST  */
  YYSYMBOL_STRING_CONST = 40,              /* STRING_CONST  */
  YYSYMBOL_THEN = 41,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_primary_expression = 43,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 44,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list_opt = 45, /* argument_expression_list_opt  */
  YYSYMBOL_argument_expression_list = 46,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 47,          /* unary_expression  */
  YYSYMBOL_unary_operator = 48,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 49, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 50,       /* additive_expression  */
  YYSYMBOL_relational_expression = 51,     /* relational_expression  */
  YYSYMBOL_equality_expression = 52,       /* equality_expression  */
  YYSYMBOL_M = 53,                         /* M  */
  YYSYMBOL_N = 54,                         /* N  */
  YYSYMBOL_logical_AND_expression = 55,    /* logical_AND_expression  */
  YYSYMBOL_logical_OR_expression = 56,     /* logical_OR_expression  */
  YYSYMBOL_conditional_expression = 57,    /* conditional_expression  */
  YYSYMBOL_assignment_expression = 58,     /* assignment_expression  */
  YYSYMBOL_expression = 59,                /* expression  */
  YYSYMBOL_declaration = 60,               /* declaration  */
  YYSYMBOL_init_declarator = 61,           /* init_declarator  */
  YYSYMBOL_type_specifier = 62,            /* type_specifier  */
  YYSYMBOL_declarator = 63,                /* declarator  */
  YYSYMBOL_change_scope_definition = 64,   /* change_scope_definition  */
  YYSYMBOL_change_scope_declaration = 65,  /* change_scope_declaration  */
  YYSYMBOL_AUG1 = 66,                      /* AUG1  */
  YYSYMBOL_direct_declarator = 67,         /* direct_declarator  */
  YYSYMBOL_pointer = 68,                   /* pointer  */
  YYSYMBOL_parameter_list = 69,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 70,     /* parameter_declaration  */
  YYSYMBOL_initialiser = 71,               /* initialiser  */
  YYSYMBOL_statement = 72,                 /* statement  */
  YYSYMBOL_change_block = 73,              /* change_block  */
  YYSYMBOL_compound_statement = 74,        /* compound_statement  */
  YYSYMBOL_block_item_list_opt = 75,       /* block_item_list_opt  */
  YYSYMBOL_block_item_list = 76,           /* block_item_list  */
  YYSYMBOL_block_item = 77,                /* block_item  */
  YYSYMBOL_expression_statement = 78,      /* expression_statement  */
  YYSYMBOL_expression_opt = 79,            /* expression_opt  */
  YYSYMBOL_selection_statement = 80,       /* selection_statement  */
  YYSYMBOL_iteration_statement = 81,       /* iteration_statement  */
  YYSYMBOL_jump_statement = 82,            /* jump_statement  */
  YYSYMBOL_translation_unit = 83,          /* translation_unit  */
  YYSYMBOL_temp_declaration = 84,          /* temp_declaration  */
  YYSYMBOL_function_definition = 85        /* function_definition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   175,   175,   183,   193,   201,   211,   219,   231,   251,
     263,   272,   278,   286,   294,   305,   310,   359,   364,   369,
     374,   379,   395,   417,   440,   463,   493,   499,   510,   528,
     533,   547,   561,   575,   592,   597,   613,   642,   649,   688,
     693,   707,   712,   726,   748,   769,   775,   796,   806,   813,
     818,   831,   836,   841,   849,   870,   878,   890,   903,   915,
     926,   948,   969,   999,  1007,  1012,  1032,  1037,  1052,  1062,
    1067,  1073,  1078,  1083,  1097,  1108,  1117,  1123,  1130,  1135,
    1145,  1150,  1158,  1166,  1172,  1196,  1205,  1231,  1245,  1260,
    1264,  1271,  1275,  1282
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
  "\"end of file\"", "error", "\"invalid token\"", "CHAR", "ELSE", "FOR",
  "IF", "INT", "RETURN", "VOID", "LSQBRACKET", "RSQBRACKET", "LBRACE",
  "RBRACE", "LPARAN", "RPARAN", "ARROW", "BIT_AND", "PLUS", "SUB", "MULT",
  "DIV", "MOD", "LOGICAL_NOT", "LOGICAL_AND", "LOGICAL_OR", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "EQUALS", "NOTEQ", "QUES", "COLON",
  "SEMICOLON", "ASSIGN", "COMMA", "ID", "INT_CONST", "CHAR_CONST",
  "STRING_CONST", "THEN", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "M", "N",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "expression",
  "declaration", "init_declarator", "type_specifier", "declarator",
  "change_scope_definition", "change_scope_declaration", "AUG1",
  "direct_declarator", "pointer", "parameter_list",
  "parameter_declaration", "initialiser", "statement", "change_block",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "expression_opt",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "temp_declaration", "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,  -143,  -143,  -143,  -143,    15,   106,  -143,  -143,  -143,
      -4,   -15,    -3,     1,    34,    18,  -143,  -143,  -143,    23,
      45,  -143,    21,    34,    23,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,    40,    30,    23,   133,    50,
     119,    73,    48,   -14,  -143,  -143,  -143,    82,    64,    67,
    -143,    66,    23,    23,    46,    23,  -143,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,  -143,  -143,
      61,    84,    96,    23,  -143,  -143,  -143,    15,  -143,  -143,
     110,   118,  -143,  -143,    98,  -143,  -143,  -143,  -143,    15,
      -2,  -143,  -143,  -143,   123,   122,   100,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,   133,   133,    50,    50,    50,    50,
     119,   119,    23,    23,  -143,    23,    23,   108,  -143,   129,
    -143,   121,  -143,  -143,  -143,     5,  -143,  -143,    23,    73,
      48,    23,   109,  -143,  -143,    82,  -143,  -143,  -143,  -143,
    -143,   141,   144,   134,    23,  -143,  -143,  -143,   132,   157,
      23,  -143,  -143,  -143,    23,   164,  -143,  -143,   155,   157,
    -143,  -143,   157,  -143
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    52,    53,    51,    92,     0,     0,    89,    91,    63,
      59,     0,    49,     0,    55,     0,     1,    90,    48,     0,
       0,    57,     0,    54,     0,    17,    19,    20,    18,    21,
       2,     3,     4,     5,     7,    15,    22,     0,    26,    29,
      34,    39,    41,    43,    45,    68,    50,    77,     0,     0,
      47,     0,     0,    12,     0,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    37,
       0,     0,     0,    84,    74,    83,    80,     0,    81,    69,
       0,    37,    78,    70,     0,    71,    72,    73,    62,    67,
       0,    64,    60,     6,     0,     0,    11,    13,    10,    46,
      23,    24,    25,    22,    27,    28,    30,    31,    32,    33,
      35,    36,     0,     0,    37,    84,     0,     0,    57,    49,
      93,    84,    82,    66,    61,     0,     8,     9,     0,    40,
      42,     0,     0,    38,    88,    77,    79,    65,    14,    38,
      37,     0,     0,     0,    84,    37,    75,    37,     0,    84,
       0,    37,    38,    44,    84,    85,    38,    37,     0,    84,
      37,    86,    84,    87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,  -143,  -143,  -143,   -36,  -143,    47,    87,    51,
      60,   -65,   -86,    65,  -143,    29,   -17,   -19,    58,  -143,
       0,   -38,  -143,    55,  -143,   166,  -143,  -143,    57,  -143,
    -142,  -143,  -143,    49,  -143,    62,  -143,   -70,  -143,  -143,
    -143,  -143,   179,  -143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    34,    35,    95,    96,    36,    37,    38,    39,    40,
      41,   112,    70,    42,    43,    44,    50,    75,    76,    11,
      77,    12,    20,    48,    13,    14,    15,    90,    91,    46,
      78,   118,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     6,     7,     8
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    56,    45,   117,   113,    51,     5,   152,     1,   -56,
     -58,    69,     2,   124,     3,    21,   121,   161,   -38,    18,
     163,   100,   101,   102,   103,   103,   103,   103,   103,   103,
     103,   103,    19,    94,   125,     9,    97,    24,    99,   119,
      25,    26,    27,    28,    22,   132,    29,   141,    89,   131,
      52,   123,    10,   143,    53,    10,    54,    47,     4,    49,
      30,    31,    32,    33,     4,    55,   155,     1,    60,    61,
     158,     2,    68,     3,   148,   144,   103,   103,    92,    88,
     149,    93,   150,    98,   156,     1,   154,    71,    72,     2,
      73,     3,   159,   114,    74,   162,    24,   133,   115,    25,
      26,    27,    28,    66,    67,    29,    16,   104,   105,     1,
     116,   138,   139,     2,   103,     3,   -84,   110,   111,    30,
      31,    32,    33,   120,     1,    89,    71,    72,     2,    73,
       3,   -76,   122,    74,   126,    24,   128,   127,    25,    26,
      27,    28,   134,   140,    29,    62,    63,    64,    65,   106,
     107,   108,   109,    57,    58,    59,   145,   146,    30,    31,
      32,    33,    71,    72,    19,    73,   151,   147,   157,    74,
     160,    24,   129,   135,    25,    26,    27,    28,   130,   153,
      29,    23,   137,   136,   142,    17,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33
};

static const yytype_int16 yycheck[] =
{
       0,    37,    19,    73,    69,    24,     6,   149,     3,    12,
      14,    25,     7,    15,     9,    14,    81,   159,    32,    34,
     162,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    35,    52,    36,    20,    53,    14,    55,    77,
      17,    18,    19,    20,    10,   115,    23,   133,    48,   114,
      10,    89,    37,   139,    14,    37,    16,    12,     0,    38,
      37,    38,    39,    40,     6,    35,   152,     3,    18,    19,
     156,     7,    24,     9,   144,   140,   112,   113,    11,    15,
     145,    15,   147,    37,   154,     3,   151,     5,     6,     7,
       8,     9,   157,    32,    12,   160,    14,   116,    14,    17,
      18,    19,    20,    30,    31,    23,     0,    60,    61,     3,
      14,   128,   131,     7,   150,     9,    34,    66,    67,    37,
      38,    39,    40,    13,     3,   125,     5,     6,     7,     8,
       9,    13,    34,    12,    11,    14,    36,    15,    17,    18,
      19,    20,    34,    34,    23,    26,    27,    28,    29,    62,
      63,    64,    65,    20,    21,    22,    15,    13,    37,    38,
      39,    40,     5,     6,    35,     8,    34,    33,     4,    12,
      15,    14,   112,   118,    17,    18,    19,    20,   113,   150,
      23,    15,   125,   121,   135,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     7,     9,    60,    62,    83,    84,    85,    20,
      37,    61,    63,    66,    67,    68,     0,    84,    34,    35,
      64,    14,    10,    67,    14,    17,    18,    19,    20,    23,
      37,    38,    39,    40,    43,    44,    47,    48,    49,    50,
      51,    52,    55,    56,    57,    58,    71,    12,    65,    38,
      58,    59,    10,    14,    16,    35,    47,    20,    21,    22,
      18,    19,    26,    27,    28,    29,    30,    31,    24,    25,
      54,     5,     6,     8,    12,    59,    60,    62,    72,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    15,    62,
      69,    70,    11,    15,    59,    45,    46,    58,    37,    58,
      47,    47,    47,    47,    49,    49,    50,    50,    50,    50,
      51,    51,    53,    53,    32,    14,    14,    79,    73,    63,
      13,    53,    34,    63,    15,    36,    11,    15,    36,    52,
      55,    53,    79,    59,    34,    65,    77,    70,    58,    59,
      34,    54,    75,    54,    53,    15,    13,    33,    79,    53,
      53,    34,    72,    57,    53,    54,    79,     4,    54,    53,
      15,    72,    53,    72
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    43,    43,    43,    44,    44,    44,
      44,    45,    45,    46,    46,    47,    47,    48,    48,    48,
      48,    48,    49,    49,    49,    49,    50,    50,    50,    51,
      51,    51,    51,    51,    52,    52,    52,    53,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    59,    60,    61,
      61,    62,    62,    62,    63,    63,    64,    65,    66,    67,
      67,    67,    67,    68,    69,    69,    70,    70,    71,    72,
      72,    72,    72,    72,    73,    74,    75,    75,    76,    76,
      77,    77,    78,    79,    79,    80,    80,    81,    82,    83,
      83,    84,    84,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     1,     0,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     0,     0,     1,
       4,     1,     4,     1,     9,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     2,     1,     0,     0,     1,     1,
       4,     5,     4,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     1,     0,     1,     3,
       1,     1,     2,     1,     0,     8,    11,    13,     3,     1,
       2,     1,     1,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
    YYNOMEM;
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: ID  */
#line 176 "A5_31.y"
                        { 
                            yyinfo("primary_expression => ID");
                            (yyval.expression) = new Expression(); // create new non boolean expression and symbol is the ID
                            // expression->symbol simply points to the symbol corresponding to the ID, in the table
                            (yyval.expression)->symbol = (yyvsp[0].symbol);
                            (yyval.expression)->type = Expression::NONBOOLEAN; 
                        }
#line 1429 "y.tab.c"
    break;

  case 3: /* primary_expression: INT_CONST  */
#line 184 "A5_31.y"
                        {
                            yyinfo("primary_expression => INT_CONST"); 
                            (yyval.expression) = new Expression();
                            // a new tempvar is created & initialised with $1 value, and the symbol points to this
                            (yyval.expression)->symbol = gentemp(SymbolType::INT_T, toString((yyvsp[0].intVal)));
                            // and extra quad is entered which initialises the temp var = $1->intValue
                            // so wherever this int was used, now this temp var will be used in its place
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].intVal));
                        }
#line 1443 "y.tab.c"
    break;

  case 4: /* primary_expression: CHAR_CONST  */
#line 194 "A5_31.y"
                        {
                            yyinfo("primary_expression => CHAR_CONST"); 
                            // exactly similar to INT_COST
                            (yyval.expression) = new Expression();
                            (yyval.expression)->symbol = gentemp(SymbolType::CHAR_T, (yyvsp[0].charVal));
                            emit("=", (yyval.expression)->symbol->name, (yyvsp[0].charVal));
                        }
#line 1455 "y.tab.c"
    break;

  case 5: /* primary_expression: STRING_CONST  */
#line 202 "A5_31.y"
                        { 
                            yyinfo("primary_expression => STRING_CONST"); 
                            (yyval.expression) = new Expression();
                            // no 'string' type, but if char* str = "Vedant-Mansi"
                            // then the string "Vedant-Mansi" is identified as STRING_const/literal, 
		                    (yyval.expression)->symbol = gentemp(SymbolType::POINTER, (yyvsp[0].stringVal));
                            // emit("=str", $$->symbol->name, stringLiterals.size());
		                    (yyval.expression)->symbol->type->arrayType = new SymbolType(SymbolType::CHAR_T);
                        }
#line 1469 "y.tab.c"
    break;

  case 6: /* primary_expression: LPARAN expression RPARAN  */
#line 212 "A5_31.y"
                        { 
                            yyinfo("primary_expression => ( expression )"); 
                            (yyval.expression) = (yyvsp[-1].expression);
                        }
#line 1478 "y.tab.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 220 "A5_31.y"
                        { 
                            yyinfo("postfix_expression => primary_expression"); 
                            (yyval.array) = new Array();                                   // creating a new array
                            (yyval.array)->symbol = (yyvsp[0].expression)->symbol;
                            (yyval.array)->temp = (yyval.array)->symbol;
                            if((yyvsp[0].expression)->symbol)
                                (yyval.array)->subArrayType = (yyvsp[0].expression)->symbol->type;
                            (yyval.array)->trueList = (yyvsp[0].expression)->trueList;
                            (yyval.array)->falseList = (yyvsp[0].expression)->falseList;
                            (yyval.array)->nextList = (yyvsp[0].expression)->nextList;
                        }
#line 1494 "y.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression LSQBRACKET expression RSQBRACKET  */
#line 232 "A5_31.y"
                        { 
                            // array expression
                            yyinfo("postfix_expression => postfix_expression [ expression ]"); 
                            (yyval.array) = new Array();           // creating new array object
                            (yyval.array)->symbol = (yyvsp[-3].array)->symbol;    // previous symbol
                            (yyval.array)->subArrayType = (yyvsp[-3].array)->subArrayType->arrayType; 
                            (yyval.array)->temp = gentemp(SymbolType::INT_T); // temporary to compute location
                            (yyval.array)->type = Array::ARRAY;    // type will be array

                            if((yyvsp[-3].array)->type == Array::ARRAY) {
                                // adding the size of subarray and adding
                                Symbol *sym = gentemp(SymbolType::INT_T);
                                emit("*", sym->name, (yyvsp[-1].expression)->symbol->name, toString((yyval.array)->subArrayType->getSize()));
                                emit("+", (yyval.array)->temp->name, (yyvsp[-3].array)->temp->name, sym->name);
                            } else {
                                emit("*", (yyval.array)->temp->name, (yyvsp[-1].expression)->symbol->name, toString((yyval.array)->subArrayType->getSize()));
                            }

                        }
#line 1518 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression LPARAN argument_expression_list_opt RPARAN  */
#line 252 "A5_31.y"
                        { 
                            // function
                            // number of parameters - argument_expression_list
                            yyinfo("postfix_expression => postfix_expression ( argument_expression_list_opt )"); 
                            (yyval.array) = new Array();
                            (yyval.array)->symbol = gentemp((yyvsp[-3].array)->symbol->type->type);

                            (yyval.array)->symbol->type->arrayType = (yyvsp[-3].array)->symbol->type->arrayType;
                            
                            emit("call", (yyval.array)->symbol->name, (yyvsp[-3].array)->symbol->name, toString((yyvsp[-1].parameterCount)));
                        }
#line 1534 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression ARROW ID  */
#line 264 "A5_31.y"
                        { 
                            yyinfo("postfix_expression => postfix_expression -> ID"); 
                        }
#line 1542 "y.tab.c"
    break;

  case 11: /* argument_expression_list_opt: argument_expression_list  */
#line 273 "A5_31.y"
                                    { 
                                        yyinfo("argument_expression_list_opt => argument_expression_list"); 
                                        (yyval.parameterCount) = (yyvsp[0].parameterCount);
                                    }
#line 1551 "y.tab.c"
    break;

  case 12: /* argument_expression_list_opt: %empty  */
#line 278 "A5_31.y"
                                    { 
                                        // empty so 0 params
                                        yyinfo("argument_expression_list_opt => epsilon");
                                        (yyval.parameterCount) = 0;
                                    }
#line 1561 "y.tab.c"
    break;

  case 13: /* argument_expression_list: assignment_expression  */
#line 287 "A5_31.y"
                                { 
                                    // first parameter
                                    // initialise param count to 1
                                    yyinfo("argument_expression_list => assignment_expression"); 
                                    emit("param", (yyvsp[0].expression)->symbol->name);
                                    (yyval.parameterCount) = 1;
                                }
#line 1573 "y.tab.c"
    break;

  case 14: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 295 "A5_31.y"
                                { 
                                    // new parameter
                                    // adding 1 to param count
                                    yyinfo("argument_expression_list => argument_expression_list , assignment_expression");
                                    emit("param", (yyvsp[0].expression)->symbol->name);
                                    (yyval.parameterCount) = (yyvsp[-2].parameterCount) + 1; 
                                }
#line 1585 "y.tab.c"
    break;

  case 15: /* unary_expression: postfix_expression  */
#line 306 "A5_31.y"
                        {
                            yyinfo("unary_expression => postfix_expression"); 
                            (yyval.array) = (yyvsp[0].array);
                        }
#line 1594 "y.tab.c"
    break;

  case 16: /* unary_expression: unary_operator unary_expression  */
#line 311 "A5_31.y"
                        { 
                            yyinfo("unary_expression => unary_operator unary_expression");
                            if(strcmp((yyvsp[-1].unaryOperator), "&") == 0) {
                                // int* p = &x;
                                // here x is the unary expression
                                (yyval.array) = new Array();
                                // i need to create a temp var for storing the address of x (&x), which needs to be pointer type
                                (yyval.array)->symbol = gentemp(SymbolType::POINTER);
                                // if x is a pointer of int, then $$->symbol's type's array type is set to int
                                (yyval.array)->symbol->type->arrayType = (yyvsp[0].array)->symbol->type;

                                emit("=&", (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
                                
                            } else if(strcmp((yyvsp[-1].unaryOperator), "*") == 0) {
                                // if y = *x;

                                (yyval.array) = new Array();
                                (yyval.array)->type = Array::POINTER;
                                // $$->temp = gentemp($2->symbol->type->type);
                                (yyval.array)->temp = gentemp((yyvsp[0].array)->temp->type->arrayType->type);
                                // if x = *y;
                                // then temp will be t11 = int value of (*y), after dereferencing
                                (yyval.array)->symbol = (yyvsp[0].array)->symbol;
                                // TODO:
                                (yyval.array)->temp->type->arrayType = (yyvsp[0].array)->temp->type->arrayType->arrayType;
                                emit("=*", (yyval.array)->temp->name, (yyvsp[0].array)->symbol->name);
                            } else if(strcmp((yyvsp[-1].unaryOperator), "+") == 0) {
                                (yyval.array) = (yyvsp[0].array);
                            } else {
                                
                                (yyval.array) = new Array();
                                (yyval.array)->symbol = gentemp((yyvsp[0].array)->symbol->type->type);
                                emit((yyvsp[-1].unaryOperator), (yyval.array)->symbol->name, (yyvsp[0].array)->symbol->name);
                            }
                        }
#line 1634 "y.tab.c"
    break;

  case 17: /* unary_operator: BIT_AND  */
#line 360 "A5_31.y"
                    { 
                        yyinfo("unary_operator => &"); 
                        (yyval.unaryOperator) = strdup("&"); 
                    }
#line 1643 "y.tab.c"
    break;

  case 18: /* unary_operator: MULT  */
#line 365 "A5_31.y"
                    { 
                        yyinfo("unary_operator => *"); 
                        (yyval.unaryOperator) = strdup("*"); 
                    }
#line 1652 "y.tab.c"
    break;

  case 19: /* unary_operator: PLUS  */
#line 370 "A5_31.y"
                    { 
                        yyinfo("unary_operator => +"); 
                        (yyval.unaryOperator) = strdup("+"); 
                    }
#line 1661 "y.tab.c"
    break;

  case 20: /* unary_operator: SUB  */
#line 375 "A5_31.y"
                    { 
                        yyinfo("unary_operator => -"); 
                        (yyval.unaryOperator) = strdup("=-"); 
                    }
#line 1670 "y.tab.c"
    break;

  case 21: /* unary_operator: LOGICAL_NOT  */
#line 380 "A5_31.y"
                    { 
                        yyinfo("unary_operator => !"); 
                        (yyval.unaryOperator) = strdup("!"); 
                    }
#line 1679 "y.tab.c"
    break;

  case 22: /* multiplicative_expression: unary_expression  */
#line 396 "A5_31.y"
                                { 
                                     SymbolType *baseType;
                                    if((yyvsp[0].array)->symbol)
                                        baseType = (yyvsp[0].array)->symbol->type;
                                    while(baseType->arrayType)
                                        baseType = baseType->arrayType;
                                    yyinfo("multiplicative_expression => unary_expression"); 
                                    (yyval.expression) = new Expression();
                                    if((yyvsp[0].array)->type == Array::ARRAY) {
                                        (yyval.expression)->symbol = gentemp(baseType->type);
                                        emit("=[]", (yyval.expression)->symbol->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                                    } else if((yyvsp[0].array)->type == Array::POINTER) {
                                        (yyval.expression)->symbol = (yyvsp[0].array)->temp;
                                        emit("param", (yyvsp[0].array)->temp->name);
                                    } else {
                                        (yyval.expression)->symbol = (yyvsp[0].array)->symbol;
                                    }
                                    (yyval.expression)->trueList = (yyvsp[0].array)->trueList;
                                    (yyval.expression)->falseList = (yyvsp[0].array)->falseList;
                                    (yyval.expression)->nextList = (yyvsp[0].array)->nextList;
                                }
#line 1705 "y.tab.c"
    break;

  case 23: /* multiplicative_expression: multiplicative_expression MULT unary_expression  */
#line 418 "A5_31.y"
                                { 
                                    SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                                    while(baseType->arrayType)
                                        baseType = baseType->arrayType;
                                    Symbol *temp;
                                    if((yyvsp[0].array)->type == Array::ARRAY) {
                                        temp = gentemp(baseType->type);
                                        emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                                    } else if((yyvsp[0].array)->type == Array::POINTER) {
                                        temp = (yyvsp[0].array)->temp;
                                    } else {
                                        temp = (yyvsp[0].array)->symbol;
                                    }
                                    yyinfo("multiplicative_expression => multiplicative_expression * unary_expression"); 
                                    if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                                        (yyval.expression) = new Expression();
                                        (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                        emit("*", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
                                    } else {
                                        yyerror("Type error.");
                                    }
                                }
#line 1732 "y.tab.c"
    break;

  case 24: /* multiplicative_expression: multiplicative_expression DIV unary_expression  */
#line 441 "A5_31.y"
                                { 
                                    SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                                    while(baseType->arrayType)
                                        baseType = baseType->arrayType;
                                    Symbol *temp;
                                    if((yyvsp[0].array)->type == Array::ARRAY) {
                                        temp = gentemp(baseType->type);
                                        emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                                    } else if((yyvsp[0].array)->type == Array::POINTER) {
                                        temp = (yyvsp[0].array)->temp;
                                    } else {
                                        temp = (yyvsp[0].array)->symbol;
                                    }
                                    yyinfo("multiplicative_expression => multiplicative_expression / unary_expression");
                                    if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                                        (yyval.expression) = new Expression();
                                        (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                        emit("/", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
                                    } else {
                                        yyerror("Type error.");
                                    }
                                }
#line 1759 "y.tab.c"
    break;

  case 25: /* multiplicative_expression: multiplicative_expression MOD unary_expression  */
#line 464 "A5_31.y"
                                { 
                                    SymbolType *baseType = (yyvsp[0].array)->symbol->type;
                                    while(baseType->arrayType)
                                        baseType = baseType->arrayType;
                                    Symbol *temp;
                                    if((yyvsp[0].array)->type == Array::ARRAY) {
                                        temp = gentemp(baseType->type);
                                        emit("=[]", temp->name, (yyvsp[0].array)->symbol->name, (yyvsp[0].array)->temp->name);
                                    } else if((yyvsp[0].array)->type == Array::POINTER) {
                                        temp = (yyvsp[0].array)->temp;
                                    } else {
                                        temp = (yyvsp[0].array)->symbol;
                                    }
                                    yyinfo("multiplicative_expression => multiplicative_expression % unary_expression"); 
                                    if(typeCheck((yyvsp[-2].expression)->symbol, temp)) {
                                        (yyval.expression) = new Expression();
                                        (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                        emit("%", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, temp->name);
                                    } else {
                                        yyerror("Type error.");
                                    }
                                }
#line 1786 "y.tab.c"
    break;

  case 26: /* additive_expression: multiplicative_expression  */
#line 494 "A5_31.y"
                        { 
                            yyinfo("additive_expression => multiplicative_expression"); 
                            (yyval.expression) = (yyvsp[0].expression);
                            // emit("param", $1->symbol->name);
                        }
#line 1796 "y.tab.c"
    break;

  case 27: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 500 "A5_31.y"
                        { 
                            yyinfo("additive_expression => additive_expression + multiplicative_expression"); 
                            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                emit("+", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 1811 "y.tab.c"
    break;

  case 28: /* additive_expression: additive_expression SUB multiplicative_expression  */
#line 511 "A5_31.y"
                        { 
                            yyinfo("additive_expression => additive_expression - multiplicative_expression"); 
                            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                (yyval.expression) = new Expression();
                                (yyval.expression)->symbol = gentemp((yyvsp[-2].expression)->symbol->type->type);
                                emit("-", (yyval.expression)->symbol->name, (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 1826 "y.tab.c"
    break;

  case 29: /* relational_expression: additive_expression  */
#line 529 "A5_31.y"
                            { 
                                yyinfo("relational_expression => additive_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 1835 "y.tab.c"
    break;

  case 30: /* relational_expression: relational_expression LESS additive_expression  */
#line 534 "A5_31.y"
                            { 
                                yyinfo("relational_expression => relational_expression < additive_expression"); 
                                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makeList(nextInstruction());
			                        (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                    emit("<", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
#line 1853 "y.tab.c"
    break;

  case 31: /* relational_expression: relational_expression GREATER additive_expression  */
#line 548 "A5_31.y"
                            { 
                                yyinfo("relational_expression => relational_expression > additive_expression"); 
                                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makeList(nextInstruction());
			                        (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                    emit(">", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
#line 1871 "y.tab.c"
    break;

  case 32: /* relational_expression: relational_expression LESSEQ additive_expression  */
#line 562 "A5_31.y"
                            { 
                                yyinfo("relational_expression => relational_expression <= additive_expression"); 
                                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makeList(nextInstruction());
			                        (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                    emit("<=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
#line 1889 "y.tab.c"
    break;

  case 33: /* relational_expression: relational_expression GREATEREQ additive_expression  */
#line 576 "A5_31.y"
                            { 
                                yyinfo("relational_expression => relational_expression >= additive_expression"); 
                                if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                    (yyval.expression) = new Expression();
                                    (yyval.expression)->type = Expression::BOOLEAN;
                                    (yyval.expression)->trueList = makeList(nextInstruction());
			                        (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                    emit(">=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                    emit("goto", "");
                                } else {
                                    yyerror("Type error.");
                                }
                            }
#line 1907 "y.tab.c"
    break;

  case 34: /* equality_expression: relational_expression  */
#line 593 "A5_31.y"
                        { 
                            yyinfo("equality_expression => relational_expression"); 
                            (yyval.expression) = (yyvsp[0].expression);
                        }
#line 1916 "y.tab.c"
    break;

  case 35: /* equality_expression: equality_expression EQUALS relational_expression  */
#line 598 "A5_31.y"
                        { 
                            yyinfo("equality_expression => equality_expression == relational_expression"); 
                            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                (yyval.expression)->trueList = makeList(nextInstruction());
                                emit("==", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
			                    (yyval.expression)->falseList = makeList(nextInstruction());
                                emit("goto", "");
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 1936 "y.tab.c"
    break;

  case 36: /* equality_expression: equality_expression NOTEQ relational_expression  */
#line 614 "A5_31.y"
                        { 
                            yyinfo("equality_expression => equality_expression != relational_expression"); 
                            if(typeCheck((yyvsp[-2].expression)->symbol, (yyvsp[0].expression)->symbol)) {
                                (yyvsp[-2].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                (yyval.expression)->trueList = makeList(nextInstruction());
			                    (yyval.expression)->falseList = makeList(nextInstruction() + 1);
                                emit("!=", "", (yyvsp[-2].expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                emit("goto", "");
                            } else {
                                yyerror("Type error.");
                            }
                        }
#line 1956 "y.tab.c"
    break;

  case 37: /* M: %empty  */
#line 642 "A5_31.y"
        {
            yyinfo("M => epsilon");
            (yyval.instructionNumber) = nextInstruction();
        }
#line 1965 "y.tab.c"
    break;

  case 38: /* N: %empty  */
#line 649 "A5_31.y"
        {
            yyinfo("N => epsilon");
            (yyval.statement) = new Statement();
            (yyval.statement)->nextList = makeList(nextInstruction());
            emit("goto", "");
        }
#line 1976 "y.tab.c"
    break;

  case 39: /* logical_AND_expression: equality_expression  */
#line 689 "A5_31.y"
                            { 
                                yyinfo("logical_AND_expression => equality_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 1985 "y.tab.c"
    break;

  case 40: /* logical_AND_expression: logical_AND_expression LOGICAL_AND M equality_expression  */
#line 694 "A5_31.y"
                            { 
                                yyinfo("logical_AND_expression => logical_AND_expression && equality_expression");
                                (yyvsp[-3].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                backpatch((yyvsp[-3].expression)->trueList, (yyvsp[-1].instructionNumber));
                                (yyval.expression)->trueList = (yyvsp[0].expression)->trueList;
                                (yyval.expression)->falseList = merge((yyvsp[-3].expression)->falseList, (yyvsp[0].expression)->falseList);
                            }
#line 2000 "y.tab.c"
    break;

  case 41: /* logical_OR_expression: logical_AND_expression  */
#line 708 "A5_31.y"
                            { 
                                yyinfo("logical_OR_expression => logical_AND_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2009 "y.tab.c"
    break;

  case 42: /* logical_OR_expression: logical_OR_expression LOGICAL_OR M logical_AND_expression  */
#line 713 "A5_31.y"
                            { 
                                yyinfo("logical_OR_expression => logical_OR_expression || logical_AND_expression"); 
                                (yyvsp[-3].expression)->toInt();
                                (yyvsp[0].expression)->toInt();
                                (yyval.expression) = new Expression();
                                (yyval.expression)->type = Expression::BOOLEAN;
                                backpatch((yyvsp[-3].expression)->falseList, (yyvsp[-1].instructionNumber));
                                (yyval.expression)->trueList = merge((yyvsp[-3].expression)->trueList, (yyvsp[0].expression)->trueList);
                                (yyval.expression)->falseList = (yyvsp[0].expression)->falseList;
                            }
#line 2024 "y.tab.c"
    break;

  case 43: /* conditional_expression: logical_OR_expression  */
#line 727 "A5_31.y"
                            { 
                                yyinfo("conditional_expression => logical_OR_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2033 "y.tab.c"
    break;

  case 44: /* conditional_expression: logical_OR_expression N QUES M expression N COLON M conditional_expression  */
#line 750 "A5_31.y"
                            { 
                                yyinfo("conditional_expression => logical_OR_expression ? expression : conditional_expression"); 
                                (yyval.expression)->symbol = gentemp((yyvsp[-4].expression)->symbol->type->type);
                                emit("=", (yyval.expression)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                list<int> l = makeList(nextInstruction());
                                emit("goto", "");
                                backpatch((yyvsp[-3].statement)->nextList, nextInstruction());
                                emit("=", (yyval.expression)->symbol->name, (yyvsp[-4].expression)->symbol->name);
                                l = merge(l, makeList(nextInstruction()));
                                emit("goto", "");
                                backpatch((yyvsp[-7].statement)->nextList, nextInstruction());
                                (yyvsp[-8].expression)->toBool();
                                backpatch((yyvsp[-8].expression)->trueList, (yyvsp[-5].instructionNumber));
                                backpatch((yyvsp[-8].expression)->falseList, (yyvsp[-1].instructionNumber));
                                backpatch(l, nextInstruction());
                            }
#line 2054 "y.tab.c"
    break;

  case 45: /* assignment_expression: conditional_expression  */
#line 770 "A5_31.y"
                            { 
                                yyinfo("assignment_expression => conditional_expression"); 
                                (yyval.expression) = (yyvsp[0].expression);
                                // emit("param", $1->symbol->name);
                            }
#line 2064 "y.tab.c"
    break;

  case 46: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 776 "A5_31.y"
                            { 
                                yyinfo("assignment_expression => unary_expression = assignment_expression"); 
                                if((yyvsp[-2].array)->type == Array::ARRAY) {
                                    // EQUAL to array
                                    (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->subArrayType->type);
                                    emit("[]=", (yyvsp[-2].array)->symbol->name, (yyvsp[-2].array)->temp->name, (yyvsp[0].expression)->symbol->name);
                                } else if((yyvsp[-2].array)->type == Array::POINTER) {
                                    // EQUAL to pointer
                                    (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->temp->type->type);
                                    emit("*=", (yyvsp[-2].array)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                } else {
                                    // EQUAL to other
                                    (yyvsp[0].expression)->symbol = (yyvsp[0].expression)->symbol->convert((yyvsp[-2].array)->symbol->type->type);
			                        emit("=", (yyvsp[-2].array)->symbol->name, (yyvsp[0].expression)->symbol->name);
                                }
                                (yyval.expression) = (yyvsp[0].expression);
                            }
#line 2086 "y.tab.c"
    break;

  case 47: /* expression: assignment_expression  */
#line 797 "A5_31.y"
                { 
                    yyinfo("expression => assignment_expression"); 
                    (yyval.expression) = (yyvsp[0].expression);
                }
#line 2095 "y.tab.c"
    break;

  case 48: /* declaration: type_specifier init_declarator SEMICOLON  */
#line 807 "A5_31.y"
                {
                     yyinfo("declaration => type_specifier init_declarator ;"); 
                }
#line 2103 "y.tab.c"
    break;

  case 49: /* init_declarator: declarator  */
#line 814 "A5_31.y"
                    { 
                        yyinfo("init_declarator => declarator"); 
                        (yyval.symbol) = (yyvsp[0].symbol);
                    }
#line 2112 "y.tab.c"
    break;

  case 50: /* init_declarator: declarator ASSIGN initialiser  */
#line 819 "A5_31.y"
                    { 
                        yyinfo("init_declarator => declarator = initialiser");
                        // if there is some initial value assign it 
                        if((yyvsp[0].symbol)->initialValue != "") 
                            (yyvsp[-2].symbol)->initialValue = (yyvsp[0].symbol)->initialValue;
                        // = EQUAL
		                emit("=", (yyvsp[-2].symbol)->name, (yyvsp[0].symbol)->name);
                    }
#line 2125 "y.tab.c"
    break;

  case 51: /* type_specifier: VOID  */
#line 832 "A5_31.y"
                    { 
                        yyinfo("type_specifier => void");
                        currentType = SymbolType::VOID_T;
                    }
#line 2134 "y.tab.c"
    break;

  case 52: /* type_specifier: CHAR  */
#line 837 "A5_31.y"
                    { 
                        yyinfo("type_specifier => char"); 
                        currentType = SymbolType::CHAR_T;
                    }
#line 2143 "y.tab.c"
    break;

  case 53: /* type_specifier: INT  */
#line 842 "A5_31.y"
                    { 
                        yyinfo("type_specifier => int"); 
                        currentType = SymbolType::INT_T;
                    }
#line 2152 "y.tab.c"
    break;

  case 54: /* declarator: pointer direct_declarator  */
#line 850 "A5_31.y"
                { 
                    yyinfo("declarator => pointer direct_declarator"); 
                    SymbolType *it = (yyvsp[-1].symbolType);
                    it->arrayType = (yyvsp[0].symbol)->type; // this updates the type of 2 as pointer to int
                    // but for functions/arrays, it should be different?
                    // int* a[10] = should be array of pointers and not pointer to array
                    // int* func(){}    should's return value should be int*
                    if((yyvsp[0].symbol)->type->type == SymbolType::ARRAY){
                        (yyvsp[-1].symbolType)->arrayType = (yyvsp[0].symbol)->type->arrayType;
                        (yyvsp[0].symbol)->type->arrayType = (yyvsp[-1].symbolType);
                        // $$ = $2->update();
                    }
                    else if( (yyvsp[0].symbol)->type->type == SymbolType::FUNCTION){
                        currentTable->search("return")->update((yyvsp[-1].symbolType));
                    }
                    else
                    {
                        (yyval.symbol) = (yyvsp[0].symbol)->update((yyvsp[-1].symbolType));
                    }
                }
#line 2177 "y.tab.c"
    break;

  case 55: /* declarator: direct_declarator  */
#line 871 "A5_31.y"
                { 
                    yyinfo("declarator => direct_declarator"); 
                }
#line 2185 "y.tab.c"
    break;

  case 56: /* change_scope_definition: %empty  */
#line 878 "A5_31.y"
                    {
                        if(currentSymbol->nestedTable == NULL) {
                            changeTable(new SymbolTable(""));
                        }
                        else {
                            changeTable(currentSymbol->nestedTable);
                            // emit("label", currentTable->name);
                        }
                    }
#line 2199 "y.tab.c"
    break;

  case 57: /* change_scope_declaration: %empty  */
#line 890 "A5_31.y"
                    {
                        if(currentSymbol->nestedTable == NULL) {
                            changeTable(new SymbolTable(""));
                        }
                        else {
                            changeTable(currentSymbol->nestedTable);
                            emit("label", currentTable->name);
                        }
                    }
#line 2213 "y.tab.c"
    break;

  case 58: /* AUG1: ID  */
#line 904 "A5_31.y"
    {
        (yyval.symbol) = (yyvsp[0].symbol)->update(new SymbolType(currentType));
        currentSymbol = (yyval.symbol);
    }
#line 2222 "y.tab.c"
    break;

  case 59: /* direct_declarator: ID  */
#line 916 "A5_31.y"
                        { 
                            yyinfo("direct_declarator => ID");
                          
                            // forcefully creating a new entery inside this table
                            (yyvsp[0].symbol) = currentTable->search1((yyvsp[0].symbol)->name);

                            // whenever we see a declarator, then we set it's type to the last type seen by the lexer
                            (yyval.symbol) = (yyvsp[0].symbol)->update(new SymbolType(currentType)); // update type to the last type seen
                            currentSymbol = (yyval.symbol);
                        }
#line 2237 "y.tab.c"
    break;

  case 60: /* direct_declarator: direct_declarator LSQBRACKET INT_CONST RSQBRACKET  */
#line 927 "A5_31.y"
                        { 
                            yyinfo("direct_declarator => ID [ assignment_expression ]");

                            // forcefully creating a new entery inside this table
                            (yyvsp[-3].symbol) = currentTable->search1((yyvsp[-3].symbol)->name);

                            SymbolType *it1 = (yyvsp[-3].symbol)->type, *it2 = NULL;

                            while(it1->type == SymbolType::ARRAY) { // go to the base level of a nested type
                                it2 = it1;
                                it1 = it1->arrayType;
                            }

                            if(it2 != NULL) { 
                                // nested array case
                                it2->arrayType =  new SymbolType(SymbolType::ARRAY, it1, (yyvsp[-1].intVal));	
                                (yyval.symbol) = (yyvsp[-3].symbol)->update((yyvsp[-3].symbol)->type);
                            } else { 
                                (yyval.symbol) = (yyvsp[-3].symbol)->update(new SymbolType(SymbolType::ARRAY, (yyvsp[-3].symbol)->type, (yyvsp[-1].intVal)));
                            }
                        }
#line 2263 "y.tab.c"
    break;

  case 61: /* direct_declarator: AUG1 LPARAN change_scope_declaration parameter_list RPARAN  */
#line 949 "A5_31.y"
                        { 
                            yyinfo("direct_declarator => ID ( parameter_list )"); 

                            // function declaration
                            currentTable->name = (yyvsp[-4].symbol)->name;

                            (yyvsp[-4].symbol)->type->paramType = (yyvsp[-1].parameterlist);

                            if((yyvsp[-4].symbol)->type->type != SymbolType::VOID_T) {
                                // set type of return value
                                currentTable->search("return")->update((yyvsp[-4].symbol)->type);
                            }

                            // move back to the global table and set the nested table for the function
                            (yyvsp[-4].symbol)->nestedTable = currentTable;
                            (yyvsp[-4].symbol)->category = Symbol::FUNCTION;
                            currentTable->parent = globalTable;
                            changeTable(globalTable);
                            currentSymbol = (yyval.symbol);
                        }
#line 2288 "y.tab.c"
    break;

  case 62: /* direct_declarator: AUG1 LPARAN change_scope_declaration RPARAN  */
#line 970 "A5_31.y"
                        { 
                            yyinfo("direct_declarator => ID ( )"); 

                            // same as the previous rule
                            currentTable->name = (yyvsp[-3].symbol)->name;
                            // $1->update(new SymbolType(currentType));

                            if((yyvsp[-3].symbol)->type->type != SymbolType::VOID_T) {
                                // set type of return value
                                currentTable->search("return")->update((yyvsp[-3].symbol)->type);
                            }

                            // move back to the global table and set the nested table for the function
                            (yyvsp[-3].symbol)->nestedTable = currentTable;
                            (yyvsp[-3].symbol)->category = Symbol::FUNCTION;
                            currentTable->parent = globalTable;
                            changeTable(globalTable);
                            currentSymbol = (yyval.symbol);
                        }
#line 2312 "y.tab.c"
    break;

  case 63: /* pointer: MULT  */
#line 1000 "A5_31.y"
            { 
                yyinfo("pointer => * ");
                (yyval.symbolType) = new SymbolType(SymbolType::POINTER);
            }
#line 2321 "y.tab.c"
    break;

  case 64: /* parameter_list: parameter_declaration  */
#line 1008 "A5_31.y"
                    { 
                        yyinfo("parameter_list => parameter_declaration"); 
                        (yyval.parameterlist) = (yyvsp[0].parameterlist);
                    }
#line 2330 "y.tab.c"
    break;

  case 65: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1013 "A5_31.y"
                    { 
                        yyinfo("parameter_list => parameter_list , parameter_declaration"); 
                        // SymbolType* temp1 = $1;
                        // SymbolType* temp2 = NULL;
                        // printf("hi1\n");
                        // while(temp1 != nullptr){
                        //     printf("hi2\n");
                        //     temp2 = temp1;
                        //     temp1 = temp1->paramType;
                        // }
                        // printf("hi3\n");
                        // if(temp2)
                        // temp2->paramType = $3;
                        (yyval.parameterlist) = (yyvsp[-2].parameterlist);
                    }
#line 2350 "y.tab.c"
    break;

  case 66: /* parameter_declaration: type_specifier declarator  */
#line 1033 "A5_31.y"
                            { 
                                yyinfo("parameter_declaration => pointer identifier_opt");
                                (yyvsp[0].symbol)->category = Symbol::PARAMETER;
                            }
#line 2359 "y.tab.c"
    break;

  case 67: /* parameter_declaration: type_specifier  */
#line 1038 "A5_31.y"
                            { 
                                yyinfo("parameter_declaration => identifier_opt");
                            }
#line 2367 "y.tab.c"
    break;

  case 68: /* initialiser: assignment_expression  */
#line 1053 "A5_31.y"
                { 
                    yyinfo("initialiser => assignment_expression"); 
                    (yyval.symbol) = (yyvsp[0].expression)->symbol;
                }
#line 2376 "y.tab.c"
    break;

  case 69: /* statement: compound_statement  */
#line 1063 "A5_31.y"
                { 
                    yyinfo("statement => compound_statement");
                    (yyval.statement) = (yyvsp[0].statement); 
                }
#line 2385 "y.tab.c"
    break;

  case 70: /* statement: expression_statement  */
#line 1068 "A5_31.y"
                { 
                    yyinfo("statement => expression_statement"); 
                    (yyval.statement) = new Statement();
                    (yyval.statement)->nextList = (yyvsp[0].expression)->nextList;
                }
#line 2395 "y.tab.c"
    break;

  case 71: /* statement: selection_statement  */
#line 1074 "A5_31.y"
                { 
                    yyinfo("statement => selection_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 2404 "y.tab.c"
    break;

  case 72: /* statement: iteration_statement  */
#line 1079 "A5_31.y"
                { 
                    yyinfo("statement => iteration_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 2413 "y.tab.c"
    break;

  case 73: /* statement: jump_statement  */
#line 1084 "A5_31.y"
                { 
                    yyinfo("statement => jump_statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 2422 "y.tab.c"
    break;

  case 74: /* change_block: %empty  */
#line 1097 "A5_31.y"
                    {
                        string name = currentTable->name + "_" + toString(tableCount);
                        tableCount++;
                        Symbol *s = currentTable->search(name); // create new entry in symbol table
                        s->nestedTable = new SymbolTable(name, currentTable);
                        s->type = new SymbolType(SymbolType::BLOCK);
                        currentSymbol = s;
                    }
#line 2435 "y.tab.c"
    break;

  case 75: /* compound_statement: LBRACE change_block change_scope_declaration block_item_list_opt RBRACE  */
#line 1109 "A5_31.y"
                        { 
                            yyinfo("compound_statement => { block_item_list_opt }"); 
                            (yyval.statement) = (yyvsp[-1].statement);
                            changeTable(currentTable->parent); // block over, move back to the parent table
                        }
#line 2445 "y.tab.c"
    break;

  case 76: /* block_item_list_opt: block_item_list  */
#line 1118 "A5_31.y"
                        { 
                            yyinfo("block_item_list_opt => block_item_list"); 
                            (yyval.statement) = (yyvsp[0].statement);
                        }
#line 2454 "y.tab.c"
    break;

  case 77: /* block_item_list_opt: %empty  */
#line 1123 "A5_31.y"
                        { 
                            yyinfo("block_item_list_opt => epsilon"); 
                            (yyval.statement) = new Statement();
                        }
#line 2463 "y.tab.c"
    break;

  case 78: /* block_item_list: block_item  */
#line 1131 "A5_31.y"
                    {
                        yyinfo("block_item_list => block_item"); 
                        (yyval.statement) = (yyvsp[0].statement);
                    }
#line 2472 "y.tab.c"
    break;

  case 79: /* block_item_list: block_item_list M block_item  */
#line 1136 "A5_31.y"
                    { 
                        yyinfo("block_item_list => block_item_list block_item"); 
                        (yyval.statement) = (yyvsp[0].statement);
                        // after completion of block_item_list(1) we move to block_item(3)
                        backpatch((yyvsp[-2].statement)->nextList,(yyvsp[-1].instructionNumber));
                    }
#line 2483 "y.tab.c"
    break;

  case 80: /* block_item: declaration  */
#line 1146 "A5_31.y"
                { 
                    yyinfo("block_item => declaration"); 
                    (yyval.statement) = new Statement();
                }
#line 2492 "y.tab.c"
    break;

  case 81: /* block_item: statement  */
#line 1151 "A5_31.y"
                { 
                    yyinfo("block_item => statement"); 
                    (yyval.statement) = (yyvsp[0].statement);
                }
#line 2501 "y.tab.c"
    break;

  case 82: /* expression_statement: expression_opt SEMICOLON  */
#line 1159 "A5_31.y"
                            { 
                                yyinfo("expression_statement => expression_opt ;"); 
                                (yyval.expression) = (yyvsp[-1].expression);
                            }
#line 2510 "y.tab.c"
    break;

  case 83: /* expression_opt: expression  */
#line 1167 "A5_31.y"
                    { 
                        yyinfo("expression_opt => expression"); 
                        (yyval.expression) = (yyvsp[0].expression);
                    }
#line 2519 "y.tab.c"
    break;

  case 84: /* expression_opt: %empty  */
#line 1172 "A5_31.y"
                    { 
                        yyinfo("expression_opt => epsilon"); 
                        (yyval.expression) = new Expression();
                    }
#line 2528 "y.tab.c"
    break;

  case 85: /* selection_statement: IF LPARAN expression N RPARAN M statement N  */
#line 1197 "A5_31.y"
                        { 
                            yyinfo("selection_statement => if ( expression ) statement"); 
                            backpatch((yyvsp[-4].statement)->nextList, nextInstruction());
                            (yyval.statement) = new Statement();
                            (yyvsp[-5].expression)->toBool();
                            backpatch((yyvsp[-5].expression)->trueList, (yyvsp[-2].instructionNumber)); // if true go to M
                            (yyval.statement)->nextList = merge((yyvsp[-5].expression)->falseList, merge((yyvsp[-1].statement)->nextList, (yyvsp[0].statement)->nextList)); // exits
                        }
#line 2541 "y.tab.c"
    break;

  case 86: /* selection_statement: IF LPARAN expression N RPARAN M statement N ELSE M statement  */
#line 1206 "A5_31.y"
                        { 
                            yyinfo("selection_statement => if ( expression ) statement else statement"); 
                            backpatch((yyvsp[-7].statement)->nextList, nextInstruction());
                            (yyval.statement) = new Statement();
                            (yyvsp[-8].expression)->toBool();
                            backpatch((yyvsp[-8].expression)->trueList, (yyvsp[-5].instructionNumber)); // if true go to M
                            backpatch((yyvsp[-8].expression)->falseList, (yyvsp[-1].instructionNumber)); // if false go to else
                            (yyval.statement)->nextList = merge((yyvsp[0].statement)->nextList, merge((yyvsp[-4].statement)->nextList, (yyvsp[-3].statement)->nextList)); // exits
                        }
#line 2555 "y.tab.c"
    break;

  case 87: /* iteration_statement: FOR LPARAN expression_opt SEMICOLON M expression_opt SEMICOLON M expression_opt N RPARAN M statement  */
#line 1232 "A5_31.y"
                        { 
                            yyinfo("iteration_statement => for ( expression_opt ; expression_opt ; expression_opt ) statement"); 
                            (yyval.statement) = new Statement();
                            (yyvsp[-7].expression)->toBool();
                            backpatch((yyvsp[-7].expression)->trueList, (yyvsp[-1].instructionNumber)); // if true go to M3 (loop body)
                            backpatch((yyvsp[-3].statement)->nextList, (yyvsp[-8].instructionNumber)); // after N go to M1 (condition check)
                            backpatch((yyvsp[0].statement)->nextList, (yyvsp[-5].instructionNumber)); // after S1 (loop body) go to M2 (increment/decrement/any other operation)
                            emit("goto", toString((yyvsp[-5].instructionNumber)));
                            (yyval.statement)->nextList = (yyvsp[-7].expression)->falseList; // exit if false
                        }
#line 2570 "y.tab.c"
    break;

  case 88: /* jump_statement: RETURN expression_opt SEMICOLON  */
#line 1246 "A5_31.y"
                    { 
                        yyinfo("jump_statement => return expression_opt ;"); 
                        (yyval.statement) = new Statement();
                        if((yyvsp[-1].expression)->symbol != NULL) {
                            emit("return", (yyvsp[-1].expression)->symbol->name); // emit the current symbol name at return if it exists otherwise empty
                        } else {
                            emit("return", "");
                        }
                    }
#line 2584 "y.tab.c"
    break;

  case 89: /* translation_unit: temp_declaration  */
#line 1261 "A5_31.y"
                        { 
                            yyinfo("translation_unit => temp_declaration"); 
                        }
#line 2592 "y.tab.c"
    break;

  case 90: /* translation_unit: translation_unit temp_declaration  */
#line 1265 "A5_31.y"
                        { 
                            yyinfo("translation_unit => translation_unit temp_declaration"); 
                        }
#line 2600 "y.tab.c"
    break;

  case 91: /* temp_declaration: function_definition  */
#line 1272 "A5_31.y"
                            { 
                                yyinfo("temp_declaration => function_definition"); 
                            }
#line 2608 "y.tab.c"
    break;

  case 92: /* temp_declaration: declaration  */
#line 1276 "A5_31.y"
                            { 
                                yyinfo("temp_declaration => declaration"); 
                            }
#line 2616 "y.tab.c"
    break;

  case 93: /* function_definition: type_specifier declarator change_scope_definition LBRACE block_item_list_opt RBRACE  */
#line 1283 "A5_31.y"
                        { 
                            yyinfo("function_definition => type_specifier declarator change_scope LBRACE block_item_list_opt RBRACE");
                            tableCount = 0;
                            if((yyvsp[-4].symbol)->type->type != SymbolType::VOID_T){
                                currentTable->search("return")->update((yyvsp[-4].symbol)->type);
                            }
                            (yyvsp[-4].symbol)->isFunction = true;
                            // $3->type->returnType->type= $2;
                            changeTable(globalTable);
                        }
#line 2631 "y.tab.c"
    break;


#line 2635 "y.tab.c"

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
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1295 "A5_31.y"


void yyerror(string s) {
    printf("ERROR at line no. %d : %s\n", yylineno, s.c_str());
}

void yyinfo(string s) {
    #ifdef _DEBUG
        printf("INFO [Line %d] : %s\n", yylineno, s.c_str());
    #endif
}
