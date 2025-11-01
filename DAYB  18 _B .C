#include <stdio.h>

int main() {
    int num1, num2, hcf;

    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2;

   
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}

