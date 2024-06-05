//program to swap nibble of a given number

#include<stdio.h>
int main(void)
{
	unsigned int num;
	printf("enter the number:\n");
	scanf("%x",&num);
	unsigned int mask1 = 0x0f0f;
	unsigned int  mask2 = 0xf0f0;
	num = ((num & mask1) << 4 ) ^ ((num & mask2) >> 4);
	printf("swap:%x",num);

	return 0;
}
