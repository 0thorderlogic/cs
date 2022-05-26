#include <stdio.h>

void main() {
	char str[100], str_copy[100];

	printf("Enter a string: ");
	fgets(str, 100, stdin);

	int limit=0;

	for (int i = 0; i < 100; i++) {
		if (str[i] != '\0')
			limit++;
		else
			break;
	}

	for (int i = 0; i <= limit ; i++)
		str_copy[i] = str[i];

	printf("%s", str_copy);
}

