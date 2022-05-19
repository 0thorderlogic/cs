#include <stdio.h>

void print(char *c) {
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    print("\n");
    
}

int main () {
    char c[10] = "Hello!\0";
    print(c);
    return 0;
}