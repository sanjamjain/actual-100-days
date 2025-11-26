#include <stdio.h>

int main() {
    int n, i;
    int pos_count = 0;
    int neg_count = 0;
    int zero_count = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            pos_count++;
        } else if (arr[i] < 0) {
            neg_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", pos_count, neg_count, zero_count);
    
    return 0;
}