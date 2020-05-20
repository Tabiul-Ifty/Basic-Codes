//take two integers in the main function . Write a SWAP function to exchange them .
#include <stdio.h>

void swap( int *a, int *b )
{
   int temp;
   temp= *a;  *a= *b;  *b = temp ;
   printf ("a=%d  b=%d\n", *a, *b);
}

int main ( )
{
   int a , b;
   printf("the value of a : ");
   scanf("%d",&a);
   printf("the value of b : ");
   scanf("%d",&b);

   swap (&a, &b) ;
   printf("a=%d b=%d\n",a,b) ;

   return 0 ;
}
