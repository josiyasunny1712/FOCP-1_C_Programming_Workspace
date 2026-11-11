#include <stdio.h>
int countOperations(int num1, int num2) {
    int ops = 0;
    while (num1 > 0 && num2 > 0) {
        if (num1 >= num2) num1 -= num2;
        else num2 -= num1;
        ops++;
    }
    return ops;
}
int main() {
    int n1, n2;
    if (scanf("%d %d", &n1, &n2) == 2) {
        printf("%d\n", countOperations(n1, n2));
    }
    return 0;
}