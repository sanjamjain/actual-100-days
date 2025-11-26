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
    
    k = k % n;
    
    if (k < 0) {
        k = k + n;
    }
    
    if (n > 0) {
        int temp[n];
        
        for (i = 0; i < n; i++) {
            temp[(i + k) % n] = arr[i];
        }
        
        for (i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }
    
    printf("Rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}