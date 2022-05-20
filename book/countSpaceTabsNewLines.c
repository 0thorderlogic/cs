#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int space = 0, tabs = 0, newlines = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ')
            tabs++;
        else if (str[i] == '\t')
            space++;
        else if (str[i] == '\n')
            newlines++;
    }
    printf("Tabs -> %d\nSpaces -> %d\nNew-Lines -> %d\n", tabs, space, newlines);
}
