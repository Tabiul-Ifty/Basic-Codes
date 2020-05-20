#include<stdio.h>
int main()
{
    char s[50];
    int i,v=0,c=0;
    printf("Enter your name : ");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]>='a'&&s[i]<='z')
       {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
       }
       else
        continue;

    }
    printf(" vowels are %d\n",v);
    printf("consonant are %d",c);
    return 0;
}
