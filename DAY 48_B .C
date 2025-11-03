#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    char *wordStart = NULL;
    int i;

    printf("Enter a sentence: ");
    gets(str); 

    for (i = 0; i <= strlen(str); i++) {
        if (wordStart == NULL && str[i] != ' ' && str[i] != '\0') {
            wordStart = &str[i];  }


        if ((str[i] == ' ' || str[i] == '\0') && wordStart != NULL) {
            reverseWord(wordStart, &str[i - 1]);  
            wordStart = NULL;  
        }
    }

    printf("Reversed each word: %s\n", str);
    return 0;
}
