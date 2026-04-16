#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter order of matrix (n x n): ");
    scanf("%d", &n);

    int A[n][n], B[n][n], sum[n][n], product[n][n];

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix Addition
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Initialize product matrix to 0
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            product[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < n; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Sum
    printf("\nSum of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Display Product
    printf("\nProduct of matrices:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
