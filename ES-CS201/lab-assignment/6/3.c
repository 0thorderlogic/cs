#include <stdio.h>
#include <stdbool.h>

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
	bool at = false, dot, no_space;
	for (int i = 0; i < limit; i++) {
		if ( str[i] == '@' )
			at = true;
		if ( str[i] == '.' )
			dot = true;
		if ( str[i] != ' ')
			no_space = true;
	}
	if (at && dot && no_space) 
		printf("Valid Email\n");
	else 
		printf("Invalid email\n");
}

