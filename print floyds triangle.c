#include <stdio.h>
int main() {
    int n, val = 1; 
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d%s", val++, (j < i) ? " " : "");
        }
        printf("\n");
    }
    return 0;
}