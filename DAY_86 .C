//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice;
    int a, b, result;

    printf("Menu:\n");
    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
