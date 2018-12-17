#include"stdio.h"

struct info
{
	char name[30];
	double salary;
	int id;
};

int main()
{
	FILE *f;
	*f = fopen("abc.txt","r");
	if(*f == NULL)
	{
		printf("Can't open file (EMPTY)\n");
		getch();
		exit(0);
	}

	while(fread(&s,sizeof(s),1,f) == 1)
	{
		printf("Employee ID : %d",info.id);
		printf("Employee Name : %s",info.name);
		printf("Employee Salary : %f",info.salary);
	}
	fclose(f);
}
