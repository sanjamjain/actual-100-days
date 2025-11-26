#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator = 3.0;
    double denominator = 4.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum = sum + 1.0;
        } else {
            sum = sum + (numerator / denominator);
            numerator = numerator + 2.0;
            denominator = denominator + 2.0;
        }
    }

    printf("Sum: %lf\n", sum);
    
    return 0;
}