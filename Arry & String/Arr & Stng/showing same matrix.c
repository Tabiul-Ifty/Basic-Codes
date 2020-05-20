#include<stdio.h>
void main()
{	int row, col, mat[10][10], i, j;
	scanf(" %d %d",&row, &col );
	for(i=0 ; i<row ; i++)
		for(j=0 ; j<col ; j++)
			scanf(" %d", &mat[i][j]);

	for(i=0 ; i<row ; i++)
	{	for(j=0 ; j<col ; j++)
			printf(" %d", mat[i][j]);
		printf("\n");
	}
}
