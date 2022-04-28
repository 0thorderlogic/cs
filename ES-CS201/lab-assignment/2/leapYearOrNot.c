#include <stdio.h>

/* Program to check if the entered year is a leap year */

void main() {
    
    int i_year;

    printf("Enter the year: ");
    scanf("%d", &i_year);

    if ((i_year%4) == 0 && (i_year%100) != 0)
        printf("Year is leap year!");
    else
        printf("Year isn't leap year!");

}