/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product
 of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 
 32-bit integer.*/
// Follow-up(optional): Can you write a code that runs in O(n) time and without using the division operation.

//Without Follow-Up — Using Division
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

    int product = 1;
    int zeroCount = 0;

    // Find product of all non-zero elements
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == 0)
        {
            zeroCount++;
        }
        else
        {
            product = product * nums[i];
        }
    }

    // Find answer for each element
    for(int i = 0; i < n; i++)
    {
        if(zeroCount > 1)
        {
            answer[i] = 0;
        }
        else if(zeroCount == 1)
        {
            if(nums[i] == 0)
                answer[i] = product;
            else
                answer[i] = 0;
        }
        else
        {
            answer[i] = product / nums[i];
        }
    }

    printf("Answer array: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}