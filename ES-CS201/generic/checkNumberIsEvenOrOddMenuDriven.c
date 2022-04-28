#include <stdio.h>

/* program to check even or odd number */

void main() {
    int i_num, i_check;

    printf("Enter a number: ");
    scanf("%d", &i_num);

    i_check=i_num%2;

    switch (i_check)
    {
    case 0:
        printf("%d is an even number", i_num);
        break;

    case 1:
        printf("%d is an odd number", i_num);
        break;    

    default:
        printf("Invalid input - Please restart the program to use it again.\n");
        break;
    }   
}