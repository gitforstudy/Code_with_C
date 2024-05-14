#include <stdio.h>

int setBit(int num, int pos) {
    // Left shift 1 by pos to create a mask with only the bit at position pos set
    int mask = 1 << pos;
    
    // Perform bitwise OR with the number to set the bit at position pos
    num |= mask;
    
    return num;
}

int main() {
    int num, pos;

    // Input number and position from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the position of the bit to set (0-based indexing): ");
    scanf("%d", &pos);

    // Call setBit function to set the bit at the specified position
    int result = setBit(num, pos);

    // Output the result
    printf("Number after setting bit at position %d: %d\n", pos, result);

    return 0;
}

