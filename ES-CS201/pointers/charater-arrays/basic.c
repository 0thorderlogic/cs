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

/* 
 NOTE the compiler will force char *c even if you pass the array as argument;
 since arrays can be huge in size it is ineffective to copy the whole thing again and again
*/

    while (*c = '\0')
    {
        printf("%c",*c);
        c++;
    }
    
}

int main (int argc, char *argv[]) {
    boobTOaooa();
    char c[19] = "Hey! Harshil";
    print(c);
}