/*
NAME SHANICE NYAMBURA 
REG NO.CT101/G/26496/25
*/





    #include <stdio.h>

int main() {
    FILE *fp;
    char title[100];

    // Open file for appending (create if not exists)
    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Ask for book title
    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin);

    // Remove trailing newline (if present)
    for (int i = 0; title[i] != '\0'; i++) {
        if (title[i] == '\n') {
            title[i] = '\0';
            break;
        }
    }

    // Write title to file
    fprintf(fp, "%s\n", title);
    fclose(fp);

    // Confirm success
    printf("Book '%s' has been saved.\n", title);

    return 0;
}