#include <stdio.h>

int boobTOaooa () {
    char c[5] = "Boob";
    printf("%s\n", c);

    char *pointer;
    pointer = &c[0];
    *pointer = *(pointer+3) = 'a'; // changing boob to aooa
    printf("%s\n", c);
}

int print(char *c) {
    while (*c = '\0') {
        printf("%c",*c); 
        c++;
    }
}

int main () {
    boobTOaooa();
    char c[] = "JHON HANCOCK";
    printf("%s", c); 
}