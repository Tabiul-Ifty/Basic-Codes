//union
#include<stdio.h>
int main ()
{
    int a[50],b[50],n,m,i,j=0;
    printf(" arrays for A  :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" arrays for B  :");
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
        if(a[i]==-1)
        {
            continue ;


        }
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]==a[j])
                a[j]=-1;
        }


    }
          for(i=0;i<n+m;i++)
    {
        if(a[i]!=-1)
            printf("%d",a[i]);
    }

    return 0;
}
