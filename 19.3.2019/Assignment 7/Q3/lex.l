%{
#include"stdio.h"
int sf=0,pf=0;
%}



%%


"scanf"	{ sf++; fprintf(yyout,"readf");}         
"printf" { pf++; fprintf(yyout,"writef");}           


%%

int main()
{
	yyin=fopen("open.c","r");                            
	yyout=fopen("new.c","w");                           
	yylex();
	printf("Number of scanfs=%d\nNumber of Printfs=%d\n",sf,pf);

}
