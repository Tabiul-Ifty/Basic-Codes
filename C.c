#include<stdio.h>
int main()
{
    char str1[100],str2[100],str3[100];
    int i,j,k,l;

    printf("the first string:\n");
    gets(str1);

    printf("the second string:\n");
    gets(str2);

    l=strlen(str1);
    k=strlen(str2);

    printf("\nConcatenation: \n");

    for(i=0;i<l;i++)
    {
        str3[i]=str1[i];
    }
    j=0;
    for(i=l;i<l+k;i++)
    {
        str3[i]=str2[j];
        j++;
    }
    str3[i]='\0';
    puts(str3);
    return 0;
}
