#include <stdio.h>
int smallestEvenMultiple(int n) {
    return (n % 2 == 0) ? n : n * 2;
}
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%d\n", smallestEvenMultiple(n));
    }
    return 0;
}