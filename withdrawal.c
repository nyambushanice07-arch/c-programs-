/*
Name: SHANICE 
REG NO CT101/G/26496/25
Description:To display the balance after each withdrawal 
*/

#include <stdio.h>

int main() {
    // Initial balance
    double balance = 500.00;
    double withdrawal_amount;

    printf("Welcome to the Bank ATM!\n");
    printf("Initial Balance: $%.2f\n", balance);

    // Continue the loop as long as the balance is greater than zero
    while (balance > 0) {
        printf("\nAccount Balance: $%.2f\n", balance);
        printf("Enter amount to withdraw (or 0 to stop): ");

        // Check if input is a valid number
        if (scanf("%lf", &withdrawal_amount) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        // Check for stopping condition
        if (withdrawal_amount <= 0) {
            printf("Withdrawal session ended.\n");
            break;
        }

        // Check if withdrawal amount exceeds current balance
        if (withdrawal_amount > balance) {
            printf("Insufficient funds! Cannot withdraw $%.2f.\n", withdrawal_amount);
        }
        // Check if the withdrawal would leave the balance at or below zero (for the condition "until the balance becomes zero or negative")
        else if (balance - withdrawal_amount < 0) {
            printf("Cannot complete withdrawal. Transaction would result in a negative balance.\n");
        }
        else {
            // Perform the withdrawal
            balance -= withdrawal_amount;
            printf("Successfully withdrew $%.2f. New balance is $%.2f.\n", withdrawal_amount, balance);
        }
    }

    printf("\nCurrent final balance: $%.2f\n", balance);
    if (balance <= 0) {
        printf("Account is empty or overdrawn. No more withdrawals allowed.\n");
    }

    return 0;
}