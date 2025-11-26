#include <stdio.h>

int main() {
    int n, i, val;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n + 1];
    
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to insert: ");
    scanf("%d", &val);
    
    int pos = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < val) {
            pos++;
        } else {
            break;
        }
    }
    
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
    
    return 0;
}