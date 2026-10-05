// Write a C program to find the longest word in a given sentence.
#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int start = 0;
    int length = 0;
    int maxStart = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            length++;
        }
        else
        {
            if(length > maxLength)
            {
                maxLength = length;
                maxStart = start;
            }

            length = 0;
            start = i + 1;

            if(str[i] == '\0' || str[i] == '\n')
            {
                break;
            }
        }
    }

    printf("Longest word: ");

    for(i = maxStart; i < maxStart + maxLength; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nLength = %d", maxLength);

    return 0;
}