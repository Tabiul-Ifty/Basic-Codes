#include<stdio.h>
int sd(int n)
{
    static int sum=0;
    if(n>0)
    {
        sum+=n%10;
        sd(n/10);
    }
    else
    {
        return sum;
    }
}

int main()
{
    int x,sum=0;
    printf("Enter the number :");
    scanf("%d",&x);

    sum=sd(x);

    printf("Sum of all digits is %d",sum);

    return 0;
}
