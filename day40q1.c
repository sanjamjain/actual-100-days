#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Main diagonal: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
    
    printf("Anti-diagonal: ");
    for (i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]);
    }
    printf("\n");
    
    return 0;
}