#include<stdio.h>
int main()
{
    int n,i,mini,a[5];

    printf("the value of n : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    mini=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<mini)
            mini=a[i];
    }

    printf("Minimum is %d",mini);

    return 0;
}

