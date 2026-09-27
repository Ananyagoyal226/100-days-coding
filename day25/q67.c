/*Write a program to input a character and check
 whether it is a vowel or consonant using if–else.*/

 #include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabetic character: ");
    
    // Validation: Ensure character input is read correctly
    if (scanf(" %c", &ch) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    // Check if the input is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        printf("Character '%c' is an Uppercase letter.\n", ch);
        
        // Check if it's a vowel or consonant
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("It is a Vowels.\n");
        } else {
            printf("It is a Consonant.\n");
        }
    } 
    // Check if the input is a lowercase letter
    else if (ch >= 'a' && ch <= 'z') {
        printf("Character '%c' is a Lowercase letter.\n", ch);
        
        // Check if it's a vowel or consonant
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("It is a Vowel.\n");
        } else {
            printf("It is a Consonant.\n");
        }
    } 
    // Validation fallback: If it's not a letter at all
    else {
        printf("Error: '%c' is not an alphabetic character.\n", ch);
        return 1;
    }

    return 0;
}