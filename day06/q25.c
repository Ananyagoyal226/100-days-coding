// Insert an element in an array at a given position.

#include <stdio.h>

int main()
{
    int a[100], n, i, value, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &value);

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = value;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n ", a[i]);
    }

    return 0;
}

