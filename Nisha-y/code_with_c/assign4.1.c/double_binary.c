#include <stdio.h>

// Union to interpret the bits of a double
typedef union {
    double d;
    unsigned long long int i;
} DoubleUnion;

// Function to print the binary representation of a double
void printDoubleBinary(double num) {
    DoubleUnion du;
    du.d = num;
    
    // Size of a double in bits
    int size = sizeof(double) * 8;

    // Iterate through each bit of the double
    for (int i = size - 1; i >= 0; i--) {
        // Check if the bit at position i is set
        if (du.i & (1ULL << i)) {
            printf("1");
        } else {
            printf("0");
        }
        
        // Print space for readability
        if (i == 63 || i == 52) {
            printf(" ");
        }
    }
}

int main() {
    double num;

    // Input the double number
    printf("Enter a double number: ");
    scanf("%lf", &num);

    printf("Binary representation of %.2lf: ", num);
    printDoubleBinary(num);
    printf("\n");

    return 0;
}

