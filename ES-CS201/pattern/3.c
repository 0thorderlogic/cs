#include <stdio.h>

/* 
Program output -->
1
12
123
1234
12345
123456
1234567
123456
12345
1234
123
12
1

 */

void main() {

    int  n, x, y;

    printf("Enter the number of rows to show number pattern: ");
    scanf("%d",&n);

    for(int x = 1; x < n; x++)
    {
        for(int y = 1; y <= x; y++)
        printf("%d",y);
        printf("\n");
    }
    for(int x = n; x >= 0; x--)
    {
        for(int y = 1; y <= x; y++)
        printf("%d",y);
        printf("\n");
    }
}