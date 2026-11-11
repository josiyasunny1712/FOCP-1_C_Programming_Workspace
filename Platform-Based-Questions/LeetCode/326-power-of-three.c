#include <stdio.h>
#include <stdbool.h>
bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    while (n % 3 == 0) n /= 3;
    return n == 1;
}
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%s\n", isPowerOfThree(n) ? "true" : "false");
    }
    return 0;
}