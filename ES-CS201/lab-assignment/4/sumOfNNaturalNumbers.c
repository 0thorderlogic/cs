#include <stdio.h>

void main() {
    int i_limit, i, sum = 1,  sum2 = 1;
    
    printf("Enter a limit: ");
    scanf("%d", &i_limit);

    for (i = 1; i <= i_limit; i++)
    {
        sum += i;
    }
    printf("Sum of first n natural numbers: %d\n", sum);
}