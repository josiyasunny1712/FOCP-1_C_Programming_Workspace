#include <stdio.h>
int countOdds(int low, int high) {
    return (high - low) / 2 + (low % 2 != 0 || high % 2 != 0);
}
int main() {
    int low, high;
    if (scanf("%d %d", &low, &high) == 2) {
        printf("%d\n", countOdds(low, high));
    }
    return 0;
}