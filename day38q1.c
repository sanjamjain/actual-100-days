#include <stdio.h>

int main() {
    int r, c, i, j;
    
    printf("Enter rows and columns for matrices: ");
    scanf("%d %d", &r, &c);
    
    int matrixA[r][c];
    int matrixB[r][c];
    int result[r][c];
    
    printf("Enter elements for Matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    printf("Enter elements for Matrix B:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    
    printf("Resultant matrix (A + B):\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}