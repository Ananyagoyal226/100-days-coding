// Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main()
{
    int n, original, temp;
    int digit, digits = 0;
    int sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    /* Count number of digits */
    while(temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    /* Calculate Armstrong sum */
    while(temp != 0)
    {
        digit = temp % 10;

        power = 1;

        for(i = 1; i <= digits; i++)
        {
            power = power * digit;
        }

        sum = sum + power;

        temp = temp / 10;
    }

    if(sum == original)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }

    return 0;
}