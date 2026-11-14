/*Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer
 is NULL, print an error message; otherwise, read and display its content.*/

 #include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    // Check whether the file exists / could be opened
    if (fp == NULL)
    {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    printf("\nFile opened successfully.\n");
    printf("Contents of the file:\n\n");

    // Read and display the file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}