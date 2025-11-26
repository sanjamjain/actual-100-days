#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, last_space = -1;

    printf("Enter a name: ");
    fgets(str, 1000, stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            last_space = i;
        }
    }

    printf("%c.", str[0]);
    for (i = 1; i < last_space; i++) {
        if (str[i] == ' ') {
            printf("%c.", str[i + 1]);
        }
    }

    printf(" ");
    for (i = last_space + 1; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}