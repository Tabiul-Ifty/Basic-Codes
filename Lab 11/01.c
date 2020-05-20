//01.Write a C program to check whether a number N can be expressed as sum of two prime numbers.
//Hints: write a prime(n) function to check the number n is prime or not?
#include<stdio.h>
int prime(int x)
{
    int i,f=1;
    for(i=2;i<=x/2;i++)
        if(x%i==0)
        {
            f=0;
            break;
        }
        return f ;
}
int main()
{
    int n,i,flag=0;
    printf("enter a value: ");

    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(prime(i)==1)
        {
            if(prime(n-i)==1)
            {
                printf("%d= %d + %d\n",n,i,n-i);

                flag=1;
            }
        }
    }

    return 0;
}

