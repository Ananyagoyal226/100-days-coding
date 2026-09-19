
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d\n", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d\n", &matrix[i][j]);
        }
    }

    printf("\nThe Matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
