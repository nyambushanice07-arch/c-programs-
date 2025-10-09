/*
Name: SHANICE 
REG NO CT101/G/26496/25
Description:To show password 
*/

#include <stdio.h>
#include <string.h> // Required for strcmp

int main() {
    // Define the correct password
    const char correct_password[] = "1234";
    // Array to store the user's input (max 100 characters, including the null terminator)
    char user_password[100];

    printf("System Login Required.\n");

    // The do-while loop executes the body (do) at least once, 
    // then checks the condition (while) to see if it should repeat.
    do {
        printf("Enter the password: ");

        // Read the user's input, up to 99 characters
        if (scanf("%99s", user_password) != 1) {
            // Handle read error if necessary, though unlikely for simple string
            break;
        }

        // Compare the user's input with the correct password
        // strcmp returns 0 if the strings are identical
        if (strcmp(user_password, correct_password) != 0) {
            printf("Incorrect password. Please try again.\n");
        }

    // Continue looping WHILE the user_password is NOT equal to the correct_password
    } while (strcmp(user_password, correct_password) != 0);

    // This line is reached only when the do-while loop terminates (i.e., password is correct)
    printf("\nAccess Granted!\n");

    return 0;
}