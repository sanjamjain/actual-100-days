#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    long long answer[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    answer[0] = 1;
    for (i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    
    long long suffix_product = 1;
    for (i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * suffix_product;
        suffix_product = suffix_product * nums[i];
    }
    
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%lld", answer[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");
    
    return 0;
}