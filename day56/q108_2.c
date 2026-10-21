// Part 2: Using Brute Force — Nested Loops
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements are:\n");

    for (int i = 0; i < n; i++)
    {
        int nextGreater = -1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d -> %d\n", arr[i], nextGreater);
    }

    return 0;
}