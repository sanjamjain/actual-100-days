#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;

    printf("Enter a name: ");
    fgets(str, 1000, stdin);

    printf("%c", str[0]);
    for (i = 1; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            printf("%c", str[i + 1]);
        }
    }
    printf("\n");

    return 0;
}