#include <stdio.h>  
   
/* 
Problem Statement:
Write a program in C to take 12 integers in a 3-D Array and display them.
*/

int main() {
    int arr[3][2][2];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("Enter a element for matrix[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]); 
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("Element in matrix[%d][%d][%d]: %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }
}