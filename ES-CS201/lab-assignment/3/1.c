#include <stdio.h>

/* program to perform basic mathematics with switch case */

void main() {
    float f_num1, f_num2, f_result;
    int i_choice;

    printf("Input two numbers seperated by space: ");
    scanf("%f%f", &f_num1, &f_num2);

    printf("Enter the choice of operation desired by you\n 1 - Addition\n 2 - Subtraction \n 3 - Multiplication \n 4 - Division\n --> ");
    scanf("%d", &i_choice);

    switch (i_choice)
    {
    case 1:
        f_result = (f_num1+f_num2);    
        printf("The result is: %f", f_result);
        break;
    case 2:
        f_result = (f_num1-f_num2);    
        printf("The result is: %f", f_result);
        break;
    case 3:
        f_result = (f_num1*f_num2);    
        printf("The result is: %f", f_result);
        break;
    case 4:
        f_result = (f_num1/f_num2);    
        printf("The result is: %f", f_result);
        break;  
    default:
        printf("Invalid input by the user\n");
        break;
    }
}