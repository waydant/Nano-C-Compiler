%{
	#include<stdio.h>
	extern int yylex();
	extern int yylineno;
	void yyerror(char *s);
%}

/* Bison Declaration */
%token CHAR
%token ELSE	
%token FOR	
%token IF		
%token INT	
%token RETURN	
%token VOID	
%token ID			
%token INT_CONST	
%token CHAR_CONST	
%token STRING_CONST
%token LSQBRACKET	
%token RSQBRACKET	
%token LBRACE		
%token RBRACE		
%token LPARAN		
%token RPARAN		
%token ARROW		
%token BIT_AND	
%token PLUS		
%token SUB			
%token MULT		
%token DIV
%token MOD
%token LOGICAL_NOT	
%token LOGICAL_AND		
%token LOGICAL_OR		
%token LESS		
%token GREATER	
%token LESSEQ		
%token GREATEREQ	
%token EQUALS		
%token NOTEQ		
%token QUES		
%token COLON		
%token SEMICOLON	
%token ASSIGN		
%token COMMA


%start translational_unit


%%
/* *********EXPRESIION************ */
primary_expression: identifier 
					|INT_CONST 
					|CHAR_CONST 
					|STRING_CONST 
					|LPARAN expression RPARAN
					;

postfix_expression: primary_expression 
					|postfix_expression LSQBRACKET expression RSQBRACKET 
					|postfix_expression LPARAN argument_expression_list_opt RPARAN 
					|postfix_expression ARROW identifier 
					;

identifier: ID
			;

argument_expression_list_opt: /* epsilon */
							  |argument_expression_list
							  ;

argument_expression_list: assignment_expression 
						  |argument_expression_list COMMA assignment_expression 
						  ;

unary_expression: postfix_expression 
				  |unary_operator unary_expression 
				  ;

unary_operator: BIT_AND 
				|MULT 
				|PLUS 
				|SUB 
				|LOGICAL_NOT 
				;

multiplicative_expression: unary_expression 
						   |multiplicative_expression MULT unary_expression 
						   |multiplicative_expression DIV unary_expression 
						   |multiplicative_expression MOD unary_expression 
						   ;

additive_expression: multiplicative_expression 
					 |additive_expression PLUS multiplicative_expression 
					 |additive_expression SUB multiplicative_expression 
					 ;

relational_expression: additive_expression 
					   |relational_expression LESS additive_expression 
					   |relational_expression GREATER additive_expression  
					   |relational_expression LESSEQ additive_expression 
					   |relational_expression GREATEREQ additive_expression 
					   ;

equality_expression: relational_expression 
					 |equality_expression EQUALS relational_expression 
					 |equality_expression NOTEQ  relational_expression 
					 ;

logical_and_expression: equality_expression 
						|logical_and_expression LOGICAL_AND equality_expression 
						;
 
logical_or_expression: logical_and_expression 
					   |logical_or_expression LOGICAL_OR logical_and_expression 
					   ;

conditional_expression: logical_or_expression 
						|logical_or_expression QUES expression COLON conditional_expression 
						;

assignment_expression: conditional_expression 
					   |unary_expression ASSIGN assignment_expression 
					   ;

expression: assignment_expression 
			;


/* *********DECLARATIONS************ */

declaration: type_specifier init_declarator SEMICOLON 
			 ;

init_declarator: declarator 
				 |declarator ASSIGN initializer 
				 ;


type_specifier: VOID 
				|CHAR 
				|INT 
				;


declarator: pointer_opt direct_declarator 
			;

pointer_opt: /* epsilon */
			 |pointer
			 ;


direct_declarator: identifier 
				   |identifier LSQBRACKET INT_CONST RSQBRACKET 
				   |identifier LPARAN parameter_list_opt RPARAN 
				   ;

parameter_list_opt: /*epsilon*/
					|parameter_list
					;

pointer: MULT 
		;

parameter_list: parameter_declaration 
				|parameter_list COMMA parameter_declaration 
				;

parameter_declaration: type_specifier pointer_opt identifier_opt 
					   ;

identifier_opt: /*epsilon*/
				|identifier 
				;

initializer: assignment_expression 
			;


/* *********STATEMENTS************ */
statement: compound_statement 
		   |expression_statement 
		   |selection_statement 
		   |iteration_statement 
		   |jump_statement 
		   ;


compound_statement: LBRACE block_item_list_opt RBRACE 
					;

block_item_list_opt: /* epsilon */
					 |block_item_list
					 ;

block_item_list: block_item 
				 |block_item_list block_item 
				 ;

block_item: declaration 
			|statement 
			;

expression_statement: expression_opt SEMICOLON 
					  ;

expression_opt: /* epsilon */
				|expression
				;

selection_statement: IF LPARAN expression RPARAN statement 
					 |IF LPARAN expression RPARAN statement ELSE statement 
					 ;

iteration_statement: FOR LPARAN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt RPARAN statement 
					 ;

jump_statement: RETURN expression_opt SEMICOLON 
				;


/* *********Translation Unit************ */
translational_unit: temp_declaration 
					| translational_unit temp_declaration 
					;

temp_declaration: function_definition 
					| declaration 
					;

function_definition: type_specifier declarator compound_statement 
					 ;

declaration_list: declaration 
				  |declaration_list declaration 
				  ;
%%


void yyerror(char *s) {
    fprintf(stderr, "Error on line %d: %s\n", yylineno, s);
    printf("-----------------------Error on line %d: %s---------------------\n", yylineno, s);
}
