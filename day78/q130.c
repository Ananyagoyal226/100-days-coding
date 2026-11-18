/*Read a text file and count how many vowels and consonants are in the file. Ignore digits and 
special characters.
*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (isalpha(ch))
        {
            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}