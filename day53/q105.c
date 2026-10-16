/* Write a Program to take an array of integers as input, calculate the pivot index of this array. 
The pivot index is the index where the sum of all the numbers strictly to the left of the index is 
equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge
 of the array, then the left sum is 0 because there are no elements to the left. This also applies to
  the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
Follow-up(optional): Try to solve this in O(n) TC
*/


// 1. Without Follow-Up — Simple Approach O(n²)
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

    int pivot = -1;

    for (int i = 0; i < n; i++)
    {
        int leftSum = 0;
        int rightSum = 0;

        // Calculate sum of elements to the left of i
        for (int j = 0; j < i; j++)
        {
            leftSum = leftSum + arr[j];
        }

        // Calculate sum of elements to the right of i
        for (int j = i + 1; j < n; j++)
        {
            rightSum = rightSum + arr[j];
        }

        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}