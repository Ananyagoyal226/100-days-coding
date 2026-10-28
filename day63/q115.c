/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest
 element in the array. Print the kth smallest element as output.*/
 #include <stdio.h>

int main()
{
    int n, k;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Check if k is valid
    if (k < 1 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    // Sort the array in ascending order using Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // kth smallest element is at index k-1
    printf("Kth smallest element = %d", arr[k - 1]);

    return 0;
}