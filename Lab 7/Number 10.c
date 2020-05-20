#include <stdio.h>
int main()
{
    int a[50], b[100];
    int n, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = -1;
    }


    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                b[j] = 0;
            }
        }

        if(b[i] != 0)
        {
            b[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(b[i] != 0)
        {
            printf("%d inputed %d times\n", a[i], b[i]);
        }
    }

    return 0;
}
