/*Find the second-largest element in a matrix*/
#include <stdio.h>

int main()
{
    int a[3][3], largest, second;
    int i, j;

    printf("Enter 9 elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    largest = a[0][0];
    second = a[0][0];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j] > largest)
            {
                second = largest;
                largest = a[i][j];
            }
            else if(a[i][j] > second && a[i][j] != largest)
            {
                second = a[i][j];
            }
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d", second);

    return 0;
}