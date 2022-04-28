#include <stdio.h>

void main() {
    int i_num1, i_num2, i_num3, i_result;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &i_num1, &i_num2, &i_num3);

    i_result = (i_num1 > i_num2 && i_num1 > i_num3)?i_num1:((i_num2 > i_num1 && i_num2 > i_num3)?i_num2:i_num3);

    printf("%d is the greatest", i_result);

}