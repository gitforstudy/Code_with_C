#include <stdio.h>

int bitwiseSubtract(int a, int b) {
    while (b != 0) {
        // Borrow contains common set bits of a and b
        int borrow = (~a) & b;

        // Subtraction of bits of a and b where at least one of the bits is not set
        a = a ^ b;

        // Borrow is shifted by one so that subtracting it from a gives the required difference
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers to subtract: ");
    scanf("%d %d", &num1, &num2);

    int result = bitwiseSubtract(num1, num2);
    printf("Result of subtraction: %d\n", result);

    return 0;
}

