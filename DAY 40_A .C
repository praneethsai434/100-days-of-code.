#include <stdio.h>

int main() {
    int n, i, j, matrix[10][10];

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDiagonal traversal of the matrix:\n");

    for (int k = 0; k < n; k++) {
        i = k;
        j = 0;
        while (i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    for (int k = 1; k < n; k++) {
        i = n - 1;
        j = k;
        while (i >= 0 && j < n) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    return 0;
}
