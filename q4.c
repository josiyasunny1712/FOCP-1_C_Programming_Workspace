#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Typecast to float to preserve decimal values
    average = (float)(num1 + num2 + num3) / 3;

    printf("Average = %.2f\n", average);

    return 0;
}