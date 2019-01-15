#include "stdio.h"
void main()
{
	int row, col, i, j, value;
	FILE *source, *target;
	source = fopen("source.txt", "r");
	
	fscanf(source, "%d %d %d", &row, &col, &value);
	int matrix[row][col];
	for(i = 0; i < row; i++)
		for(j = 0; j < col; j++)
				matrix[i][j] = 0;
	
	while(!feof(source))
	{
		fscanf(source, "%d %d %d", &i, &j, &value);
		matrix[i][j] = value;
	}
	fclose(source);

	target = fopen("target.txt", "w");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
				fprintf(target, "%d ", matrix[i][j]);
		fprintf(target, "\n");
	}
	fclose(target);
}
