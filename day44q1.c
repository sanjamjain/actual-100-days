#include <stdio.h>

int main() {
    char str[1000];
    int i = 0;
    int spaces = 0;
    int digits = 0;
    int special = 0;

    printf("Enter a string: ");
    fgets(str, 1000, stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            special++;
        }
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);

    return 0;
}