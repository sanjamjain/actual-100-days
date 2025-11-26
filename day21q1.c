#include <stdio.h>

int main() {
    int n, first_digit, last_digit;
    long long power_of_10 = 1;
    int temp;
    long long new_num;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        new_num = n;
    } else {
        last_digit = n % 10;
        temp = n;

        while (temp >= 10) {
            temp = temp / 10;
            power_of_10 = power_of_10 * 10;
        }
        
        first_digit = temp;
        
        int middle_part = n - (first_digit * power_of_10) - last_digit;

        new_num = (last_digit * power_of_10) + middle_part + first_digit;
    }

    printf("%lld\n", new_num);
    
    return 0;
}