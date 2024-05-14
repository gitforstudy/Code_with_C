#include <stdio.h>

// Union to interpret the bits of a float
typedef union {
    float f;
    unsigned int i;
} FloatUnion;

// Function to print the binary representation of a float
void printFloatBinary(float num) {
    FloatUnion fu;
    float f=23.2;
    int *p;
    p=(int*)&f;
   	int pos; 
    // Size of a float in bits
    int size = sizeof(float) * 8;

    // Iterate through each bit of the float
    for (int i = size - 1; i >= 0; i--) {
        // Check if the bit at position i is set
        if (*p>>i&1) {
            printf("1");
        } else {
            printf("0");
        }
        
        // Print space for readability
        if (i == 31 || i == 23) {
            printf(" ");
        }
    }
}

int main() {
    float num;

    // Input the float number
    printf("Enter a float number: ");
    scanf("%f", &num);

    printf("Binary representation of %.2f: ", num);
    printFloatBinary(num);
    printf("\n");

    return 0;
}

