#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main ()
{
    int F,n;
    printf("enter the number:");
    scanf("%d",&n);

    F=fact(n);

    printf("Factorial is %d",F);
    return 0;
}
