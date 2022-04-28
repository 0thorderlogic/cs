#include <stdio.h>

/* program to find average of five numbers */

int main() {
    int i_num1, i_num2, i_num3, i_num4, i_num5;
    float f_result;

    printf("Input five numbers seperated by spaces: ");
    scanf("%d%d%d%d%d", &i_num1, &i_num2, &i_num3, &i_num4, &i_num5);

    f_result = (float)((i_num1+i_num2+i_num3+i_num4+i_num5)/5);

    printf("Average Value: %f\n", f_result);

    return 0;
}