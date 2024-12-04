#include <stdio.h>

// Function to swap nibbles in an integer
int swapNibbles(int x) {
    return ((x & 0x0F) << 4) | ((x & 0xF0) >> 4);
}

int main() {
    int num = 80; // Example input: 80 (equivalent to 0x50 in hexadecimal)

    printf("Original number: %d\n", num);

    // Swap the nibbles
    int swapped_num = swapNibbles(num);

    printf("Number after swapping nibbles: %d\n", swapped_num);

    return 0;
}

