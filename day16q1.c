#include <stdio.h>

int main() {
    int n, remainder;
    long long binary_num = 0;
    long long base = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
    } else {
        while (n > 0) {
            remainder = n % 2;
            binary_num = binary_num + (remainder * base);
            n = n / 2;
            base = base * 10;
        }
        printf("%lld\n", binary_num);
    }

    return 0;
}