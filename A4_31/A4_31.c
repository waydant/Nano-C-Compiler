#include <stdio.h>
#include "A4_31.tab.h"
extern int yyparse();

int main() {
	yydebug=1;
  	
	int ret = yyparse();

	if(ret==0){
		printf("Input Parsed Successfully!!\n");
	}else{
		printf("Syntax Error!!\n");
	}

  	return 0;
}