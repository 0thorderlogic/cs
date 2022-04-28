#include <stdio.h>

/* 
Program output -->
0
01
012
0123
01234
012345
0123456
01234567
012345678

 */

void main() {

    int i,j, count = 10;

    for (i = 0; i < count; i++)
    {

        for (j = 0; j < i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}