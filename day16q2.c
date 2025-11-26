#include <stdio.h>

int main() {
    int n, original_num, reversed_num = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original_num = n;

    while (n > 0) {
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder;
        n = n / 10;
    }

    if (original_num == reversed_num) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}