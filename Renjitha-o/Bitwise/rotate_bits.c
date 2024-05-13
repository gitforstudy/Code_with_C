// program to left rotate and right rotate the bits of a number

#include<stdio.h>

unsigned int left_rotate(unsigned int num, int d)
{
        unsigned int result = ((num << d) | num >> (32 - d));
	return result & 0xFFFF;
}

unsigned int right_rotate(unsigned int num, int d)
{
	unsigned int result = ((num >> d) | num << (32 - d));
	return result & 0xFFFF;
}

int main(void)
{
	unsigned int num ,left,right;
	int pos;
	printf("enter the number:\n");
	scanf("%x",&num);
	printf("how many times to rotate:\n");
	scanf("%d",&pos);
	left = left_rotate(num,pos);
	right = right_rotate(num,pos);
	printf("After left rotation:%x\n",left);
	printf("After right rotation:%x\n",right);
	return 0;

}
