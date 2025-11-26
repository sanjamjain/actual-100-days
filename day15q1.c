#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("%lld\n", factorial);
    }

    return 0;
}