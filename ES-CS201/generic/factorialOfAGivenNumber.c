#include <stdio.h>

/* program to calculate factorial of a given number */

void main() {
    int i_userNum, i_factorial=1, i;

    printf("Enter the number: ");
    scanf("%d", &i_userNum);

    for (i = i_userNum; i > 0; i--)
    {
        i_factorial = i_factorial*i;
    }
    printf("Factorial of %d that is %d! is: %d\n", i_userNum, i_userNum, i_factorial);
}