#include <stdio.h>

int main() {
    char str[] = "City 1", str2[] = "City 2";                                                   
    char* p, q;

    p = &str[0];

    printf("Address at p: %p\n", p);
    printf("Address by str[0]: %p, str[1]: %p\n", &str[0], &str[1]);

	while (*p != '\0')
    {
        printf("%c",*p);
        p++;
    }

	int arr[20] = {*(p++), 1, 2, 3, 4, 5, 6, 7};
	
	for(int i = 0; i < 8; i++) {
		printf("| %d", arr[i]);
	}
	printf(" |\n");

    return 0;
}