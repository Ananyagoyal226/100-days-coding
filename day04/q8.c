// Read and print a matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d\n", &rows);

    printf("Enter number of columns: ");
    scanf("%d\n", &cols);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d\n", &a[i][j]);
        }
    }

    printf("Matrix is:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
