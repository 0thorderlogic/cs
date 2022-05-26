#include <stdio.h>
#include <string.h>

// Don't use the string.h to do anything, write a user def fnc
// to calculate the length. As per the stupid question.

void main() {
	char a[100], b[200];

	printf("Your First name: ");
	fgets(a, 100, stdin);

	int limit;
	limit = strlen(a);
	limit--;

	for (int i = 0; i <= limit ; i++) {
		b[i] = a[i];
	}

	printf("Your Last name: ");
	fgets(b, 100, stdin);
	
	int new_limit;
	new_limit = strlen(b);

	for (int i = new_limit; i < 100; i++)
		b[i] = a[i-new_limit];

	printf("%s", b);

}
