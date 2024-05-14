#include <stdio.h>

int clearBit(int num, int pos) {
    // Left shift 1 by pos to create a mask with only the bit at position pos set
    int mask = 1 << pos;
    
    // Perform bitwise NOT with the mask to create a mask with all bits set except the bit at position pos
    mask = ~mask;
    
    // Perform bitwise AND with the number to clear the bit at position pos
    num &= mask;
    
    return num;
}

int main() {
    int num, pos;

    // Input number and position from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the position of the bit to clear (0-based indexing): ");
    scanf("%d", &pos);

    // Call clearBit function to clear the bit at the specified position
    int result = clearBit(num, pos);

    // Output the result
    printf("Number after clearing bit at position %d: %d\n", pos, result);

    return 0;
}

