#include <stdio.h>

/* Program to find the sum of two matrices */

void main() {

    int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
    printf("Enter the number of rows and columns of matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix: ");

    for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
        scanf("%d", &first[c][d]);

    printf("Enter the elements of second matrix: ");

    for (c = 0; c < m; c++)
    for (d = 0 ; d < n; d++)
    scanf("%d", &second[c][d]);

    printf("Sum of entered matrices:-\n");

    for (c = 0; c < m; c++) 
    {
        for (d = 0 ; d < n; d++) 
    {
        sum[c][d] = first[c][d] + second[c][d];
        printf("%d", sum[c][d]);
    }
    printf("\n");
    }

}