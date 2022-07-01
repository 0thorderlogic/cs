#include <stdio.h>
#include <stdlib.h>

int power(int n, int m) {
    int res = 0;
    for (int i = 1; i <= m; i++)
        res = res * n;
    
    return res;
}

int main() {
    int i_num1, i_num2;
    float res;
    char operator;
    printf("Example -> 6-9 or 6^5\n");
    printf("Enter two numbers with the operation in between: ");
    scanf("%d%c%d", &i_num1, &operator, &i_num2);

    switch(operator) {
        case '/':
            if (i_num2 == 0) {
                printf("Undefined!\n");
                goto exit;
            }
            else {
                res = (float)(i_num1/i_num2);
                printf("Result of the operation is: %f\n", res);
                goto exit;
            }
        case '*': res = (i_num1*i_num2);
            break;
        case '+': res = (i_num1+i_num2);
            break;
        case '-': res = (i_num1-i_num2);
            break;
        case '^': res = power(i_num1, i_num2);
            break;
        default: 
            goto fail;
            break;
    }

    printf("Result of the operation is: %0.2f\n", res);
    goto exit;

    exit: 
        return 0;

    fail: 
        printf("Syntax Error!\n");
}

