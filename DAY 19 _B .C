#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

   
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    while (num != 0) {
        remainder = num % 10;   // Get last digit
        sum += remainder;        // Add to sum
        num /= 10;               // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
