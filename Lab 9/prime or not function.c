//prime or not

#include<stdio.h>

int prime(int x)
{
      int i,flag;
      for(i=2;i<=x/2;i++)
      {
          if(x%i==0)
          {
              flag=0;
              break;
          }
      }

      if(flag==0)
            printf("Not prime");
      else
            printf("Prime");


}

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}


