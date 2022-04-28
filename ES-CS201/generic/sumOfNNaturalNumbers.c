#include <stdio.h>

/* program to calculate sum of N natural numbers using for loop*/

void main() {
    int i_userNum, i_sum=0, i;

    printf("Enter the upper limit: ");
    scanf("%d", &i_userNum);

    for (i = 1; i <= i_userNum; i++)
    {
        i_sum = i+i_sum;
    }
    printf("The sum of natural numbers till the number - %d is: %d", i_userNum, i_sum);
}