// Insert an element in a sorted array at the appropriate position
#include <stdio.h>

int main()
{
    int a[100], n, i, value, pos;    /*pos means position(index)= the index where the new element needs to be inserted*/

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);

    pos = 0;

    while(pos < n && a[pos] < value)
    {
        pos++;
    }

    for(i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos] = value;
    n++;

    printf("Array after insertion:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}