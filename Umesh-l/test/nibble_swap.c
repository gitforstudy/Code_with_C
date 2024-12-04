#include<stdio.h>
void main()
{
	unsigned int num = 0x1234;
	int r1,r2,r3,r4;

	r1= num & 0X000f;
	r1= r1<<12;
	
	r2= num & 0x00f0;
	r2= r2 << 4;

	r3= num & 0x0f00;
	r3= r3 >> 4;
	
	r4= num & 0xf000;
	r4= r4>>12;

	num= r1|r2|r3|r4;

	printf("%x\n",num);
}
