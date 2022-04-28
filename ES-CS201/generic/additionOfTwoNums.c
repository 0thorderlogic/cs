#include <stdio.h>

/* program to add two user defined number */

int main() {
    int i_num1, i_num2, i_result;

    printf("Enter two numbers seperated by space: ");
    scanf("%d%d", &i_num1,&i_num2);

    i_result = i_num1 + i_num2;
    printf("Resultant: %d\n", i_result);

    return 0;
}