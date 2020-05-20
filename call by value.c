#include<stdio.h>
void swap(int a , int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main ()
{
    int x,y;
    printf("print x and y : ");
    scanf("%d %d",&x,&y);
    swap(x,y);
    printf("x=%d y=%d",x,y);
}
