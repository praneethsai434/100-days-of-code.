#include <stdio.h>

int main() {
    float percentage;

    printf("Enter your percentage (0 - 100): ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.");
    }
    else if (percentage >= 90 && percentage <= 100) {
        printf("Grade A");
    }
    else if (percentage >= 80 && percentage < 90) {
        printf("Grade B");
    }
