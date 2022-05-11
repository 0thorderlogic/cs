#include <stdio.h>

/* 
Features - 
    [*] Store a given number of elements of a particular data type i.e the list will be static
    [*] Write/Modify elements at a position
    [*] Read elements at a position
*/

void main() {
    int arr[100], i, count;
    printf("Enter a count of an array: ");
    scanf("%d", &count);

    printf("Elements of arrya: ");
    for (i = 0; i < count; i++)
        scanf("%d", &arr[i]);
    
    for (i = 0; i < count; i++)
        printf("| %d ", arr[i]);

    printf("|\n");    
}