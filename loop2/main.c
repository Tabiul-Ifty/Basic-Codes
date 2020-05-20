#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j;
    printf("The value of n: ");
    scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
       for(j=1;j<=n-1;j++)
            printf("*");
          printf("\n");
   }
   return 0;

}
