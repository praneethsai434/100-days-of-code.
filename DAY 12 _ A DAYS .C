#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);

 
    if (days <= 0) {
        printf("No fine. Book returned on time!");
    }
    else if (days <= 5) {
        fine = days * 2;
        printf("Fine = ₹%.2f", fine);
    }
    else if (days <= 10) {
        fine = (5 * 2) + (days - 5) * 4;
        printf("Fine = ₹%.2f", fine);
    }
    else if (days <= 30) {
        fine = (5
