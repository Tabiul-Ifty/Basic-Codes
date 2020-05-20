//transpose.
#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],trns[50][50];
    int i,j,k,l,r,c;

    printf("the rows and columns :\n");
    scanf("%d %d",&r,&c);

    printf("the 1st matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            printf("\n");
        }
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
              trns[j][i]=a[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",trns[i][j]);
    }
    return 0;
}
