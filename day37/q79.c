/*Check if diagonal elements are distinct*/
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
        for(j = i + 1; j < n; j++)
        {
            if(a[i][i] == a[j][j])
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
        printf("Diagonal elements are distinct");
    }
    else
    {
        printf("Diagonal elements are not distinct");
    }

    return 0;
}