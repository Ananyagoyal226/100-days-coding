// Check if a string is a palindrome.
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length
    while (str[length] != '\0')
    {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("String is a palindrome.");
    }
    else
    {
        printf("String is not a palindrome.");
    }

    return 0;
}