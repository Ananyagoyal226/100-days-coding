/*Open an existing file in append mode and allow the user to enter a new line of text.
 Append the text at the end without overwriting existing content.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open file in append mode
    fp = fopen("info.txt", "a");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Take a line of text from the user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}