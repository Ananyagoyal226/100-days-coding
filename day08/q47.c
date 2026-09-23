// 	Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int n, original,first, last;
    int divisor = 1;
    int middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    /* Find divisor to get the first digit */
    while(original >= 10)
    {
        divisor = divisor * 10;
        original = original / 10;
    }

    first = n / divisor; //for example, if n = 1234, first = 1234 / 1000 = 1
    last = n % 10; // for example, if n = 1234, last = 1234 % 10 = 4

    middle = (n % divisor) / 10; // for example, if n = 1234, divisor = 1000, middle = (1234 % 1000) / 10 = 234 / 10 = 23

    result = last * divisor + middle * 10 + first;

    printf("After swapping = %d\n", result);

    return 0;
}