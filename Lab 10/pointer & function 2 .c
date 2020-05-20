//declare an integer array and access array elements using pointers.
#include<stdio.h>
int main()
{
    int data[5],i;
    printf("enter elements:");

    for(i=0;i<5;i++)
    {
        scanf("%d",data+i);
    }

    printf("you entered :\n ");
    for(i=0;i<5;i++)
        printf("%d\n",*(data+i));//data'r address e jeta ache  seita print dibe .

    return 0;
}
