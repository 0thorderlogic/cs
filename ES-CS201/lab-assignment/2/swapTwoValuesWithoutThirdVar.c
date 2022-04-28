#include <stdio.h>

/* program to swap two variables without a third variable */

int main() {
    int i_num1, i_num2;

    printf("Input two numbers seperated by space: ");
    scanf("%d%d", &i_num1, &i_num2);

    i_num1 = i_num1 + i_num2;
    i_num2 = i_num1 - i_num2;
    i_num1 = i_num1 - i_num2;
    
    printf("First variable: %d\n", i_num1);
    printf("Second variable: %d\n", i_num2);

    return 0;
}