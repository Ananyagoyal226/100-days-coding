// Answer 2 — Follow-up 1: O(log n) Using Binary Search
#include <stdio.h>

int main()
{
    long long n;
    long long low, high, mid;
    long long totalSum, leftSum, rightSum;
    long long pivot = -1;

    printf("Enter n: ");
    scanf("%lld", &n);

    totalSum = n * (n + 1) / 2;

    low = 1;
    high = n;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        // Sum from 1 to mid
        leftSum = mid * (mid + 1) / 2;

        // Sum from mid to n
        rightSum = totalSum - leftSum + mid;

        if (leftSum == rightSum)
        {
            pivot = mid;
            break;
        }
        else if (leftSum < rightSum)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Pivot integer = %lld\n", pivot);

    return 0;
}