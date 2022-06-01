#include <stdio.h>

/*
Write a program in C to display Fibonacci Series upto a user given range using
recursive function. 
*/

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
   int n = 5;
   int i;
   for(i = 0;i<n;i++) {
      printf("%d ",fibbonacci(i));            
   }
}