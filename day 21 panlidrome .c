#include <stdio.h>
int main() {
    int n = 121, rev = 0, temp = n;
    for (; n != 0; n /= 10) {
        rev = rev * 10 + n % 10;
    }
    if (rev == temp)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}



