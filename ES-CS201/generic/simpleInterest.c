#include <stdio.h>

void main() {
    float f_principal, f_time, f_rate_of_interest, f_interest;

    printf("Enter Principal amount, time (in years), rate of interest: ");
    scanf("%f%f%f", &f_principal, &f_time, &f_rate_of_interest);

    f_interest = ((f_principal*f_time*f_rate_of_interest)/100);

    printf("%f is the interest on the amount of %f at the rate of interest of %f in %f years", f_interest, f_principal, f_rate_of_interest, f_time);
}