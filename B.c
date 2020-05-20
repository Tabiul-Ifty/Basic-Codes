//upper case or lower case using string
#include<stdio.h>
int main()
{
    char str1[100];
    int i,l;

    printf("the String :\n");
    gets(str1);

    l=strlen(str1);

    for(i=0;i<l;i++)
    {
        if(str1[i]>='A'&&str1[i]<='Z')
        {
            str1[i]=str1[i]+32;
        }
        else if (str1[i]>='a'&&str1[i]<='z')
        {
            str1[i]=str1[i]-32;
        }
        //puts(str1);//it will print 4 more times(one by one change korbe up or low)
    }
    puts(str1);


    return 0;
}
