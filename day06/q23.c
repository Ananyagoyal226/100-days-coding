// Search in a sorted array using binary search.
#include <stdio.h>

int main()
{
    int a[100], n, i, search;
    int low, high, mid;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == search)
        {
            found = 1;
            break;
        }
        else if(search > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 1)
    {
        printf("Element found at index %d\n", mid);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
