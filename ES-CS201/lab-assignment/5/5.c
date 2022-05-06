#include <stdio.h>

/* 
Problem Statement: 
Write a program in C to store temperature of Two cities of a week and display them.
[Consider City name as ‘City 1’ and ‘City 2’. Use a 2-D array to store City Name and
Temperature]
*/

void main() {
    int city1[10], city2[6], i;

    printf("\nCity temp program\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");

    // city 1
    printf("\nCity 1 Temparates:\n");
    for (i = 0; i < 7; i++)
    {
        printf("Temperature for day: ");
        scanf("%d", &city1[i]);
    }

    // city 2
    printf("\nCity 2 Temparates:\n");
    for (i = 0; i < 7; i++)
    {
        printf("Temperature for day: ");
        scanf("%d", &city2[i]);
    }
    
    printf("\n\nRecorded Temps for City 1 and 2 respectively\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    for (i = 0; i < 7; i++)
        printf("Temperature for: %d\n", city1[i]);

    printf("+++++++++++++++++++++++++++++++++++++++++++\n");

    for (i = 0; i < 7; i++)
        printf("Temperature for: %d\n", city2[i]);

}