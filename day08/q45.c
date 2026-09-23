// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    int n, digit;
    int complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit == 0)
        {
            complement = complement + 1 * place;
        }
        else
        {
            complement = complement + 0 * place;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement = %d\n", complement);

    return 0;
}