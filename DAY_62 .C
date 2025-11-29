//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_current = arr[0]; // current max sum ending here
    int max_global = arr[0];  // overall max sum

    for (int i = 1; i < n; i++) {
        // Max sum ending at index i
        if (max_current + arr[i] > arr[i])
            max_current = max_current + arr[i];
        else
            max_current = arr[i];

        // Update global max if needed
        if (max_current > max_global)
            max_global = max_current;
    }

    printf("Maximum sum of contiguous subarray: %d\n", max_global);

    return 0;
}
