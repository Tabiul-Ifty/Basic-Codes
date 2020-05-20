#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x=1,res=1,n;
  printf("the value of n : ");
  scanf("%d",&n);

  for(;x<=n;x++)
    res=res*x;
  printf("result is %d",res);

    return 0;
}
