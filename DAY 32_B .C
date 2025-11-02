#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0}, max = 0, mostFrequentDigit;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;

    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs most frequently is: %d\n", mostFrequentDigit);
    printf("It occurs %d times.\n", max);

    return 0;
}
