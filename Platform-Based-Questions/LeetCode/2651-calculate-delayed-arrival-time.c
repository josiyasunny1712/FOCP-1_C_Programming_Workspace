#include <stdio.h>
int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return (arrivalTime + delayedTime) % 24;
}
int main() {
    int arrival, delay;
    printf("Enter arrival time (0-23) and delay hours: ");
    if (scanf("%d %d", &arrival, &delay) == 2) {
        printf("Actual Arrival Time: %d\n", findDelayedArrivalTime(arrival, delay));
    }
    return 0;
}