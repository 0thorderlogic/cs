#include <stdio.h>

/* Program to print your name */

void main() {
    char name[3];

    printf("Enter your name: ");
    gets(name);
    puts(name);
}