// Print the initials of a name
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // First character is always an initial
    printf("%c", name[0]);

    // Find characters that come after a space
    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i + 1] != ' ')
        {
            printf(" %c", name[i + 1]);
        }
    }

    return 0;
}