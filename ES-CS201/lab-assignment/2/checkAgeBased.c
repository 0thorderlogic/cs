#include <stdio.h>

/* Program to check based the persons' age limit */

void main() {

    int i_age;

    printf("Enter your age: ");
    scanf("%d", &i_age);

    if (i_age >= 18 && i_age <= 60)
        printf("Person is an Adult");
    else if (i_age > 60)
        printf("Person is a Senior");
    else
        printf("Person is an Minor");
}