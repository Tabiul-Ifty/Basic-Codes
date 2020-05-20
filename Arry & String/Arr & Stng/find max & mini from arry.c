//Find the max and mini elements from an Array .
#include<stdio.h>
int main ()
{
    int a[100],i,max,mini,n;

    printf("the size of array : \n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    mini=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];

    else if (a[i]<mini)
        mini=a[i];
    }
    printf("The max is %d\n",max);
    printf("The mini is %d\n",mini);

    return 0;
}

