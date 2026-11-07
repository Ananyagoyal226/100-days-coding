/*Write a C program that opens an existing file (e.g., info.txt) and reads its contents using 
fgets(). The program should print all the lines to the console until EOF (end of file) is reached.*/
#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    // Check if the file exists and opened successfully
    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Read the file line by line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}