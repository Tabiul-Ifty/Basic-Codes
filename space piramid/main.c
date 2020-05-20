#include <stdio.h>
#include <stdlib.h>
/* c programming about
****
 ***
  **
   *
*/


int main()
{
    int i,j,k,n;
    printf("the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       for(k=1;k<=i;k++)
            printf(" ");

       for(j=1;j<=(n-i+1);j++)
            printf("*");
            printf("\n");

    }

    return 0;
}
