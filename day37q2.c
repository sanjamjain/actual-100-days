#include <stdio.h>

int main() {
    int r, c, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    int transpose[c][r];
    
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j];
        }
    }
    
    printf("Transpose matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}