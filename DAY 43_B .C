#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);  // Use fgets() for safer input in modern C

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
