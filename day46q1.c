#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            continue;
        } else {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("%s\n", str);
    return 0;
}