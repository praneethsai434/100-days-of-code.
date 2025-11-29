//Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    // Ask for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open in read mode
    fp = fopen(filename, "r");

    // Check if file opening failed
    if (fp == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // File exists — display contents
    printf("\n--- File Content ---\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
