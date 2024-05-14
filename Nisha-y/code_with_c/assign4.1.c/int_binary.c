#include <stdio.h>

// Function to print the binary representation of an integer
void printBinary(int num) {
    // Size of an integer in bits
    int size = sizeof(int) * 8;

    // Iterate through each bit of the integer
    for (int i = size - 1; i >= 0; i--) {
        // Check if the bit at position i is set
        if (num & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
}

int main() {
    int num;

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary representation of %d: ", num);
    printBinary(num);
    printf("\n");

    return 0;
}

