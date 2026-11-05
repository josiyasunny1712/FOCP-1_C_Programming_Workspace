#include <stdio.h>

int main() {
    float basicSalary, allowance, bonus, finalSalary;

    printf("Enter Basic Salary, Allowance, and Bonus: ");
    scanf("%f %f %f", &basicSalary, &allowance, &bonus);

    finalSalary = basicSalary + allowance + bonus;

    printf("Final Salary = %.2f\n", finalSalary);

    return 0;
}