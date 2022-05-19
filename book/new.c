#include <stdio.h>

void main() {

    int arr[10], temp = 0;
    for (int i = 0; i < 10; i++) 
    {
        printf("Enter element number[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
        temp += arr[i];

    printf("Average of the 10 numbers: %.3f", ((float)(temp/10))); 
}
