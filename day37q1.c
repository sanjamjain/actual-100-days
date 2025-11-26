#include <stdio.h>

int main() {
    int r, c, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    long long row_sums[r];
    
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        row_sums[i] = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            row_sums[i] = row_sums[i] + matrix[i][j];
        }
    }
    
    printf("Row sums:\n");
    for (i = 0; i < r; i++) {
        printf("Row %d: %lld\n", i, row_sums[i]);
    }
    
    return 0;
}