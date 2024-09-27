/*WAP to calculate the power of a number using loops. */
#include <stdio.h>

int main() {
    int base, exponent, result = 1, i = 1;

    printf("Enter base and exponent values: ");
    scanf("%d %d", &base, &exponent);

    // Calculate the power using a loop
    while (i <= exponent) {
        result *= base; // Multiply the result by the base
        i++; // Increment the counter
    }

    // Output the result
    printf("Result: %d\n", result);

    return 0;
}

