#include <stdio.h>

unsigned int swapNibbles(unsigned int x) {
		
	int r,r2,num;
		r= x & 0X0f;
		r= r<<4;

		r2= x & 0Xf0;
		r2=r2>>4;

	num=r|r2;
    return num;
}

int main() {
    unsigned int num;
    /*
    printf("Enter a number (0-255): ");
    scanf("%d", &num);
*/
  	num=0x12;

  //  printf("Original number: %u\n", num);
    
    unsigned int swapped = swapNibbles(num);
    
    printf("Number after swapping nibbles: %x\n", swapped);

    return 0;
}

