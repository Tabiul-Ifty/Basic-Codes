#include<stdio.h>
int main()
{
    int a[50],b[50],i,j=0,n,m;
    printf("Enter the Arrays :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Arrays :");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=n;i<n+m;i++)
    {
        a[i]=b[j];
        j++;
    }
    for(i=0;i<n+m;i++)
    {

        for(j=i+1;j<n+m;j++)
        {
            if(a[i]==a[j])
                printf("%d",a[i]);
        }
    }
    return 0;
}
