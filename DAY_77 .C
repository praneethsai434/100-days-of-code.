//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    // Open output file
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read each char, convert to uppercase, write it
    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, fout);
    }

    printf("Conversion complete. Check output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}
