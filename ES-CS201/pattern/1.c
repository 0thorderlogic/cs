#include <stdio.h>

/* 
Program output -->
*
**
***
****
*****
******
*******
********
*********

 */

void main() {

    int i,j, count = 10;

    for (i = 0; i < count; i++)
    {

        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}