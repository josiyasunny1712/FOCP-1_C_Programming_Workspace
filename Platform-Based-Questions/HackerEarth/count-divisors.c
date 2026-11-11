#include <stdio.h>
int main() {
    int l, r, k, count = 0;
    if (scanf("%d %d %d", &l, &r, &k) == 3) {
        for (int i = l; i <= r; i++) {
            if (i % k == 0) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}