%{ 
	#include"stdio.h"
int k=0;
%}

%%
[a-zA-Z]+ {
	if(yyleng>k)
	{  
		k= yyleng;
	}
}
%%

int main(int argc[],char **argv[])
{
	yyin=fopen("example.txt","r");
	yylex(); 
	printf("largest: %d",k);
	printf("\n");
}
