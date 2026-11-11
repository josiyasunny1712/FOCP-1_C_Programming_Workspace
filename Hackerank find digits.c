#include <stdio.h>
int main() {
    int t, n;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        if (scanf("%d", &n) != 1) continue;
        int temp = n, count = 0;
        while (temp > 0) {
            int d = temp % 10;
            if (d != 0 && n % d == 0) count++;
            temp /= 10;
        }
        printf("%d\n", count);
    }
    return 0;
}