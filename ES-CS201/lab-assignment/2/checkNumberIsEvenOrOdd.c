#include <stdio.h>

/* Program to check Odd or Even */

void main() {
    int i_num, i_remainder;

    printf("Enter a number: ");
    scanf("%d", &i_num);

    i_remainder = i_num%2;

    if (i_remainder == 0)
    {
        printf("%d is even", i_num);
    }
    else
    {
        printf("%d is odd", i_num);
    }

}