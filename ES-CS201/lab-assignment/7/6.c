#include <stdio.h>

/*
Write a program in C to check whether a user given number is STRONG or NOT
using a user defined function strong(). 
 */
 
int fact(int r) {  
    int mul=1;  
    for(int i=1;i<=r;i++)  
        mul=mul*i;  
    return mul;  
}

int strong(int n) {
    int sum=0, k=n, r;  
    while(k!=0) {  
        r=k%10;  
        int f=fact(r);  
        k=k/10;  
        sum=sum+f;  
    }  

    if(sum==n)  
        printf("Number is a strong\n");  
    else  
        printf("Number is not a strong\n");  
    return 0;  
}  

int main (int argc, char *argv[]) {
    int n;
    printf("Enter a number: ");  
    scanf("%d",&n); 
    strong(n);
}