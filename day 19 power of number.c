#include <stdio.h>
int main() {
    int m = 2, n = 5, result = 1;
    for (int i = 1; i <= n; i++) {
        result *= m;
    }
    printf("%d^%d = %d", m, n, result);
    return 0;
}
