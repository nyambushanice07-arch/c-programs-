/*
NAME SHANICE NYAMBURA 
REG NO CT101/G/26496/25
*/


#include <stdio.h>

int main() {
    FILE *fp;
    float amount, total = 0;
    int count = 0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open sales.txt\n");
        return 1;
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        printf("Total transactions: %d\n", count);
        printf("Total sales: $%.2f\n", total);
    } else {
        printf("No sales data found.\n");
    }

    return 0;
}