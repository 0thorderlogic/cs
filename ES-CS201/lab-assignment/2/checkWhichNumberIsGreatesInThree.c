#include <stdio.h>

/* Program to check which number is greatest amongst three */

void main() {

    int i_num1, i_num2, i_num3;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &i_num1, &i_num2, &i_num3);

    if (i_num1 > i_num2 && i_num1 > i_num3)
        printf("%d is the greatest", i_num1);
    else if(i_num2 > i_num3 && i_num2 > i_num1)
        printf("%d is the greatest", i_num2);
    else
        printf("%d is the greatest", i_num3);

}