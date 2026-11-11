#include <stdio.h>

int main() {
    int num;
    char str[16]; // String length up to 15 + 1 for null terminator

    // Read the integer from standard input
    scanf("%d", &num);

    // Read the string from standard input
    scanf("%s", str);

    // Print the integer multiplied by 2
    printf("%d\n", num * 2);

    // Print the string
    printf("%s\n", str);

    return 0;
}