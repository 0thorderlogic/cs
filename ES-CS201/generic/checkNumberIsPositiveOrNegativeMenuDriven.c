#include <stdio.h>

/* program to check positive or negative */

void main() {
    int i_num, i_switch;

    printf("Enter a number: ");
    scanf("%d", &i_num);

    if (i_num >= 0)
    {
        if (i_num > 0)
        {
            i_switch = 1;
        }
        else
        {
            i_switch = 0;
        }
    }
    else 
    {
        i_switch = 2;
    }

    switch (i_switch)
    {
    case 0:
        printf("%d is 0 ( zero )", i_num);
        break;

    case 1:
        printf("%d is a positive number", i_num);
        break; 

    case 2: 
        printf("%d is a negative number", i_num);
        break;

    default:
        printf("Invalid input - Please restart the program to use it again.\n");
        break;
    }   
}