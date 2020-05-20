//take  two M*N matrix and as a input of in main function and print the sum of them ...
#include<stdio.h>


int sum(int mat1[][10], int mat2[][10],int r, int c)
{

    int sum[10][10]={0},i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            sum[i][j]=mat1[i][j]+mat2[i][j];
    }

    printf("Sum:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",sum[i][j]);
            printf("\n");
    }
}


int main()
{
    int r,c,mat1[10][10],mat2[10][10],i,j;

    printf("Number of Rows and Columns : ");
    scanf("%d %d",&r,&c);

    printf("matrix 1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf(" %d",&mat1[i][j]);
    }

    printf("matrix 2:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf(" %d",&mat2[i][j]);
    }
    sum(mat1,mat2,r,c);

    return 0;

}
