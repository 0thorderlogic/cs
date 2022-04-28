#include <stdio.h>
#include <string.h>

/* Program to calculate the frequency of a specific character */

void main() {
    char st[5], c;
    int i, j, len, check = 0;
    
    printf("Enter a string: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%s", st[i]);
    }
    
    printf("Enter a character: ");
    scanf("%s",&c);
 
    len = strlen(st);
    
    for (i = 0; i <= len; i++)
    {
        if(st[i] == c)
        {
            check++;
        }
    }
    printf("Frequency of %s is %d", c, len);
}