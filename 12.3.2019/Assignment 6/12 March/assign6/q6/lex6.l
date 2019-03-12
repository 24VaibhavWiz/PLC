%{
	#include <stdio.h>
	#include <ctype.h>
	int letters = 0;
%}

%%


. {
    if(isupper(yytext[0]))
    {
    	printf("%c ", yytext[0]);
   	letters++;
     }
}

\n {
    printf("\nNo of capital letters = %d\n", letters);
    exit(0);
}
