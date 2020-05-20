//2.Write a C program to calculate the GCD of two numbers using recursive function GCD(m,n).Recursion function
#include<stdio.h>
int GDP(int a, int b)
{

    if(b==0)
        return a;
    else
        return (b,(a%b));
}

int main()
{
    int x,y,G;
    printf(" the value of X & Y : ");
    scanf("%d %d",&x,&y);

    G=GDP(x,y);

    printf("GDP is %d",G);
    return 0;
}

