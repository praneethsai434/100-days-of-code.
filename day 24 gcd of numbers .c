#include <stdio.h>
int main() {
    int a = 36, b = 60, gcd;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    printf("GCD = %d", gcd);
    return 0;
}
