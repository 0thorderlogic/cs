#include <stdio.h>
#include <string.h>

/* Program to print the length of string */

void main() {

    char input[100] = "naman", reverse[100];
    int result;
    
    // strcpy, strrev, strcmp
    
    // printf("Enter a string: ");
    // gets(input);

    strcpy(reverse, input);

    strrev(reverse);
    puts(reverse);
    
    result = strcmp(reverse, input);

    if (result == 0)
        printf("Yes they are pallindrome!");
    else
        printf("No they aren't pallindrome!");

}