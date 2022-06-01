#include <stdio.h>

/*
Write a program in C to calculate Factorial of a user given number using a user
defined function fact(). 
 */

int fact(int num) {
    if (num == 1 || num == 0) 
        return 1;
    else
        return ((num * fact(num-1)));
}

int main (int argc, char *argv[]) {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d\n", fact(num));

    return 0;
}