
/*
Name: SHANICE 
Reg no:CT101/G/26496/25
Description: program to convert to Celsius 
*/






#include <stdio.h>

// This function converts a temperature from Fahrenheit to Celsius
double convertToCelsius(double fahrenheit) {
    // Formula: Celsius = (Fahrenheit - 32) * 5 / 9
    return (fahrenheit - 32.0) * (5.0 / 9.0);
}

int main() {
    double temp_f = 68.0; // Example Fahrenheit temperature
    double temp_c = convertToCelsius(temp_f); // Convert to Celsius

    // Print the result with 2 decimal places
    printf("Temperature in Celsius: %.2f C\n", temp_c);

    return 0;
}