#include <stdio.h>
#include <stdbool.h>
bool checkPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) sum += num / i;
        }
    }
    return sum == num;
}
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%s\n", checkPerfectNumber(n) ? "true" : "false");
    }
    return 0;
}