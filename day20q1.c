#include <stdio.h>

int main() {
    int n, digit;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0) {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product = product * digit;
        }
        temp = temp / 10;
    }

    printf("%lld\n", product);

    return 0;
}