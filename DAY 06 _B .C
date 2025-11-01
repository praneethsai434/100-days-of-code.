#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0) {
        if (num == 0)
            printf("The number is zero.");
        else
            printf("The number is positive.");
    } else {
        printf("The number is negative.");
    }

    return 0;
}

