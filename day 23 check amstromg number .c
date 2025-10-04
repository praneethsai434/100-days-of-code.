#include <stdio.h>
int main() {
    int n = 153, temp = n, sum = 0, digit;
    for (; n > 0; n /= 10) {
        digit = n % 10;
        sum += digit * digit * digit;
    }
    if (sum == temp)
        printf("Armstrong number");
    else
        printf("Not Armstrong");
    return 0;
}
