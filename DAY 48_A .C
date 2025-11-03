#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("No, the strings are not rotations of each other.\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
        printf("Yes, '%s' is a rotation of '%s'.\n", str2, str1);
    else
        printf("No, the strings are not rotations of each other.\n");

    return 0;
}
