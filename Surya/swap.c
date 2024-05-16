#include <stdio.h>

    int main() {
    int num;
    printf("Original number: ");
    scanf("%d",&num);
    
    int x = ((num & 0x0F) << 4) | ((num & 0xF0) >> 4);

    printf("Number after swapping nibbles: %d\n", x);
    
    return 0;
   }
