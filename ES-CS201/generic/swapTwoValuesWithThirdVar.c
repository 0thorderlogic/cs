#include <stdio.h>

/* program to swap two variables with a third variable */

int main() {
    int i_num1, i_num2, temp_swap;

    printf("Input two numbers seperated by space: ");
    scanf("%d%d", &i_num1, &i_num2);

    temp_swap = i_num1;
    i_num1 = i_num2;
    i_num2 = temp_swap;

    printf("First variable: %d\n", i_num1);
    printf("Second variable: %d\n", i_num2);

    return 0;
}