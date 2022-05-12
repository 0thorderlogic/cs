#include <stdio.h>

int sumofelements(int a[], int size) {
    int i, sum = 0;
    for (int i = 0; i < size; i++)
        sum += a[i];
    return sum;    
}

int main () {
    int a[7] = {1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    int total = sumofelements(a, size);
    printf("Sum-total: %d", total);

    return 0;
}