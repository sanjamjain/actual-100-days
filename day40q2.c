#include <stdio.h>

int main() {
    int m, n, p, q;
    int i, j, k;

    printf("Enter rows and columns for Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns for Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("\nError: Matrices are incompatible for multiplication.\n");
        return 1;
    }
    
    int matrix_A[m][n];
    int matrix_B[p][q];
    int result_C[m][q];

    printf("\nEnter elements for Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_A[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &matrix_B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result_C[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                result_C[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }

    printf("\nResultant Matrix C (A x B) (%d x %d):\n", m, q);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", result_C[i][j]);
        }
        printf("\n");
    }

    return 0;
}