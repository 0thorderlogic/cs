#include <stdio.h>

void main() {
    int i, num, sum = 0 ;   

    printf("Enter any number: ") ;   
    scanf("%d", &num) ;   

    for(i = 1 ; i < num ; i++)   
    {   
        if(num % i == 0)   
        sum += i ;   
    }    

    if (sum == num)   
        printf("\n %d is a Perfect Number", num) ;   
    else   
        printf("\n%d is not the Perfect Number", num) ; 
}