#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int arr[4] = {a, b, c, d};
    int max;
    
    for (int n = 0; n < 4; n++)
       if(arr[n]>max)
        max = arr[n];
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
