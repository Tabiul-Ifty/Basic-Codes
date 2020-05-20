#include<stdio.h>

    int main()
{
   int i,j,n,k;
   printf("the value of n : ");
   scanf("%d",&n);


   for(i=1;i<n*2;i++)
   {
       for(j=1;j<=(n-i+1);j++)
        printf("*");
       printf("\n");

   }

   for(i=2;i<=n;i++)
   {
       for(k=1;k<=i;k++)
        printf("")
   }

   for (i=1;i<=n;i++)
   {
       for(k=1;k<=1;k++);

       printf(" ");
       printf("\n");

  for(j=1;j<=(n-i+1);j++)
            printf("*");
        printf(" ");
   }

    return 0;
}

