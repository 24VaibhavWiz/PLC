\\incomplete

#include"stdio.h"

int main()
{
	int r, c, graph[V][V];
	FILE *fp;
	fp = fopen("mat.txt","r");
	for(r=0;r<V;r++)
	{
		for(c=0; c<V; c++)
	 	{
			if (!fscanf(fp, "%lf", &graph[r][c]))
			break;
		}

	}
	
	fclose(fp);
	
}
