#include <stdio.h>
int main() {
    int t;
    long long n;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        if (scanf("%lld", &n) != 1) continue;
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}