// Reverse each word in a sentence without changing word order
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets
    str[strcspn(str, "\n")] = '\0';

    i = 0;

    while (str[i] != '\0')
    {
        // Skip spaces
        while (str[i] == ' ')
            i++;

        // Starting position of word
        start = i;

        // Move until space or end of string
        while (str[i] != ' ' && str[i] != '\0')
            i++;

        // Ending position of word
        end = i - 1;

        // Reverse the word
        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("After reversing each word: %s", str);

    return 0;
}