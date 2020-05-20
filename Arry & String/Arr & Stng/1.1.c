#include<stdio.h>
#include<conio.h>
void main()
{
  long int n,m=1,rem,ans=0;
  printf("\nEnter Your Decimal No : ");
  scanf("%d",&n);


  while(n>0)
    {
      rem=n%8;
      ans=(rem*m)+ans;
      n=n/8;
      m=m*10;
    }
  printf("\nConvert into Octal No is : %d",ans);
}
