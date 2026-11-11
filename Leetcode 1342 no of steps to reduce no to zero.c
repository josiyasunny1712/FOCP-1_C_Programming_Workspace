#include <stdio.h>
int numberOfSteps(int num) {
    int steps = 0;
    while (num > 0) {
        num = (num % 2 == 0) ? num / 2 : num - 1;
        steps++;
    }
    return steps;
}
int main() {
    int num;
    if (scanf("%d", &num) == 1) {
        printf("%d\n", numberOfSteps(num));
    }
    return 0;
}