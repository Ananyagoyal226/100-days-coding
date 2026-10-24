// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all 
//the subarrays of size k.

#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    int sum = 0;

    // Find sum of first subarray of size k
    for (int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }

    int maxSum = sum;

    // Slide the window through the array
    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}