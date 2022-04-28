#include <stdio.h>

void main() {
    int a, *p;
    
    printf("Enter the value for a: ");
    scanf("%d", &a);

    p = &a;

    printf("The address of a is as per the address operator: %d\n", &a);
    printf("The address of a is as per the pointer operator: %d\n", p);

    printf("The value stored in variable a as per *p is: %d\n", *p);

    printf("Derefencing the value of a to 69\n");

    printf("Pre-Dereferencing value of a: %d\n", a);
    *p = 69;
    printf("Post-Dereferencing value of a: %d\n", a);
}