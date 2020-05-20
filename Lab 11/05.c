#include<stdio.h>

int maximum(int a[],int n)
{
     int x,i;
     x=a[0];
     for(i=0;i<n;i++)
     {
         if(x<a[i])
         {
            x=a[i];
         }

     }
     return x;
}
int minimum(int a[],int n)
{

       int y,i;
        y=a[0];
    for(i=0;i<n;i++)
    {
        if(y>a[i])
        {
            y=a[i];
        }

    }
    return y;
}
int sub(int max,int min)
{
    return max-min;
}



int main()
{
    int a[50],i,j,max,min,d,n,O;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the array elements %d .",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=maximum(a,n);
    min=minimum(a,n);
    d=sub(max,min);

    printf("maximum %d\n",max);
    printf("minimum %d\n",min);
    printf("subtraction %d\,",d);

    if(d%2==0)
        printf("even");
    else
        printf("odd");

    return 0;
}
