#include<stdio.h>
int main()
{
    int n,i,max,a[5];

    printf("the value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    printf("Maximum is %d",max);

    return 0;
}
