// Q-6 reverse an array without taking extra space.
#include <stdio.h>

int main()
{
    int a[100], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
        /*suppose :
        1,2,3,4,5 
        we want:
        5,4,3,2,1
        first:
        swap 1st and last-5,2,3,4,1
        then -2nd last and 2 nd number
        5,4,3,2,1

        */
    for(i = 0; i < n / 2; i++)    
    {
         temp = a[i];           /*here if n=5 , i<2.5 = i<2= i:0,1*/
        a[i] = a[n - 1 - i];    /* a[0]=a[5-1-0]=a[4]   ===== a[0]=a[4]*/
        a[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
       
    return 0;
}
