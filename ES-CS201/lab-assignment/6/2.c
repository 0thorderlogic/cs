#include <stdio.h>

void main() {
	char str[100];

	printf("Enter a string: ");
	fgets(str, 100, stdin);

	int limit=0;

	for (int i = 0; i < 100; i++) {
		if (str[i] != '\0')
			limit++;
		else
			break;
	}
	printf("%d", limit-1);
}

