// With Follow-Up — O(n) Without Division
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter the elements of array: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int prefix = 1;

    // Store prefix product in answer array
    for(int i = 0; i < n; i++)
    {
        answer[i] = prefix;
        prefix = prefix * nums[i];
    }

    int suffix = 1;

    // Multiply with suffix product
    for(int i = n - 1; i >= 0; i--)
    {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    printf("Answer array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}