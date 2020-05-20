#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[100]="Md.Tabiul";
    char str2[100]="Hasan";

    gets(str1);
    gets(str2);

    strcpy(str2,str1);

    puts(str2);



}
