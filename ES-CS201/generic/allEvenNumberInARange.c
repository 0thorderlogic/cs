#include <stdio.h>

/* program to print all even and off numbers */

void main() {
    int i_upper, i_lower, i_evenNumbers, i;

    printf("Enter upper limit and lower limit: ");
    scanf("%d%d", &i_upper, &i_lower);

    for (i = i_lower; i < i_upper; i++)
    {
        if (i%2==0)
        {
            printf("%d is even\n", i);
        }
        else
        {
            printf("%d is odd\n", i);
        }
        
    }
    
}