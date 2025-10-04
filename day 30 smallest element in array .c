#include <stdio.h>
int main() {
    int arr[5] = {15, 9, 22, 3, 18};
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Smallest element = %d", min);
    return 0;
}
