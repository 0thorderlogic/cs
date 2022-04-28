#include <stdio.h>

void main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        
        printf("%3.0f \t %6.3f\n", fahr, celsius);
        
        // 3.0, 6.3 is the defined width of the output

        fahr = fahr + step;
    }
    
}