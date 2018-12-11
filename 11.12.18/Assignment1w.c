#include "stdio.h"
#include"stdlib.h"

int main()
{
	FILE *p;
	p = fopen("assin1.txt","w");
	char a;
	if(p == NULL)
	{
		printf("File is empty\n");
		exit(0);
	}
	a = getchar();
	while(a!="\n")
	{
		putc(a,p);
		a = getchar();
	}
	fclose(p);
}
