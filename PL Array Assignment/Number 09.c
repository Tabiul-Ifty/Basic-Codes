#include<stdio.h>
int main()
{
    int a[50],b[50],i,j=0,n,m;
    printf(" how many Numbers in array A :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("How many numbers in array in B  ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
   for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          if(a[i]==b[j])
          {
              a[i]=-1;
          }
      }
  }
  for(i=0;i<n;i++)
  {
      if(a[i]!=-1)
      {
          printf("%d",a[i]);
      }
  }
  return 0;
