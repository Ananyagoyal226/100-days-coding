/*Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element
 of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element
  on the right which is greater than the current element. If there does not exist next greater of current element, then next greater
 element for current element is -1.*/

// Try solving this using brute force (nested loop). No need of attempting the optimized stack-based solution.

//Part 1: Without Attempting the Brute-Force Follow-up

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    int next[n];

    printf("Enter the elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        next[i] = -1;

        int j = i + 1;

        while (j < n)
        {
            if (arr[j] > arr[i])
            {
                next[i] = arr[j];
                break;
            }

            j++;
        }
    }

    printf("Next greater elements are:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d -> %d\n", arr[i], next[i]);
    }

    return 0;
}