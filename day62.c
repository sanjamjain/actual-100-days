#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    
    long long max_so_far = arr[0];
    long long current_max = arr[0];
    
    for (i = 1; i < n; i++) {
        current_max = (arr[i] > current_max + arr[i]) ? arr[i] : (current_max + arr[i]);
        max_so_far = (current_max > max_so_far) ? current_max : max_so_far;
    }
    
    printf("%lld\n", max_so_far);
    
    return 0;
}