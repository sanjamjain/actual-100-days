#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator = 2.0;
    double denominator = 3.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + (numerator / denominator);
        numerator = numerator + 2.0;
        denominator = denominator + 4.0;
    }
    
    printf("Sum: %lf\n", sum);

    return 0;
}