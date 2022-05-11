#include <stdio.h>

int increment(int *p) {
    *p = (*p) + 1;
    printf("Address of variable passed in increment fnc: %p\n", p);
    return *p;
}

void main() {
    int a, *p;
    printf("Enter a number: ");
    scanf("%d", &a);
    p = &a;
    a = increment(p);

    printf("Address of variable store in main fnc: %p\n", p);
    printf("Value of a: %d\n", a);
}