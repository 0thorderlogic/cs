#include <stdio.h>

void main() {
	char str[100];
	int limit = 0;
	
	printf("Enter a string: ");
	fgets(str, 100, stdin);
	for (int i = 0; i <= 100 ; i++) {
		if (str[i] != '\0')
			limit++;
		else 
			break;
	}

	limit--;

	for (int i = limit; i >= 0 ; i--)
		printf("%c", str[i]);
	printf("\n");
}
