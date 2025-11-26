#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, 1000, stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d\n", count);
    return 0;
}