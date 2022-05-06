#include <stdio.h>

/* 
Problem Statement: 
Write a program in C to take 12 integers in a 2-D Array and display them.
*/

int main(){
   /* 2D array declaration*/
   int disp[4][3];
   
   /*Counter variables for the loop*/
   
   int i, j;
   for(i=0; i<4; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   
   //Displaying array elements

   printf("Two Dimensional array elements:\n");
   for(i=0; i<4; i++) {
      for(j=0;j<3;j++) {
        printf("| %d ", disp[i][j]);
        if(j==2){
            printf("\n");
        }
      }
   }
   return 0;
}