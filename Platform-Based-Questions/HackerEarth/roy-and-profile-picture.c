#include <stdio.h>
int main() {
    int L, N, W, H;
    if (scanf("%d %d", &L, &N) != 2) return 0;
    for (int i = 0; i < N; i++) {
        if (scanf("%d %d", &W, &H) != 2) continue;
        if (W < L || H < L) {
            printf("UPLOAD ANOTHER\n");
        } else if (W == H) {
            printf("ACCEPTED\n");
        } else {
            printf("CROP IT\n");
        }
    }
    return 0;
}