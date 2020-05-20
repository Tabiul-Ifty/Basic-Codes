
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n;
    printf("the vlue of n :");
    scanf("%d",&n);

    printf("the vlue of k :");
    scanf("%d",&k);

      for (i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
           {

            printf("%d",i);

        printf("\n");
           }

      for(i=1;i>=n;i--)

        for(j=i-1;j>=k-1;j--)
        {
            printf("%d",i);
        printf("\n");
        }
    }
return 0;

}
