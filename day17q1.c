#include <stdio.h>
#include <math.h>

int main() {
    int n, original_num, remainder, digits = 0;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original_num = n;

    if (n == 0) {
        digits = 1;
    } else {
        int temp = n;
        while (temp != 0) {
            temp = temp / 10;
            digits++;
        }
    }

    int temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum = sum + pow(remainder, digits);
        temp = temp / 10;
    }

    if ((int)sum == original_num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}