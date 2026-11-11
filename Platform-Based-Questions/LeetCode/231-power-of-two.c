#include <stdio.h>
#include <stdbool.h>
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%s\n", isPowerOfTwo(n) ? "true" : "false");
    }
    return 0;
}