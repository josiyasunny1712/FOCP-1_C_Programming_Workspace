#include <stdio.h>
int main() {
    int n, grade;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &grade) != 1) continue;
        if (grade >= 38 && (5 - (grade % 5)) < 3) {
            grade += (5 - (grade % 5));
        }
        printf("%d\n", grade);
    }
    return 0;
}