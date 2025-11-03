#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    gets(str); 
    
    len = strlen(str);

    printf("\nAll possible substrings are:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {

            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
