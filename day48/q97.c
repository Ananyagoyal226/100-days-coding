// Check if one string is a rotation of another
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    // First check whether lengths are equal
    if (strlen(str1) != strlen(str2))
    {
        printf("Strings are not rotations of each other.");
        return 0;
    }

    // Copy str1 into temp
    strcpy(temp, str1);

    // Append str1 again
    strcat(temp, str1);

    // Check whether str2 is present in temp
    if (strstr(temp, str2) != NULL)
        printf("Strings are rotations of each other.");
    else
        printf("Strings are not rotations of each other.");

    return 0;
}