#include <stdio.h>
#include <string.h>
#define CHAR 				10
#define IF 					11
#define ELSE 				12
#define FOR 				13
#define INT 				14
#define RETURN 				15
#define VOID 				16
#define	ID					17
#define	INT_CONST			18
#define CHAR_CONST			19
#define STRING_CONST 		20
#define LSQBRACKET 			21
#define RSQBRACKET 			22
#define	LBRACE				23
#define	RBRACE				24
#define LPARAN				25
#define RPARAN 				26
#define ARROW				27
#define BIT_AND 			28
#define	PLUS				29
#define SUB		 			30
#define	MULT				31
#define DIV 				32
#define MOD 				33
#define LOGICAL_NOT 		34
#define LOGICAL_AND			35
#define LOGICAL_OR 			36
#define LESS				37
#define GREATER 			38
#define LESSEQ				39
#define GREATEREQ			40
#define EQUALS				41
#define NOTEQ				42
#define QUES 				43
#define COLON				44
#define	SEMICOLON			45
#define	ASSIGN				46
#define COMMA				47
#define HASH				48
#define SINGLE_COMMENT		49
#define MULTI_COMMENT		50

int main(){ int token;
    while(token = yylex()){
        switch (token)
        {
        case MULTI_COMMENT:
            printf("<MULTI LINE COMMENT, %d>\n", token);
            break;
        case SINGLE_COMMENT:
            printf("<SINGLE LINE COMMENT, %d>\n", token);
            break;

        case CHAR:
            printf("<KEYWORD, %d, %s>\n", token, yytext); break;
        case ELSE:
            printf("<KEYWORD, %d, %s>\n", token, yytext); break;
        case FOR:
            printf("<KEYWORD, %d, %s>\n", token, yytext); break;
        case IF:
            printf("<KEYWORD, %d, %s>\n", token, yytext); break;
        case INT:
            printf("<KEYWORD, %d, %s>\n", token, yytext); break;
        case RETURN:
            printf("<KEYWORD, %d, %s>\n", token, yytext); break;
        case VOID:
            printf("<KEYWORD, %d, %s>\n", token, yytext); break;

        case ID:
            printf("<IDENTIFIER, %d, %s>\n", token, yytext); break;

        case INT_CONST:
            printf("<CONSTANT, %d, %s>\n", token, yytext); break;
        case CHAR_CONST:
            {char *result = yytext+1; // removes first character
            result[strlen(result)-1] = '\0'; // removes last character
            printf("<CONSTANT, %d, %s>\n", token, yytext); break;}

        case STRING_CONST:
            {char *result = yytext+1; // removes first character
            result[strlen(result)-1] = '\0'; // removes last character
            printf("<STRING-LITERAL, %d, %s>\n", token, result); break;}

        case LSQBRACKET:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case RSQBRACKET:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case LBRACE:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case RBRACE:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case LPARAN:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case RPARAN:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case ARROW:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case LESSEQ:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case GREATEREQ:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case EQUALS:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case NOTEQ:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case BIT_AND:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case PLUS:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case SUB:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case MULT:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case DIV:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case MOD:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case LOGICAL_NOT:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case LOGICAL_AND:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case LOGICAL_OR:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case LESS:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case GREATER:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case QUES:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case COLON:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case SEMICOLON:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case ASSIGN:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        case COMMA:
            printf("<PUNCTUATOR, %d, %s>\n", token, yytext); break;
        }
    }
    return 0;
}
