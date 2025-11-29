//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    FILE *src, *dest;
    char sourceFile[100], destFile[100];
    int ch;

    // Take filenames from user
    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    // Open source file for reading
    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    // Open destination file for writing
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot create/open destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(src);
    fclose(dest);

    printf("File copied successfully from %s to %s\n", sourceFile, destFile);

    return 0;
}
