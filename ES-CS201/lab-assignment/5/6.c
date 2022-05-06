#include <stdio.h>  
   
/* 
Problem Statement:
Write a program in C to Add TWO Matrices and display the result.
*/

int main()  
{  
    int rows, cols;  
          
    //Initialize matrix a  
    int a[][3] = {  
                    {1, 0, 1},  
                    {4, 5, 6},  
                    {1, 2, 3}  
                };  
      
    //Initialize matrix b  
    int b[][3] = {  
                      {1, 1, 1},  
                      {2, 3, 1},  
                      {1, 5, 1}  
                 };  
      
    //Calculates number of rows and columns present in given matrix  
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      
    //Array sum will hold the result  
    int sum[rows][cols];  
      
    //Performs addition of matrices a and b. Store the result in matrix sum  
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
            sum[i][j] = a[i][j] + b[i][j];  
        }  
    }  
      
    printf("Addition of two matrices: \n");  
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
           printf("%d ", sum[i][j]);  
        }  
        printf("\n");  
    }  
   
    return 0;  
}  