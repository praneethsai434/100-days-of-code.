#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percentage;

   
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%", percentage);
    }
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%", percentage);
    }
    else {
        printf("No Profit, No Loss.");
    }

    return 0;
}
