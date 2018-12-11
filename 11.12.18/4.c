#include"stdio.h"
#include"stdlib.h"
void main()
{
	FILE *fp;
	char ch,file[10];
	printf("Enter file name\n");
	scanf("%s",file);
	fp=fopen(file,"w");//"a"	  
	if(fp==NULL)	  
	{
		printf("File could not open\n");
		exit(0);
	}

	printf("Enter data (* to exit)\n");
	while(1)
	{
		ch=getchar();
		if(ch=='*')
		break;
		putc(ch,fp);

	}
fclose(fp);
}
