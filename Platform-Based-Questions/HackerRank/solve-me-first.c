#include <stdio.h>
int solveMeFirst(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;
    printf("enter two space separated integers:");
    if (scanf("%d %d", &num1, &num2) == 2) {
        int sum = solveMeFirst(num1, num2);
        printf("%d\n", sum);
    }
    return 0;
}