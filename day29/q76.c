/*Write a program to find the sum of corner elements
 of a matrix.*/
 #include <stdio.h>

int main()
{
    int a[3][3], i, j, sum = 0;

    printf("Enter 9 elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    sum = a[0][0] + a[0][2] + a[2][0] + a[2][2];

    printf("Sum of corner elements = %d", sum);

    return 0;
}