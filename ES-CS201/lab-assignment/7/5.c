#include <stdio.h>

/*
Write a program in C to check whether a user given number is PRIME or NOT using
a user defined function prime(). 
 */

int prime(int i_num) {
    int i, count = 0;
    
    if (i_num == 0 || i_num == 1)
        count++;

    for (i = 2; i < i_num/2; i++)
    {
        if (i_num%i == 0)
            count++;        
    }
    if (count == 0)
        printf("%d is a prime number", i_num);
    else
        printf("%d is not a prime number", i_num);    
}

int main (int argc, char *argv[]) {
    int i_num;
    printf("Enter a number: ");
    scanf("%d", &i_num);
    
    prime(i_num);
    return 0;
}