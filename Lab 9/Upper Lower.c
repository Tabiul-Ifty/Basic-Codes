//upper case to lower case and lower case to upper case
#include<stdio.h>
char upper(char x)
{
 return(x-32);
}
char lower(char x)
{
    return (x+32);
}

int main()
{
    char u,l,n;
    printf("the Value of character : \n");
    scanf("%c ",&n);

    if(n>='A'&& n<='Z')
    {
        u=lower(n);
        printf("lower case is %c ",u);
    }
    else if (n>='a'&& n<='z')
    {
        l=upper(n);
        printf("upper case is %c ",l);
    }
    return 0;
}
