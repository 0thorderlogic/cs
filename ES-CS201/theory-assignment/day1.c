#include <stdio.h>

void main() {
    int i_num, i_choice, i_check_rem;

    printf("Enter any number: ");
    scanf("%d", &i_num);

    printf("Enter the choice of operation desired by you\n 1 - Check if the number is positive or negative\n 2 - Check if the number is odd or even\n --> ");
    scanf("%d", &i_choice);

    switch (i_choice)
    {
    case 1:
        if (i_num>=0)
        {
            if (i_num>0)
            {
                printf("Number is positive");
            }
            else
            {
                printf("Number is 0 - zero");
            }
        }
        else 
        {
            printf("Number is negative");
        }
        break;

    case 2: 
        i_check_rem = i_num%2;

        if (i_check_rem==0)
        {
            printf("Number is even");
        }
        else
        {
            printf("Number is odd");
        }
        break;

    default:
        printf("Invalid input by the user");
        break;
    }
}