#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input the two integers
    printf("Enter first integer: ");
    scanf("%d", &num1);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    int result = 0;
    
    // Iterate through each bit of the second integer
    while (num2 != 0) {
        // If the least significant bit of num2 is set, add num1 to result
        if (num2 & 1) {
            result += num1;
        }
        // Shift num1 left by 1 bit and num2 right by 1 bit
        num1 <<= 1;
        num2 >>= 1;
    }
    
    printf("Bitwise Product: %d\n", result);
    
    return 0;
}

