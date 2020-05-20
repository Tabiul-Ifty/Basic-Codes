#include<stdio.h>
int main ()
{
    char a[5];
    int n,i;

    printf("The value of n : ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        scanf(" %c",&a[i]);
    }

    for(i=n-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}

