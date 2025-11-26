#include <stdio.h>

int main() {
    int r, c, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int matrix[r][c];
    
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("The matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}