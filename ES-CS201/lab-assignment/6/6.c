#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int len, v, c, d, spacebar, i;
    
    v = c = d = spacebar = 0;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    len = strlen(str);
    --len; // remove the \n char in the end
    printf("Length: %d\n", len);


    for (i = 0; str[i] != '\0'; i++) { 
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            v++;
        }
    }

    for (i = 0;  str[i] != '\0'; i++) {
        if (str[i] == '0' || str[i] == '1' ||  str[i] == '2' ||  str[i] == '3' ||  str[i] == '4' || str[i] == '5' || str[i] == '6' ||  str[i] == '7' ||  str[i] == '8' || str[i] == '9'){
            d++;
        }
    }

    for (i = 0;  str[i] != '\0'; i++) {
       if (str[i] == ' ') {
           spacebar++;
       }
    }
    
    c = (len - (v + d + spacebar));

    printf("Vowels: %d\nConsonent: %d\nDigits: %d\n", v, c, d);
}