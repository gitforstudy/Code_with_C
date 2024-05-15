#include<stdio.h>


int main()
{
	int n;
	printf("Enter the number to swap the nibble : \n");
	scanf("%d",&n);
	
	int firstnibble=(n&0x0F)<<4; 
	int secondnibble=(n & 0xF0)>>4;
	
	int res = firstnibble|secondnibble;
	
	printf("The number after swapping the nibble is %d \n",res);
	
	return 0;
}
