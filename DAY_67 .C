//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d elements of first array (sorted):\n", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d elements of second array (sorted):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge arrays
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements of arr1
    while (i < m)
        merged[k++] = arr1[i++];

    // Copy remaining elements of arr2
    while (j < n)
        merged[k++] = arr2[j++];

    // Print merged array
    printf("Merged sorted array:\n");
    for (int idx = 0; idx < m + n; idx++) {
        if (idx != m + n - 1)
            printf("%d ", merged[idx]);
        else
            printf("%d\n", merged[idx]);
    }

    return 0;
}
