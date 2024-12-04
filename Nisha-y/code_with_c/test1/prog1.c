//Swap bit positions in an given integer value
#include <stdio.h>

 int swapBits( int num, int pos1, int pos2) {
    
    if (((num >> pos1) & 1) != ((num >> pos2) & 1)) {//here i am checking bits in pos1 and pos2 should not be same
       
        num = num ^ ((1 << pos1) | (1 << pos2));//my approch is mask pos1 and pos2 and apply OR operation at last apply XOR
    }
    return num;
}

int main() {
     int num;
    int pos1, pos2;

    
    printf("Enter an integer: ");
    scanf("%u", &num);
    printf("Enter the positions to swap (indexing start from 0)");
    scanf("%d %d", &pos1, &pos2);

    
    if (pos1 < 0 || pos2 < 0) {
        printf("Invalid positions\n");
        return 1;
    }

    
     int result = swapBits(num, pos1, pos2);
    printf("Number after swapping bits at positions %d and %d: %d\n", pos1, pos2, result);

    return 0;
}


