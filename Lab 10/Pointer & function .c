//declare an array of characters in main function and print the character in SHOW function
#include<stdio.h>
void show(char a[5],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}

int main ()
{
    char arr[100];
    int n,i;
    printf("the value of n : ");
    scanf("%d",&n);

    printf("The elements : ");
    for(i=0;i<n;i++)

        scanf(" %c",&arr[i]);
        show(arr,n);

    return 0;
}
