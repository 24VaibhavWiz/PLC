#include "stdio.h"
#include"stdlib.h"

int main()
{
	FILE *p;
	p = fopen("assin1.txt","r");
	char a;
	if(p == NULL)
	{
		printf("File is empty\n");
		exit(0);
	}
	a = getc(p);
	while(a!=EOF)
	{
		printf("%c",a);
		a = getc(p);
	}
	fclose(p);
}
