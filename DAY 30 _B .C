#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, zero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive elements = %d\n", pos);
    printf("Negative elements = %d\n", neg);
    printf("Zero elements = %d\n", zero);

    return 0;
}
