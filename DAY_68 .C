//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n-1];  // array contains n-1 elements
    printf("Enter %d elements (numbers from 0 to %d with one missing):\n", n-1, n);
    for (int i = 0; i < n-1; i++)
        scanf("%d", &arr[i]);

    // Calculate sum of numbers from 0 to n
    int total = n * (n + 1) / 2;

    // Subtract sum of array elements
    int sum = 0;
    for (int i = 0; i < n-1; i++)
        sum += arr[i];

    int missing = total - sum;

    printf("The missing number is: %d\n", missing);

    return 0;
}
