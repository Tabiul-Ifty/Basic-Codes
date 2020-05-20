//3.Write a C program to remove all characters in a input string except alphabet.
#include<stdio.h>
int main()
{
    char a[100];
    int i;

    printf("String:\n");
    gets(a);

    for(i=0 ; a[i]!='\0' ; i++)
    {
        if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<='z')

        {
            printf("%c",a[i]);
        }
    }



    return 0;


}

