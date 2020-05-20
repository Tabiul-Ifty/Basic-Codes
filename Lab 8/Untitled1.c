#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[10],str2[10];
    int l,k,m,flag;

    printf("First string : ");
    gets(str1);

    printf("Second string : ");
    gets(str2);

    l=strlen(str1);
    k=strlen(str2);
    if(l>k)
        m=l;
    else
        m=k;
    for(int i=0;i<l;i++)
    {
        if(str1[i]==str2[i])
        {

              flag=0;
        continue ;
        printf("Equal");
        break;

        }
          else if (str1[i]<str2[i])
          {
              flag=1;
              break;
             printf("1st is greater thn 2nd");
             break;
          }
          else if (str1[i]>str2[i])
          {
             flag=-1;
              break ;
              printf("1st is less thn 2nd");
              break;
          }
    }

    if(flag==0)
    {
        printf("000000");
    }
    else if(flag==1)
    {
        printf("111111111111 ");

    }

    else if(flag==-1)
    {
        printf("-1111111");
    }

    return 0;

}
