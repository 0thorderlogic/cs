#include <stdio.h>
#include <stdlib.h>

/* A program to print prime numbers between 2 and 30 */

void main() {
    int lower_limit = 2, upper_limit = 30, i, num, j, count = 0, sum = 0;

    printf("Prime numbers between %d and %d:- \n", lower_limit, upper_limit);

    for (i = lower_limit; i < upper_limit; i++)
    {
        count = 0;

        for (j = lower_limit; j < i; j++)
        {
            if ((i%j) == 0)
            {
                count++;
                exit;
            }
            
        }
        if (count == 0)
        {
            sum = sum + i;
        }
        
    }
    
    printf("Sum of all prime numbers: %d\n", sum);

}