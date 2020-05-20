#include<stdio.h>
int main()
{
    int r,c,mat1[10][10],mat2[10][10],trans[10][10],i,j;

    printf("Number of Rows and Columns : ");
    scanf("%d %d",&r,&c);

    printf("matrix :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&mat1[i][j]);
            if(j==c-1);
            printf("\n\n");
    }


    for(i=0;i<r;i++)

        for(j=0;j<c;j++)
           {
           trans[j][i]=mat1[i][j];
           }

    printf(" Transpose:\n");
    for(i=0;i<r;i++)

        for(j=0;j<c;j++)
        {
             printf("%d  ",trans[i][j]);
            if(j==r-1)
            printf("\n\n");
        }



    return 0;


}

