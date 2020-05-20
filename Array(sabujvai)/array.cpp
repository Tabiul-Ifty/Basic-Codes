#include<stdio.h>
int main()
{
    int arr[6] = {1,2,3,5,7,9};
    int x;
    scanf("%d",&x);
    int a2[7] = {0};
    int val = 0;
    for(int i = 0; i <7; i++)
    {
        if(arr[i] < x)
        {
            a2[i] = arr[i];
        }
        else
        {

            if(val == 0)
            {
                a2[i] = x;
                val = 1;
            }
            else
            {
                a2[i] = arr[i-1];
            }

        }
    }
    for(int i = 0; i <7; i++)
    {
        printf("%d ",a2[i]);
    }
    return 0;


}
