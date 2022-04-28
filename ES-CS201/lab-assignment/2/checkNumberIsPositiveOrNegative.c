#include <stdio.h>

/* program to check positive or negative */

void main() {
    int i_num;

    printf("Enter a number: ");
    scanf("%d", &i_num);

    if (i_num >= 0)
    {
        if (i_num > 0)
        {
            printf("%d is positive", i_num);
        }
        else
        {
            printf("%d is zero", i_num);
        }
    }
    else
    {
        printf("%d is negative", i_num);
    }
    
}