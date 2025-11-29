//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    // Take filename from user
    printf("Enter filename to open in append mode: ");
    scanf("%s", filename);
    getchar();  // Clear newline left by scanf

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    // Take a new line of text from user
    printf("Enter text to append:\n");
    fgets(text, sizeof(text), stdin);

    // Append the text to file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    printf("Text appended successfully!\n");

    return 0;
}
