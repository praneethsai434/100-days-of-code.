#include <stdio.h>

int main() {
    float a, b, c;


    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);


    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        
        // Classify the triangle
        if (a == b && b == c) {
            printf("The triangle is


