#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea of the rectangle = %.2f", area);
    printf("\nPerimeter of the rectangle = %.2f", perimeter);

    return 0;
}

