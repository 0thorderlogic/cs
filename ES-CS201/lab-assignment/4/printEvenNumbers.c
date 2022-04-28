#include <stdio.h>

void main() {
    int limit, i;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (i = 0; i < limit; i+=2)
        printf("%d is an even number\n", i);    
}