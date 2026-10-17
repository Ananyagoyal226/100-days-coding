// Answer 3 — Follow-up 2: O(1) Using Mathematical Formula
#include <stdio.h>
#include <math.h>

int main()
{
    long long n, sum, x;

    printf("Enter n: ");
    scanf("%lld", &n);

    sum = n * (n + 1) / 2;

    x = (long long)sqrt((double)sum);

    if (x * x == sum)
    {
        printf("Pivot integer = %lld\n", x);
    }
    else
    {
        printf("Pivot integer = -1\n");
    }

    return 0;
}
