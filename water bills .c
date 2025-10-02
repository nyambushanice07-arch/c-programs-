#include <stdio.h>

/*
 * Program: water_bill.c
 * Task 2: Calculates the total water bill based on tiered consumption.
 */
int main() {
    int units;
    double total_bill = 0.0;

    // Prompt user for units consumed 
    printf("Enter water units consumed: "); 
    if (scanf("%d", &units) != 1) return 1;

    // Input validation (assuming units consumed can't be negative)
    if (units < 0) {
        printf("Invalid input: Units consumed cannot be negative.\n");
        return 1;
    }
    
    // Use if-else if-else for tiered calculation 
    if (units <= 30) {
        // Tier 1: 0 to 30 units @ KES 20 
        total_bill = units * 20.0;
    } else if (units <= 60) {
        // Tier 2: 31 to 60 units @ KES 25 
        // Base cost for the first 30 units: 30 * 20 = 600 KES
        total_bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else {
        // Tier 3: Above 60 units @ KES 30 
        // Base cost for the first 60 units: (30 * 20) + (30 * 25) = 600 + 750 = 1350 KES
        total_bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    // Display the total bill with two decimal places 
    printf("Total water bill: %.2f KES\n", total_bill); 

    return 0;
}