#include <stdio.h>

int main() {
    int n, i, val, pos;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to insert: ");
    scanf("%d", &val);
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);
    
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
    } else {
        for (i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[pos] = val;
        n++;
        
        printf("Array after insertion: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}