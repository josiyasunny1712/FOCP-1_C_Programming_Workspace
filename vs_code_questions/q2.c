#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    printf("Enter age, height (meters), and grade separated by spaces: ");
    scanf("%d %f %c", &age, &height, &grade);

    printf("\n--- Entered Details ---\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}