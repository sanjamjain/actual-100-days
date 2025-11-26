#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Need at least 2 elements\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    if (second_largest == INT_MIN) {
         printf("No second largest element (all are same)\n");
    } else {
        printf("Second largest: %d\n", second_largest);
    }
    
    return 0;
}