#include <stdio.h>
int main() {
    int n1 = 0, n2 = 1, n3;
    printf("%d %d ", n1, n2);
    for (int i = 3; i <= 10; i++) {
        n3 = n1 + n2;
        printf("%d ", n3);
