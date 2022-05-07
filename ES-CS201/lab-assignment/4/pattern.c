#include <stdio.h>

void main() {

    /* a */

    int i,j, count = 4;

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    /* b */

    int space, rows = 3, k = 0;

    for (i = 1; i <= rows; ++i, k = 0) {
        for (space = 1; space <= rows - i; ++space) {
            printf("  ");
        }
        while (k != 2 * i - 1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    
    /* c */

    int n = 3;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
            
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    /* d */

    rows = 3;
    for (i = rows; i >= 1; --i) {
        for (space = 0; space < rows - i; ++space)
            printf("  ");
        for (j = i; j <= 2 * i - 1; ++j)
            printf("* ");
        for (j = 0; j < i - 1; ++j)
            printf("* ");
        printf("\n");
   }
}