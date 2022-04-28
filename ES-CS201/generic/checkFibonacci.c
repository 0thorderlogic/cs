#include <stdio.h>

/* Program to print fibonacci series till a user given limit */

void main() {
    
    int limit, i, third, first=0, second=1;
    
    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("%d\n%d\n", first, second);

    for (i = 2; i < limit; i++)
    {
        third = first + second;
        printf("%d\n", third);

        first = second;
        second = third;
    }
    
}