//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    printf("Enter Status Code (0-SUCCESS, 1-FAILURE, 2-TIMEOUT): ");
    scanf("%d", &s);

    switch (s) {
        case SUCCESS:
            printf("Operation Successful!\n");
            break;

        case FAILURE:
            printf("Operation Failed!\n");
            break;

        case TIMEOUT:
            printf("Operation Timed Out!\n");
            break;

        default:
            printf("Invalid Status Code!\n");
    }

    return 0;
}
