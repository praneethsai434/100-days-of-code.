//Show that enums store integers by printing assigned values.
#include <stdio.h>

// Example enum
enum Status {
    SUCCESS = 10,
    FAILURE,    // 11
    TIMEOUT = 20,
    PENDING     // 21
};

int main() {
    printf("Enum values stored as integers:\n");
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    printf("PENDING = %d\n", PENDING);

    return 0;
}
