//program to get bits from a position

#include<stdio.h>

unsigned get_bit(unsigned int num, unsigned int pos)
{
	return ((x << (p + 1 -n)) & ~(0 << n));
}

int main(void)
{
	unsigned int num,pos,n;
	printf("enter the number:");
	scanf("%x",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	printf("enter n bits:");
	scanf("%d",&n);
	unsigned int getbits = get_bit(num,pos);
	printf("Getbits:%x",getbits);
	return 0;
}
