#include <stdio.h>

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
        int first_neg = 0;
        int found = 0;
        for (j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                first_neg = arr[i + j];
                found = 1;
                break;
            }
        }
        printf("%d ", first_neg);
    }
    printf("\n");
    
    return 0;
}