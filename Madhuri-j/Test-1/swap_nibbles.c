//C program to swap nibbles


#include <stdio.h>

void to_bin(int num)
{
	int i;
	for(i = 31; i >= 0; i--) {
		printf("%d", num>>i&1);
	}
	printf("\n");
}

void swap_nibble(int number)
{
        int left, right;
        left = number & 0x0f0f0f0f;
        left = left << 4;
        right = number & 0xf0f0f0f0;
        right = right >> 4;
        number = left | right;
        to_bin(number);

}

int main(void)
{
	unsigned int num;
	printf("Enter the number: ");
	scanf("%x", &num);
	to_bin(num);
	swap_nibble(num);
	return 0;
}
