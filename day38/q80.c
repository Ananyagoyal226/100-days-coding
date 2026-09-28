/*Find the sum of main diagonal elements*/
#include <stdio.h>

int main()
{
    int a[100][100];
    int n, i, j, sum = 0;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal elements = %d", sum);

    return 0;
}