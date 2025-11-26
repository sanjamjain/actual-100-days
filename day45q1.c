#include <stdio.h>

int main() {
    char str[1000];
    char key;
    int i = 0;
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to count: ");
    scanf(" %c", &key);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == key) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}