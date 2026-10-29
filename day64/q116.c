/*Write a program to take a string s as input. The task is to find the length of the longest substring 
without repeating characters. Print the length as output.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int last[256];
    int i, start = 0, maxLength = 0, length;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline added by fgets
    s[strcspn(s, "\n")] = '\0';

    // Initialize all characters as not seen
    for (i = 0; i < 256; i++)
    {
        last[i] = -1;
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        // If character is already present in current substring
        if (last[(unsigned char)s[i]] >= start)
        {
            start = last[(unsigned char)s[i]] + 1;
        }

        // Store current position of character
        last[(unsigned char)s[i]] = i;

        // Calculate length of current substring
        length = i - start + 1;

        if (length > maxLength)
        {
            maxLength = length;
        }
    }

    printf("Length of longest substring = %d\n", maxLength);

    return 0;
}