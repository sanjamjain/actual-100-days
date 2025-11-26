#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int max = INT_MIN;
    int min = INT_MAX;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid size\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d\n", max, min);
    
    return 0;
}