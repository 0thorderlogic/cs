#include <stdio.h>

/* program to print the sum of all digits in a userdefined number */

void main() {
    int i_num, i_sum=0, i_rem;
    
    printf("Enter a number: ");
    scanf("%d", &i_num);

    while (i_num>0)
    {
        i_rem = i_num%10;
        i_num = i_num/10;
        i_sum = i_sum+i_rem;
    }
    printf("Sum: %d", i_sum);
}