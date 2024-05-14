#include <stdio.h>

int main() {
    int dividend, divisor;

    // Input the two integers
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    
    if (divisor == 0) {
        printf("Error: Division by zero\n");
        return 1;
    }

    int quotient = 0;
    int remainder = 0;

    // Perform bitwise division
    for (int i = 31; i >= 0; i--) {
        remainder <<= 1; // Left shift remainder by 1
        remainder |= (dividend >> i) & 1; // Take next bit from dividend
        if (remainder >= divisor) {
            remainder -= divisor;
            quotient |= (1 << i); // Set corresponding bit in quotient
        }
    }

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

