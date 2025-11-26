#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    
    long long total_sum = 0;
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total_sum += nums[i];
    }
    
    long long left_sum = 0;
    int pivot = -1;
    
    for (i = 0; i < n; i++) {
        long long right_sum = total_sum - left_sum - nums[i];
        if (left_sum == right_sum) {
            pivot = i;
            break;
        }
        left_sum += nums[i];
    }
    
    printf("%d\n", pivot);
    
    return 0;
}