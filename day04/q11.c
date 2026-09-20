// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d\n", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize sum for current row
        for (int j = 0; j < cols; j++) {
            scanf("%d\n", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    printf("\nRow sums stored in array:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
