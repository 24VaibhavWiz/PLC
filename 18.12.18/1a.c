#include "stdio.h"
#include "stdlib.h"

int main ()
{
	char    str[10];
    	FILE    *fptr;
    	int     i;
    	int     num;
    	char    num2;
    	i = 0;

    	fptr = fopen("source.txt", "w");
    	if (fptr == NULL)
    	{
       		printf("ERROR Creating File!");
        	exit(0);
    	}

    	for (int i = 0; i < 10; ++i)
   	{
		fprintf(fptr, "%d", rand() % 10);
	}

	fprintf(fptr, "\n"); 
    	puts(str);
    	fprintf(fptr,"%s", str);
 	fclose(fptr);
}
