#include <stdio.h>

/* program to divide two user defined number */

int main() {
    float f_num1, f_num2, f_result;

    printf("Input two numbers seperated by space: ");
    scanf("%f%f", &f_num1, &f_num2);

    f_result = f_num1/f_num2;
    printf("Resultant: %f", f_result);

    return 0;
}