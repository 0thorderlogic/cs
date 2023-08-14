#include <stdio.h>

void update(int *a,int *b) {
    int temp = 0, *ptemp = &temp;
    
	*ptemp = *a;

    *a = *a + *b;
    *b = *ptemp - *b;

	if (*b <= 1) 
		*b *= -1;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}