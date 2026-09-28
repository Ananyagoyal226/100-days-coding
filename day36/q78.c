/*Check if a matrix is symmetric.*/
#include <stdio.h>

int main()
{
    int a[100][100];
    int n, i, j, flag = 1;

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
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
        {
            break;
        }
    }

    if(flag == 1)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }

    return 0;
}