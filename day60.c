#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, j, k;
    
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
    
    for (i = 0; i <= n - k; i++) {
        int max_in_window = arr[i];
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max_in_window) {
                max_in_window = arr[i + j];
            }
        }
        printf("%d ", max_in_window);
    }
    printf("\n");
    
    return 0;
}