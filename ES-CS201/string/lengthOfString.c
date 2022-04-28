#include <stdio.h>
#include <string.h>

/* Program to print the length of string */

void main() {

    char input[100];
    int length = 0;
    
    printf("Enter a string: ");
    gets(input);
    
    length = strlen(input);
    printf("The length of the string: %d", length);

}