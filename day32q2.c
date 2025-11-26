#include <stdio.h>

int main() {
    int n, i, digit;
    int freq[10] = {0};
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int temp = n;
    if (temp < 0) {
        temp = -temp;
    }
    if (temp == 0) {
        freq[0] = 1;
    }

    while (temp > 0) {
        digit = temp % 10;
        freq[digit]++;
        temp = temp / 10;
    }
    
    int max_freq = 0;
    int result_digit = 0;
    
    for (i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            result_digit = i;
        }
    }
    
    printf("%d\n", result_digit);
    
    return 0;
}