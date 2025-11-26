#include <stdio.h>

int main() {
    int r, c, i, j;
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    if (r != c) {
        printf("Not a square matrix\n");
        return 0;
    }
    
    int matrix[r][c];
    int is_distinct = 1;
    
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                is_distinct = 0;
                break;
            }
        }
        if (is_distinct == 0) {
            break;
        }
    }
    
    if (is_distinct == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}