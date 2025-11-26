#include <stdio.h>

int main() {
    int r, c, i, j;
    long long sum = 0;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }
    
    printf("Sum of all elements: %lld\n", sum);
    
    return 0;
}