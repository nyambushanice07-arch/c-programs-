/*
Name: SHANICE 
REG NO CT101/G/26496/25
Desciption:To guess number 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Required for seeding the random number generator

int main() {
    // Variable declarations
    int secret_number;
    int guess = 0; // Initialize to a value outside the 1-20 range to ensure the loop runs
    int attempts = 0;

    // Seed the random number generator using the current time
    srand(time(NULL));

    // Generate a random number between 1 and 20 (inclusive)
    secret_number = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a secret number between 1 and 20 (inclusive).\n");

    // The while loop continues as long as the guess does not match the secret number
    while (guess != secret_number) {
        printf("\nEnter your guess (1-20): ");

        // Check for valid input
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear the input buffer to prevent an infinite loop on invalid input
            while (getchar() != '\n');
            continue;
        }

        // Increment the attempt counter for a valid guess
        attempts++;

        // Provide feedback to the player
        if (guess > secret_number) {
            printf("\"Too high!\" if the guess is greater than the secret number.\n");
        } else if (guess < secret_number) {
            printf("\"Too low!\" if the guess is less than the secret number.\n");
        }
        // The condition (guess == secret_number) is the loop termination condition
    }

    // This block executes when the loop condition (guess != secret_number) is false
    printf("\n\"Congratulations!\" if the guess is equal to the secret number.\n");
    printf("The secret number was %d.\n", secret_number);
    printf("The program must also count and display the total number of attempts it took for the player to guess correctly.\n");
    printf("Total attempts: %d\n", attempts);

    return 0;
}
