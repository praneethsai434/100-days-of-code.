#include <stdio.h>

int main() {
    int i, j;

  
    for (i = 1; i <= 5; i++) {
        // Inner loop for columns
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
