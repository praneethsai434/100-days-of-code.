//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);  // read string without spaces

    int n = strlen(s);
    int maxLen = 0;

    // Brute force approach (nested loops)
    for (int i = 0; i < n; i++) {
        int visited[256] = {0};  // ASCII characters
        int currLen = 0;

        for (int j = i; j < n; j++) {
            if (visited[(int)s[j]] == 1)
                break;  // repeating character found
            visited[(int)s[j]] = 1;
            currLen++;
        }

        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
