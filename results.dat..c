/*
NAME SHANICE NYAMBURA 
REG NO CT101/26496/25
*/





#include <stdio.h>

// Define the student structure
struct Student {
    char name[50];
    char regNumber[15];
    int totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;
    int count = 0;

    // Open the binary file for reading
    fp = fopen("results.dat", "rb");

    if (fp == NULL) {
        printf("Error: Could not open results.dat\n");
        return 1;
    }

    printf("\n--- University Examination Results ---\n");

    // Read and display student records
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        count++;
        printf("Record %d:\n", count);
        printf("  Name : %s\n", s.name);
        printf("  Marks: %d\n", s.totalMarks);
        printf("---------------------------\n");
    }

    if (count == 0)
        printf("No records found.\n");
    else
        printf("Displayed %d records.\n", count);

    fclose(fp);
    return 0;
}