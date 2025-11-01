#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    
    last = temp % 10;

    
    digits = (int)log10(temp);

    first = temp / pow(10, digits);

   
    swappedNum = last * pow(10, digits) + (temp % (int)pow(10, digits)) / 10 * 10 + first;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
