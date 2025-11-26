#include <stdio.h>

int main() {
    int n, i, k;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    if (k > n || k <= 0) {
        printf("Invalid k\n");
        return 1;
    }
    
    long long current_sum = 0;
    for (i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    
    long long max_sum = current_sum;
    
    for (i = k; i < n; i++) {
        current_sum = current_sum + arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("%lld\n", max_sum);
    
    return 0;
}