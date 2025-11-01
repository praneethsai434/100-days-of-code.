#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, hcf, lcm;

    
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a; // Highest Common Factor

    
    lcm = (num1 * num2) / hcf;

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
