// 2. Follow-Up — Optimized O(n) Approach
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of array:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0;

    // Calculate total sum of array
    for (int i = 0; i < n; i++)
    {
        totalSum = totalSum + arr[i];
    }

    int leftSum = 0;
    int pivot = -1;

    for (int i = 0; i < n; i++)
    {
        int rightSum;

        rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + arr[i];
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}