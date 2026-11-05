#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter two integers (Dividend and Divisor): ");
    scanf("%d %d", &dividend, &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}