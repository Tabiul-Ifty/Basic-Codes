#include<stdio.h>
int main()
{
    int r,c,mat1[10][10],mat2[10][10],sum[10][10],i,j;

    printf("Number of Rows and Columns : ");
    scanf("%d %d",&r,&c);

    printf("matrix 1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&mat1[i][j]);
    }

    printf("matrix 2:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&mat2[i][j]);
    }


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

    return 0;


}
