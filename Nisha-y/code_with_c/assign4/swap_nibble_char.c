#include <stdio.h>

unsigned char swapNibbles(unsigned char x) {
    return (x << 4) | (x >> 4);
}

int main() {
    unsigned char num;
    
    printf("Enter a number (0-255): ");
    scanf("%hhu", &num);

    printf("Original number: %u\n", num);
    
    unsigned char swapped = swapNibbles(num);
    
    printf("Number after swapping nibbles: %u\n", swapped);

    return 0;
}

