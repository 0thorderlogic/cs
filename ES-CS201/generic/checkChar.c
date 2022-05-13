#include <stdio.h>
int main() {

  char line[150];
  int vowels, consonant, digit, space;
  vowels = consonant = digit = space = 0;

  // get full line of string input
  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin);

  for (int i = 0; line[i] != '\0'; i++) {

    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
        ++vowels;

    else if ((line[i] >= 'a' || line[i] >= 'A' && line[i] <= 'z' || line[i] >= 'Z' ))
        ++consonant;

    // check if the character is a digit
    else if (line[i] >= '0' && line[i] <= '9')
        ++digit;

    // check if the character is an empty space
    else if (line[i] == ' ') {
        ++space;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);

  return 0;
}
