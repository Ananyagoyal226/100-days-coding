/*Find the sum of elements in each row and determine
 which row has the highest sum*/
 #include <stdio.h>

int main()
{
    int a[3][3], i, j;
    int sum, max, row;

    printf("Enter 9 elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    max = 0;

    for(i=0; i<3; i++)
    {
        sum = 0;

        for(j=0; j<3; j++)
        {
            sum = sum + a[i][j];
        }

        printf("Sum of row %d = %d\n", i+1, sum);

        if(i == 0 || sum > max)
        {
            max = sum;
            row = i+1;
        }
    }

    printf("Highest row sum = %d\n", max);
    printf("Row with highest sum = %d", row);

    return 0;
}