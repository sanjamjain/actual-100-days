#include <stdio.h>

int main() {
    int n, original_num, digit;
    long long sum_of_factorials = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    original_num = n;

    while (n > 0) {
        digit = n % 10;
        
        long long fact = 1;
        int i;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        
        sum_of_factorials = sum_of_factorials + fact;
        n = n / 10;
    }

    if (sum_of_factorials == original_num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}