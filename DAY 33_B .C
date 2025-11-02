#include <stdio.h>

int main() {
    int arr[100], n, num, i, j;

    printf("Enter number of elements (sorted order): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] > num)
            break;
    }

    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    arr[i] = num;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
