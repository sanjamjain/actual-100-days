#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        int is_prime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}