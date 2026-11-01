/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such 
that the merged array is also sorted. Print the merged array.*/

#include <stdio.h>

int main()
{
    int m, n, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter elements of first sorted array: ");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];

    printf("Enter elements of second sorted array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[m + n];

    i = 0;
    j = 0;

    // Merge both arrays
    while(i < m && j < n)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while(i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while(j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for(i = 0; i < m + n; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
