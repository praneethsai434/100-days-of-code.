#include <stdio.h>

int main() {
    int num, remainder;
    int product = 1;
    int hasOdd = 0; // to check if there are any odd digits

    
    printf("Enter an integer: ");
    scanf("%d", &num);

   
    if (num < 0)
        num = -num;

    
    while (num != 0) {
        remainder = num % 10; // get last digit

        if (remainder % 2 != 0) { // check if odd
            product *= remainder;
            hasOdd = 1;
        }

        num /= 10; // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}

