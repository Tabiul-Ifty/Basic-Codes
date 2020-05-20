#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[100],str2[100];
    int len,flag;

    printf("First string :\n");
    gets(str1);

    len=strlen(str1);
    strcpy(str2,str1);
    strrev(str1);
    for(int i=0;i<len;i++)
    {
        if(str1[i]==str2[i])
        {
            flag=0;
            continue;
        }
        else
        {
            flag=1;
            break ;
        }
    }
    if(flag==0)
    printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;


}
