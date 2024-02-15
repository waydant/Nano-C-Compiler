Assignment by:
    Vedant Gaurang Shah (200101115)
    Mansi               (200101064)

The zip file contains:
    A4_31.c         (containing the main function)
    A4_31.l         (lexer file)
    A4_31.y         (parser file)
    readme.txt
    A4_31.nc          (testing file)
    Makefile

To compile all the files run:
    make

To run the test case:
    make test

Clean all the files before running the 'make' command again by :
    make clean

In the implementation, the following grammar rules have been modified from the assignment:

1. function_definition shouldn't contain () in the grammar

2. translation-unit:
    function-definition
    | declaration
    ;

    the above given grammar is wrong as it doesn't successfully parse nanoC files with more than 1 functional declaration/ declaration

    corrected grammar:

    translational_unit: temp_declaration 
					| translational_unit temp_declaration 
					;

    temp_declaration: function_definition 
                        | declaration 
                        ;

Also the following edge cases have been delt properly (by making appropriate changes in the lex file):

int x = y+5;    // should work fine
int x = y++5;   // should give syntax error
int x = y+++5;   // should give syntax error
int x = y++++5;   // should give syntax error

//<<EOF>> should terminate the file

Whenever a syntax error is encountered, the main yyerror() is modified to also output the line number of the line containing the error
