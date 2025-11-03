#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);  

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
