#include <stdio.h>

void to_bin(int number)
{
	int i;
    	for(i = 15; i >= 0; i--) {
        	printf("%d",number>>i&1);//printing the binary number for number
    	}
    	printf("\n");
}

void swap_nibble(int number)
{
    	int left, right;
    	left = number & 0x0f0f;//masking 2nd and 4th nibbles
    	left = left << 4;//left shifting
    	right = number & 0xf0f0;//masking 1st and 3rd nibble
    	right = right >> 4;//right shifting
    	number = left | right;//or operation for left & right
    	to_bin(number);//func call to convert number to binary
    
}


int main(void)
{
    	unsigned int number;
    	printf("Enter the number: ");
    	scanf("%x", &number);
    	to_bin(number);//func call to convert number to binary
    	swap_nibble(number);//func call to swap nibbles
    	return 0;
    
}
