//declare an array of integer numbers in main function and sort the numbers in SORt function & print the out puts

#include<stdio.h>
void swap( int *a, int *b )
{
   int temp;
   temp= *a;  *a= *b;  *b = temp ;
   //printf ("a=%d  b=%d\n", *a, *b);
}
int sort(int a[], int n)
{
    int i,j;
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                swap(&a[i],&a[i+1]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}


int main ()
{
    int arr[100],n,i;
    printf("the numbers : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    return 0;
}
