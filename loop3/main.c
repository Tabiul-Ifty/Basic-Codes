#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r,c;
    printf("The value of row : ");
    scanf("%d",&r);
    printf("The value of column : ");
    scanf("%d",&c);

    for (i=1;i<=r;i++)
   {
       for(j=1;j<=c;j++)
            printf("*");
          printf("\n");
   }
    return 0;
}
