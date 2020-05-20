
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int len1, len2, max, min, carry, i, sum=0, count=0,result[100];
	printf("Enter your first number:\n");
	scanf(" %s",str1);
	printf("Enter your second number:\n");
	scanf(" %s",str2);

	len1=strlen(str1);
	len2=strlen(str2);
	max=len1;
	if(len1<len2)
    {
        max=len2;
    }

    strrev(str1);
    strrev(str2);

    carry=0;
    for(i=0; i<max; i++)
    {
        if(len1==len2 || (i<len1 && i<len2))
        {
            sum= ((str1[i]-'0')+(str2[i]-'0')+carry);
        }
        else if(i>len1)
        {
            sum=carry+(str2[i]-'0');
        }
        else if(i>len2)
        {
            sum=carry+(str1[i]-'0');
        }
        result[i]=sum%10;
        count++;
        carry=sum/10;

    }
    if(carry!=0)
    {
      result[count+1]=carry;
    }

    for(i=count-1; i>=0; i--)
    {
        printf("%d",result[i]);
    }


    return 0;
}
