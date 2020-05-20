#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,n;
     printf("The value of n: ");
     scanf("%d",&n);



    for (i=1;i<=n-1;i++)
   {
       for(j=1;j<=n;j++)
       {
           printf("%d ",j);
            printf("\n");
       }

   }




    return 0;
}
