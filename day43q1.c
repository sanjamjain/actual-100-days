#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;
    int start, end;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    start = 0;
    end = len - 1;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("%s\n", str);
    return 0;
}