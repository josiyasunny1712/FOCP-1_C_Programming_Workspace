#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;
    printf("Enter two numbers to add: ");
    if (scanf("%d %d", &a, &b) == 2) {
        printf("Result: %d\n", sum(a, b));
    }
return 0;
}