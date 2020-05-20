#include<stdio.h>
void arraysort(int arr[],int siz)
{
    int t;
    for(int i = 0; i <siz; i++)
    {
        //int minpos = i;
        for(int j = i; j <siz; j++)
        {
            if(arr[i] < arr[j])
            {
                t = arr[i];
                arr[i]= arr[j];
                arr[j] = t;
            }
        }
    }
}
void arrayprint(int arr[],int siz)
{
    for(int i = 0; i <siz; i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[9] = {3,4,1,10,8,6,7,9,6};
    arrayprint(arr,9);
    printf("\n");
    arraysort(arr,9);
    arrayprint(arr,9);


    return 0;

}

