#include <stdio.h>

int fact(int n) {
    int answer = 1, i;
    for (i = 1; i <= n; i++)
    {
        answer *= i;
    }
    return answer;
}

void main() {
    int num, result = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = fact(num);
    printf("%d! is %d", num, result);
}