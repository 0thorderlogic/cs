#include <stdio.h>

/* program to divide two user defined number */

int main() {
    int i_num1, i_num2; 
    float f_result;

    printf("Input two numbers seperated by space: ");
    scanf("%d%d", &i_num1, &i_num2);

    f_result = (float)i_num1/i_num2;
    printf("Resultant: %f", f_result);

    return 0;
}