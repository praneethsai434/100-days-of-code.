//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of subarray (k): ");
    scanf("%d", &k);

    if (k > n) {
        printf("k cannot be greater than array size.\n");
        return 0;
    }

    // Compute sum of first k elements
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    int window_sum = max_sum;

    // Slide the window
    for (int i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];
        if (window_sum > max_sum)
            max_sum = window_sum;
    }

    printf("Maximum sum of subarray of size %d: %d\n", k, max_sum);

    return 0;
}
