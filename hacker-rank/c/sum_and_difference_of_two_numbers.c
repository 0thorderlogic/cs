#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float float1, float2;
    
    scanf("%d%d", &num1, &num2);
    scanf("%f%f", &float1, &float2);
    
    printf("%d %d\n", num1+num2, num1-num2);
    printf("%.1f %.1f", float1+float2, float1-float2);
    
    
    return 0;
}
