#include <stdio.h>

void main() {
    int a, *p, **q, ***r;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("Address -\n");
    printf("%d - *p",*p);
    printf("The value at *p is: ", &*p);
}

