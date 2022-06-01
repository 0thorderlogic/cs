#include <stdio.h>

/* 
Write a program in C to calculate LCM of Two user given numbers using a recursive
function.
 */

int lcm(int n1, int n2, int max) {

    if (max % n1 == 0 && max % n2 == 0)
        return max;
    else
        lcm(n1, n2, max+1);
}

int main() {
    int max, answer, n1, n2;

    printf("Enter two values for lcm: ");
    scanf("%d%d", &n1, &n2);
    
    max = (n1 > n2) ? n1 : n2;
    answer = lcm(n1, n2, max);
    printf("%d", answer);
}