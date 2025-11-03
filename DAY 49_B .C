#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len, lastSpaceIndex = -1;

    printf("Enter your full name: ");
    gets(name); 

    len = strlen(name);

    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpaceIndex = i;
    }

    printf("Formatted Name: ");

    if (isalpha(name[0]))
        printf("%c. ", toupper(name[0]));

    for (i = 1; i < len; i++) {
        if (name[i - 1] == ' ' && i < lastSpaceIndex)
            printf("%c. ", toupper(name[i]));
    }

    if (lastSpaceIndex != -1) {
        printf("%s\n", &name[lastSpaceIndex + 1]);
    } else {
        
        printf("%s\n", name);
    }

    return 0;
}

