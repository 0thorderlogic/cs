#include <stdio.h>

/* 
Problem Statement: 
Write a program in C to take 5 integer values as input and display their average.
*/

void main() {
    int i, count = 6, disp[6], sum = 0;

    for(i=0; i < 5; i++) {
        printf("Enter value for disp[%d]:", i);
        scanf("%d", &disp[i]);
    }

    //calculation
    for (i = 0; i < count; i++)
        sum = sum + disp[i];

    printf("Sum of all values: %d", sum);
    printf("Average value: %f", ((float)(sum/5)));
}