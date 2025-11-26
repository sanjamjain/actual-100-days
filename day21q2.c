#include <stdio.h>

int main() {
    int n, i;
    int sum_of_divisors = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not a perfect number\n");
    } else {
        for (i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum_of_divisors = sum_of_divisors + i;
            }
        }

        if (sum_of_divisors == n) {
            printf("Perfect number\n");
        } else {
            printf("Not a perfect number\n");
        }
    }

    return 0;
}