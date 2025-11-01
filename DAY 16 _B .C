#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // store original number

    
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }


    if (originalNum == reversedNum)
        printf("%d is a Palindrome.\n", originalNum);
    else
        printf("%d is Not a Palindrome.\n", originalNum);

    return 0;
}

