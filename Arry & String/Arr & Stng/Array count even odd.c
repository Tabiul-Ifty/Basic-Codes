//using array count the even and odd number in the elements
#include<stdio.h>
int main ()
{
    int a[100],i,n,even,odd;
    printf("the size of an array : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       // printf("enter your numbers :");
        scanf("%d",&a[i]);
    }

    even=0;
    odd=0;
    for (i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else if(a[i]%2!=0)
            odd++;
        else
        printf("nothing");

    }

    printf("Total Even numbers = %d\n",even);
    printf("Total odd numbers = %d\n",odd);
    return 0;
}
