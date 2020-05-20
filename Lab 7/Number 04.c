#include<stdio.h>
int main ()
{

    int n,i,a[5],sum=0;

    printf("The value of n : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
       sum=sum+a[i];
    }

    printf("%d",sum);

    return 0;
}


