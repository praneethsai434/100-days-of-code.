#include <stdio.h>
#define PI 3.14159   

int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea of the circle = %.2f", area);
    printf("\nCircumference of the circle = %.2f", circumference);

    return 0;
}
