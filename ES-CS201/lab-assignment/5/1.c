#include <stdio.h>

/* 
Problem Statement: 
Write a program in C to take 10 integers in an Array and display them. All cells of the
array should be initialized with the values ‘0’.
*/

int main() {
    int arr[9] = {0}, i, count = 10;

    printf("Enter 10 elemets to the array: ");
    for (i = 0; i < count; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < 10; i++)
        printf("| %d ", arr[i]);

    // asthetic output
    printf("|\n");
}