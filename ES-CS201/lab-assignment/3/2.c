#include <stdio.h>

/* program to check if the nature of the number with switch case */

void main() {
    int f_num1;
    int i_choice;

    printf("Input two numbers seperated by space: ");
    scanf("%d", &f_num1);

    printf("Enter the choice of operation desired by you\n 1 - POSITIVE OR NEGATIVE \n 2 - ODD OR EVEN\n --> ");
    scanf("%d", &i_choice);

    switch (i_choice)
    {
    case 1:
        if (f_num1 >= 0)
        {
            if (f_num1 > 0)
                printf("Number is positive\n");
            else
                printf("Number is negative\n");
        }
        else
            printf("Number is negative");
        break;
    case 2:
        if ((f_num1%2) == 0)
        {
            printf("Number is even\n");
        }
        else   
            printf("Number is odd");
        
    default:
        printf("Invalid input by the user\n");
        break;
    }
}