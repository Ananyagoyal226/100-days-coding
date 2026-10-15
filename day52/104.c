/* Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in
 arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist,
  print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.Follow-up(optional):
   Can you do it in O(log n) Time Complexity?*/

// 1. Without doing the optional follow-up — Linear Search
#include <stdio.h>

int main()
{
    int n, x;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int ans = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}