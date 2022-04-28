#include <stdio.h>

/* Get a^b without the pow function */

void main() {

    int base, exponent, result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);
    
    printf("Enter an exponent: ");
    scanf("%d", &exponent);
    
    for (exponent; exponent>0; exponent--)
    {
        result = result * base;
    }

    printf("\nAnswer = %d", result);

}