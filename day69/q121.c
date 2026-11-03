/*Write a program to take an integer array as input. Only one element will be repeated. Print the
 repeated element. Try to find the result in one single iteration.
*/

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    int max = 0;

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] > max)
        {
            max = a[i];
        }
    }

    int freq[max + 1];

    for(i = 0; i <= max; i++)
    {
        freq[i] = 0;
    }

    for(i = 0; i < n; i++)
    {
        freq[a[i]]++;

        if(freq[a[i]] == 2)
        {
            printf("Repeated element = %d", a[i]);
            return 0;
        }
    }

    return 0;
}
