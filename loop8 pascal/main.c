#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,x=1;
    printf("the vlue of n :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for (k=1;k<=n-i;k++)
            printf(" ");

        for(j=0;j<=i;j++)
        {

        if(j==0 || i==0)
        x=1;
        else
            x=x*(i-j+1)/j;

            printf("%d ",x);

        }

    printf("\n");
    }

    return 0;
}
