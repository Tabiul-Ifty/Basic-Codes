//palindrome
#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,j,k,l;
    printf("the first string :\n ");
    gets(str1);

    i=strlen(str1);
    strcpy(str2,str1);
    strrev(str1);

    for(j=0;j<i;j++)
    {
        if(str1[j]==str2[j])
        {
            k=0;
            continue;
        }
        else
            k=1;
        break;
    }

    if(k==0)
        printf("palindrome");
    else if(k==1)
        printf("Not palindrome");

    return 0;

}
