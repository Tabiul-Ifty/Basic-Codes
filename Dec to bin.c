//decimal to binary
#include<stdio.h>
int main ()
{
    /*int n,x=1,res=0,rem;

    printf("the value of n : ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%2;
        res=rem*x+res;
        n=n/2;
        x=x*10;
    }
    printf("Octal Number is %d",res);*/

    int i,x,r[100];
    printf("the value of x; ");
    scanf("%d",&x);

    for(i=0;x!=0;i++)
    {
        r[i]=x%2;
        x=x/2;
    }
    for(int j=i-1;j>=0;j--)
        printf("%d",r[j]);

    return 0;
}

