#include<stdio.h>

void func(int x[][10], int r, int c)

{	int i,j;
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
			printf("%d ", x[i][j]);
		printf("\n");
	}
}
void main()

{	int i,j, row, col, mat[10][10];
	scanf("%d %d", &row, &col);

	for(i=0 ; i<row ; i++)
		for(j=0 ; j<col ; j++)
			scanf("%d", &mat[i][j]);

	func(mat, row, col);
}

