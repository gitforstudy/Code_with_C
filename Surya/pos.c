#include <stdio.h>

int main() {
    unsigned int num; // Input number
    unsigned int pos1, pos2; // Positions to swap

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter two positions to swap separated by space: ");
    scanf("%u %u", &pos1, &pos2);

    printf("Original number: %u\n", num);
    printf("Positions to swap: %u and %u\n", pos1, pos2);

    // Ensure positions are different and within the range of bits in the number
    if (pos1 != pos2 && pos1 < sizeof(unsigned int) * 8 && pos2 < sizeof(unsigned int) * 8) {
        // Extract the bits at pos1 and pos2
        unsigned int bit1 = (num >> pos1) & 1;
        unsigned int bit2 = (num >> pos2) & 1;

        // XOR the bits to swap them
        unsigned int mask = (bit1 << pos2) | (bit2 << pos1);
        
        // Apply the mask to swap the bits
        unsigned int swappedNum = num ^ mask;

        printf("Number after swapping bits at positions %u and %u: %u\n", pos1, pos2, swappedNum);
    } else {
        printf("Invalid positions for swapping.\n");
    }

    return 0;
}
