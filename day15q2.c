#include <stdio.h>

int main() {
    int n, reversed_num = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder;
        n = n / 10;
    }

    printf("%d\n", reversed_num);

    return 0;
}