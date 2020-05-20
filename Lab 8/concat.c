#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],x[100];
    int i,j=0,l,k;
     printf("First string \n");
     gets(a);
     printf("Second string \n");
     gets(b);

     l=strlen(a);
     k=strlen(b);

     for(i=0;i<l;i++)
     {
         x[i]=a[i];

     }
        for(i=l;i<l+k;i++)
        {
           x[i]=b[j];
           j++;
        }

    x[i]='\0';
    puts(x);

     return 0;

}
