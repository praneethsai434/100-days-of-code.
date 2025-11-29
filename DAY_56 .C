//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next Greater Elements:\n");

    for (int i = 0; i < n; i++) {
        int nge = -1;  // default if no greater element exists
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nge = arr[j];
                break;  // nearest greater element found
            }
        }
        if (i != n - 1)
            printf("%d,", nge);
        else
            printf("%d", nge);  // no comma after last element
    }

    printf("\n");
    return 0;
}

