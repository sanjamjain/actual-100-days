#include <stdio.h>

int main() {
    int n, i, target;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter target: ");
    scanf("%d", &target);
    
    int first = -1, last = -1;
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}