#include <stdio.h>

int main() {
    int n, i, key;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    int low = 0;
    int high = n - 1;
    int mid;
    int found = 0;
    int index = -1;
    
    while (low <= high) {
        mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            found = 1;
            index = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (found == 1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}