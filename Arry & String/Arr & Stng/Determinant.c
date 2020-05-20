#include<stdio.h>
int main()
{
    int r,c,m[10][10],det,i,j;
    int a,b,z,d,e,f,g,h,k;

    printf("Number of Rows and Columns : ");
    scanf("%d %d",&r,&c);
    //3*3 matrix

    printf("matrix 1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&m[i][j]);
    }

    a=m[0][0];
    b=m[0][1];
    z=m[0][2];
    d=m[1][0];
    e=m[1][1];
    f=m[1][2];
    g=m[2][0];
    h=m[2][1];
    k=m[2][2];




    for(i=0;i<r;i++)
        {

        for(j=0;j<c;j++)
         det=(a*(e*k-z*h))-(b*(a*k-f*g))+(z*(d*h-e*g));
        }





    printf("determinant:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",det);
            printf("\n");
    }

    return 0;


}


