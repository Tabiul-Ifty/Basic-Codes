#include<stdio.h>
int main()
{
    int r[10],i,x;
    printf("The decimal number :");
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
