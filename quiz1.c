/*Find Number 32 in 2d matrix,
If you find this then 32 replace to 67.
If you don't find then give a output
that 32 is not found.*/
#include<stdio.h>
int main()
{
    int a[10][10],s[10][10],i,j,f=0;
    printf("Enter 3*3 matrix elements :\n");

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
               printf("32 found in a[%d][%d] place\n",i,j);
               a[i][j]=67;
               f=1;
           }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    if(f==0)
    {
        printf("32 is not found :");
    }

    return 0;
}
