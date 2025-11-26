#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product = product * i;
        }
    }

    printf("%lld\n", product);

    return 0;
}