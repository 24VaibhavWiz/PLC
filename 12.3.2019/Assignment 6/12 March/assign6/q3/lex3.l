%{
	#include <stdio.h>
	int words = 0, lines = 0, letters=0 ,num = 0, special = 0;
%}

%%

\n {
	lines++;
	words++;
}

[\t ' ']	words++;
[a-zA-Z]        letters++;
[0-9]		num++;
.		special++;

%%

int main()
{
    yylex();
    printf("Characters = %d \n", (letters + num + special));
    printf("Words = %d \n", words);
    printf("Lines = %d \n", lines);
    return 0;
}
