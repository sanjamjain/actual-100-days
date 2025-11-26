#include <stdio.h>

int main() {
    long long n, original_n, result = 0;
    int remainder, complement_digit;
    long long base = 1;
    int digits = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    original_n = n;
    
    if (n == 0) {
        digits = 1;
        result = 1;
    }

    while (n > 0) {
        digits++;
        remainder = n % 10;
        
        if (remainder == 1) {
            complement_digit = 0;
        } else {
            complement_digit = 1;
        }
        
        result = result + (complement_digit * base);
        base = base * 10;
        n = n / 10;
    }

    printf("%0*lld\n", digits, result);

    return 0;
}