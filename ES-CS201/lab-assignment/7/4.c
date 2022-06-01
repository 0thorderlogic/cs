#include <stdio.h>

/* 
Write a program in C to check whether a user given number is PERFECT or NOT
using a user defined function.
 */
 
int perfect_num(int num) {
    int i, sum = 0 ;   

    for(i = 1 ; i < num ; i++)   
    {   
        if(num % i == 0)   
        sum += i ;   
    }    

    if (sum == num)   
        printf("%d is a Perfect Number\n", num) ;   
    else   
        printf("%d is not the Perfect Number\n", num) ; 

}
int main (int argc, char *argv[]) {
    int num;
    printf("Enter any number: ");   
    scanf("%d", &num);   
 
    perfect_num(num);
    return 0;
}