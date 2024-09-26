#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power
    while (exponent != 0) {
        result *= base;
        --exponent;
    }

    printf("Result: %lld\n", result);

    return 0;
}

