
#include<stdio.h>
int main ()
{
    float a[5];
    int n,i;

    printf("The value of n : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf(" %f",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("%f\n",a[i]);
    }
    return 0;

}

