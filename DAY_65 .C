//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];

    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    int lenS = strlen(s);
    int lenT = strlen(t);

    // If lengths are not equal, they cannot be anagrams
    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    // Array to store frequency of letters 'a' to 'z'
    int freq[26] = {0};

    // Count characters in first string
    for (int i = 0; i < lenS; i++)
        freq[s[i] - 'a']++;

    // Subtract count using second string
    for (int i = 0; i < lenT; i++)
        freq[t[i] - 'a']--;

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
