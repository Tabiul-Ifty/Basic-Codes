#include<stdio.h>
#include<string.h>
int main()
{
    char a[20][20],b[20][20];
    int i,n,m,flag,j;
    printf("Enter the First matrix string : ");
    scanf("%d ", &n);
    for(i=0;i<n;i++)
    {
        gets(a[i]);
    }
    printf("Enter the Second matrix string : ");
    scanf("%d ", &m);
    for(j=0;j<m;j++)
    {
        gets(b[j]);
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            flag=0;
           int  l=strcmp(b[j],a[i]);
            int  k=strcmp(a[i],b[j]);
            if(l==k)
            {
                flag=1;
                break;
            }
            else
            continue;

        }

         if(flag==1)
       {
        printf(" Yes \n");
       }
        else
        printf(" No \n");

    }


    return 0;

}
