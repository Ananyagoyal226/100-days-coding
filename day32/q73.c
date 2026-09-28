/* Check whether two matrices are equal or not*/
#include <stdio.h>

int main()
{
    int a[2][2], b[2][2];
    int i, j, flag = 1;

    printf("Enter elements of first matrix:\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(a[i][j] != b[i][j])
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
        printf("Matrices are equal");
    }
    else
    {
        printf("Matrices are not equal");
    }

    return 0;
}