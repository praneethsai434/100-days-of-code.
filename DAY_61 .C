//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Window size cannot be greater than array size.\n");
        return 0;
    }

    printf("First negative integers in each window:\n");

    // Brute force approach
    for (int i = 0; i <= n - k; i++) {
        int found = 0;  // flag to check if negative exists
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;  // first negative found, stop inner loop
            }
        }
        if (!found)
            printf("0 ");  // no negative in this window
    }

    printf("\n");
    return 0;
}
