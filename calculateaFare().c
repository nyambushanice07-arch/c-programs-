/*
Name: SHANICE 
Reg no:CT101/G/26496/25
Description: Program to calculate fare
"*/
    
    #include <stdio.h>

float calculatefare(float distance) {
    float rate_per_km = 50.0;
    return distance * rate_per_km;
}

int main() {
    float distance = 10.0;
    printf("Total fare: %f\n", calculatefare(distance));
    return 0;
}