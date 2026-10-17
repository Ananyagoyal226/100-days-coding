/* Write a Program to take a positive integer n as input, and find the pivot integer x such that
 the sum of all elements between 1 and x inclusively equals the sum of all elements between x and
  n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is 
  guaranteed that there will be at most one pivot integer for the given input.*/

 /* Follow-up 1 (optional): Can you do it in O(log n) Time Complexity? 
  Follow-up 2 (optional): Can you do it in O(1) Time Complexity?*/

//   Without Follow-up: O(n)

#include <stdio.h>

int main()
{
    long long n, x;
    long long totalSum, leftSum = 0, rightSum;
    long long pivot = -1;

    printf("Enter n: ");
    scanf("%lld", &n);

    // Sum from 1 to n
    totalSum = n * (n + 1) / 2;

    // Check every possible pivot
    for (x = 1; x <= n; x++)
    {
        leftSum = leftSum + x;

        // x must be included on the right side also
        rightSum = totalSum - leftSum + x;

        if (leftSum == rightSum)
        {
            pivot = x;
            break;
        }
    }

    printf("Pivot integer = %lld\n", pivot);

    return 0;
}