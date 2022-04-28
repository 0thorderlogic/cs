#include <stdio.h>

/* Program to input numbers into array */

void main() {

    int arr[5], i;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
}