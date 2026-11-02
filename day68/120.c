/*Write a program to take an input array of size n. The array should contain all the integers
 between 0 to n except for one. Print that missing number
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    int total = n * (n + 1) / 2;

    int missing = total - sum;

    printf("Missing number = %d", missing);

    return 0;
}
