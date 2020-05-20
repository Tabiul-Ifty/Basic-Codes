#include <stdio.h>
void printPerfect(int start, int end)
{
    /* Iterates from start to end */
    while(start <= end)
    {
        if(isPerfect(start))
        {
            printf("%d, ", start);
        }

        start++;
    }
}

int isPerfect(int num)
{
    int i, sum;

    /* Finds sum of all proper divisors */
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int start, end;

    /* Input lower and upper limit to print perfect numbers */
    printf("Enter lower limit to print perfect numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print perfect numbers: ");
    scanf("%d", &end);

    printf("All perfect numbers between %d to %d are: \n", start, end);
    printPerfect(start, end);

    return 0;
}

