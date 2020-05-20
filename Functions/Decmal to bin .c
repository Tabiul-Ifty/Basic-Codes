#include<stdio.h>
int bin(int n)
{
    int bin=0;
    int rem,x=1,res=0,step=0;
    while(n!=0)
    {
        rem=n%2;
        //the next print shows how it works.
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n\n", step++, n, rem, n/2);
        n=n/2;
        bin=bin+rem*x;
        x*=10;
    }
    return bin;
}


int main()
{
    int a,B;
    printf("the Decimal Number:");
    scanf("%d",&a);

    B=bin(a);
    printf("The Binary Number is : %d",B);

    return 0;
}
