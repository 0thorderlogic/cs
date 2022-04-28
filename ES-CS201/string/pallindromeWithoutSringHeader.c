#include <stdio.h>
#include <stdlib.h>

void main() {
    char st[50];
    int i, length, begin = 0, end, mid;
    
    printf("Enter a string: ");
    gets(st);
    
    for (i=0; st[i] != 0; i++)
        length++;
    
    end = length - 1;
    mid = length/2;
    
    for (begin = 0;begin < mid; begin++)
    {
        if(st[begin] != st[end])
        {
            printf("Not a palindrome");
            exit;
        }
        end--;
    }
    if (begin == end)
        printf("It is a palindrome");
}