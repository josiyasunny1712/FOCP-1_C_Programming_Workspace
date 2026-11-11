#include <stdio.h>
int accountForFuelTransfers(int mainTank, int additionalTank) {
    int distance = 0;
    while (mainTank >= 5) {
        distance += 50;
        mainTank -= 5;
        if (additionalTank > 0) { 
            mainTank += 1; 
            additionalTank -= 1; 
        }
    }
    return distance + (mainTank * 10);
}
int main() {
    int mainTank, additionalTank;
    if (scanf("%d %d", &mainTank, &additionalTank) == 2) {
        printf("%d\n", accountForFuelTransfers(mainTank, additionalTank));
    }
    return 0;
}