// Read and print elements of a one-dimensional array.
#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d\n", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
