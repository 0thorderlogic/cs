#include <stdio.h>

int main() {
    system("clear");
    printf("Hello, this program converts celsius to farenhite\n");

    int upper, lower, step;
    float fahr, celsius;

    upper = 300; /* Upper limit */
    lower = 0; /* Lower limit */
    step = 20; /* Step */

    celsius = lower;
    while ( celsius <= upper)
    {
        fahr = ((9.0)*(celsius))/(5.0) + 32.0;

        printf("%3.0f \t %6.3f\n", fahr, celsius);

        celsius = celsius + step;
    }
    
}