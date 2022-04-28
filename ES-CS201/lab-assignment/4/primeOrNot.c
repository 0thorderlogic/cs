#include <stdio.h>

void main() {
    int i_num, i, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &i_num);

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