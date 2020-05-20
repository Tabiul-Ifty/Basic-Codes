#include<stdio.h>
int main()
{
    int a[10][100],i,j,k=0;
    printf("the 3*3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==32)
            {
                printf("32 is found i a[%d][%d]\n",i,j);
                a[i][j]=67;
                k=1;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    if(k==0)
        printf("32 is NOT found");

    return 0;
}
