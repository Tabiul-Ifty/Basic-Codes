#include<stdio.h>
void bubble(int a[], int n)
{
    int i,j,k;
    for(i=0 ;i<n ;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
}

/*void printA(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}*/

int main()
{
    int arr[100];
    int n;

    printf("the size of array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    bubble(arr,n);

    printf("\n");

    for(int i=0;i<n;i++)
    {
      printf("%d",arr[i]);
    }




    return 0;
}

