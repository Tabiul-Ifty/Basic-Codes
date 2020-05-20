#include<stdio.h>

int prime(int x)
{
      int i,flag;
      for(i=2;i<=x/2;i++)
      {
          if(x%i==0)
          {
              flag=1;
              break;
          }

          if(flag==1)
            printf("Not prime");
          else
            printf("Prime");
      }

}

void main()
{
    int n,r;
    printf("Enter a number");
    scanf("%d",&n);
    r=prime(n);
    return 0;

}
