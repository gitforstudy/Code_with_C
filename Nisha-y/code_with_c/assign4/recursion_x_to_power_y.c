
#include <stdio.h>

// Function to calculate x raised to the power y recursively
int power(int x, int y) {
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int main() {
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d %d", &x, &y);
    printf("%d raised to the power %d is: %d\n", x, y, power(x, y));
    return 0;
}

