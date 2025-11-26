#include <stdio.h>

int main() {
    int n, i, key;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    int found = 0;
    int index = -1;
    
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break;
        }
    }
    
    if (found == 1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}