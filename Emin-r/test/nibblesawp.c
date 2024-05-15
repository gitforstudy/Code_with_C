#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number to swap the nibble : \n");
	
	scanf("%d",&n);
	
	printf("The number after swapping the nibble is %d \n",(n&0x0F)<<4 | (n&0xF0)>>4);
	
	return 0;
}
