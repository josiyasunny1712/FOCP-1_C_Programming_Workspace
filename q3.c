#include <stdio.h>

int main() {
    float price, totalBill;
    int quantity;

    printf("Enter item price: ");
    scanf("%f", &price);
    printf("Enter quantity purchased: ");
    scanf("%d", &quantity);

    totalBill = price * quantity;

    printf("Total Bill = $%.2f\n", totalBill);

    return 0;
}