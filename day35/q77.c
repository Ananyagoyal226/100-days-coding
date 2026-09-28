/* Write a program to find the column number
 having the minimum sum.*/

 #include <stdio.h>

int main()
{
    int a[3][3], i, j;
    int sum, min, col;

    printf("Enter 9 elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    min = 0;

    for(j=0; j<3; j++)
    {
        sum = 0;

        for(i=0; i<3; i++)
        {
            sum = sum + a[i][j];
        }

        printf("Sum of column %d = %d\n", j+1, sum);

        if(j == 0 || sum < min)
        {
            min = sum;
            col = j+1;
        }
    }

    printf("Minimum column sum = %d\n", min);
    printf("Column number having minimum sum = %d", col);

    return 0;
}