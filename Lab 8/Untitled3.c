#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    int i,len;
    printf("String \n");
    gets(str1);
    len=strlen(str1);

    for(i=0 ; i<len ; i++)
    {
        if(str1[i]>='A'&&str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
        }
       else if(str1[i]>='a'&&str1[i]<='z')
        {
           str1[i]=str1[i]-32;
        }
    }

    puts(str1);

     return 0;

}
