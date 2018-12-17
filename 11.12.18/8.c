#include"stdio.h"

int main()
{
	FILE *f1,*f2;
	int p;
	f1 = fopen("abc.txt","r");
	f2 = fopen("def.txt","w");

	while(p = getc(f1)!=EOF)
	{
		fputc(p,f2);
		if(p == 32)
		{
			while(p = getc(f1) == 32)
				fputc(p,f2);
		}
	}
	fclose(f1);
	fclose(f2);
	getch();
}