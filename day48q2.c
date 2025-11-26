#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0, end = 0, len = 0;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, 1000, stdin);

    while (str[len] != '\0') {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    printf("%s\n", str);
    return 0;
}