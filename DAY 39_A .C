#include <stdio.h>

int main() {
    int n, i, j, k, matrix[10][10];
    int diag[20], count = 0, distinct = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        diag[count++] = matrix[i][i];
    }

    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
