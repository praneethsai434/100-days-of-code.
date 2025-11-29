//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n')
        str[len-1] = '\0';

    // Convert to sentence case
    int firstLetterFound = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!firstLetterFound && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            firstLetterFound = 1;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
