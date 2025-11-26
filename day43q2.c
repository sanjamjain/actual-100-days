#include <stdio.h>

int main() {
    char str[1000];
    int len = 0;
    int start, end;
    int is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    start = 0;
    end = len - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (is_palindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}