#include<stdio.h>
#include<stdlib.h>


unsigned int copybit(unsigned int src,unsigned int dest,unsigned int s,unsigned int d, unsigned int n)
{
	return (dest | ((src >> (s + 1 - n)) << (d + 1 - n)));
}
int main(void)
{
	unsigned int src,dest,s,d,n;
	printf("enter the 1st num:\n");
	scanf("%x",&src);
	printf("enter the 2nd num:\n");
	scanf("%x",&dest);
	printf("enter the no.of bits:\n");
	scanf("%u",&n);
	printf("enter the position in 1st num:");
	scanf("%u",&s);
	printf("enter the position in 2nd num:\n");
	scanf("%u",&d);
	unsigned int copy_bits = copybit(src,dest,s,d,n);
	printf("After copying:%x",copy_bits);
	return 0;
}
