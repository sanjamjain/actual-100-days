#include <stdio.h>

int main() {
    int n, i, x;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter x: ");
    scanf("%d", &x);
    
    int ans = -1;
    int low = 0, high = n - 1, mid;
    
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    printf("%d\n", ans);
    
    return 0;
}