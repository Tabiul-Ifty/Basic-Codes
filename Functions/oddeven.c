/**
 * Recursive function to print even or odd numbers in a given range.
 */
#include <stdio.h>

void printEvenOdd(int cur, int limit)
{
    if(cur > limit)
        return ;

        else if(cur==limit)
            return;




    //Recursively call to printEvenOdd to get next value
    printEvenOdd(cur + 2, limit);

  printf("%d, ", cur);


}

int main()

{
    int lowerLimit, upperLimit;

    // Input lower and upper limit from user
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);


    printEvenOdd(lowerLimit, upperLimit);
     printf("Even/odd Numbers from : %d ", lowerLimit, upperLimit,printEvenOdd);

    return 0;
}

