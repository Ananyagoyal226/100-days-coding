#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d\n", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d\n", &matrix[i][j]);
            transpose[j][i] = matrix[i][j]; // Transposing
        }
    }

    printf("\nTranspose of matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
