//power of a number using Function
#include<stdio.h>
int power(int base, int powR)
{
    if(powR!=0)
        return (base*power(base,powR-1));
    else
        return 1;
}

int main ()
{
    int base , powR,result;
    printf("the base number :");
    scanf("%d",&base);
    printf("the power : ");
    scanf("%d",&powR);

    result=power(base,powR);
    printf("%d^%d=%d",base,powR,result);
    return 0;
}
