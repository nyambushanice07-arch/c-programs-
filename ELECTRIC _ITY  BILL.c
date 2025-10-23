/*
Name: Shanice 
Reg no:CT101/G/26496/25
Declaration: program to calculate Electricity bill 
*/




// Program to Calculate Electricity Bill

#include <stdio.h>

// Function to calculate the electric bill
int calculateElectricBill(int units) {
    int bill = 0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = 100 * 10;
        bill += (units - 100) * 15;
    } else {
        bill = 100 * 10;
        bill += 100 * 15;
        bill += (units - 200) * 20;
    }

    return bill;
}

// Main function
int main() {
    int units;
    
    // Ask the user to enter the number of units
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate and display the bill
    int totalBill = calculateElectricBill(units);
    printf("Your electricity bill is: KSh %d\n", totalBill);

    return 0;
}







