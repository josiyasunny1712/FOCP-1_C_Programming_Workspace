#include <stdio.h>
int countDigits(int num) {
    int val = num, count = 0;
    while (val > 0) {
        int d = val % 10;
        if (d != 0 && num % d == 0) count++;
        val /= 10;
    }
    return count;
}
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%d\n", countDigits(n));
    }
    return 0;
}