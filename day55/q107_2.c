//  Follow-up — O(n) Time Complexity
#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int candidate = 0;
    int count = 0;

    // Step 1: Find possible majority candidate
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Step 2: Verify the candidate
    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }

    if (count > n / 2)
    {
        printf("Majority element = %d\n", candidate);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}