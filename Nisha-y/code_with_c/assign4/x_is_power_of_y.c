#include <stdio.h>

int isPower(int x, int y) {
    // If x is 1, then it's only a power of y if y is also 1
    if (x == 1)
        return (y == 1);

    // Initialize power to y
    int power = y;

    // Keep multiplying power with y until it becomes greater than or equal to x
    while (power < x) {
        power *= y;
    }

    // If power becomes equal to x, then x is a power of y
    return (power == x);
}

int main() {
    int x, y;

    printf("Enter two numbers X and Y: ");
    scanf("%d %d", &x, &y);

    if (isPower(x, y))
        printf("%d is a power of %d\n", x, y);
    else
        printf("%d is not a power of %d\n", x, y);

    return 0;
}

