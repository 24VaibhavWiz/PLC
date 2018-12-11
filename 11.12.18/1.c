#include"stdio.h"
int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	int nl,nt,nb,nc=0;
	fp=fopen("assin1.txt","r");
	while(1)
	{
		ch=getc(fp);
		if(ch==EOF)
		break;
		nc++; 
		if(ch==' ')
		nb++;
		if(ch=='\n')
		nl++; 
		if(ch=='\t')
		nt++;
	}

	fclose(fp);

	printf("Total number of character in file = %d \n",nc);
	printf("Total number of blank spaces in file = %d \n",nb);
	printf("Total number of New Lines in file = %d \n",nl);
	printf("Total number of tabs in file = %d \n",nt);
	
}
