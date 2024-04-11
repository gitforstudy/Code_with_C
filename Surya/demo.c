
#include<stdio.h>
/* This program performs Toggling a bit  */
unsigned int toggleBit(unsigned int num, int bit_index)
{

	unsigned int mask = 1 << bit_index;
	return num ^ mask;
}

int main()
{
	unsigned int num;
	int bit_index;
	printf("Enter a number in decimal \n");
	scanf("%u",&num);
       	printf("Enter the index of the bit to toggle\n");
       	scanf("%d",&bit_index);
	if(bit_index < 0 || bit_index > 31)
	{

	printf("Invalid bit_index it should be between 0 and 31: \n");
	return 1;
	}
      	unsigned int toggled_num = toggleBit(num,bit_index);
      	printf("The number after toglling bit %d is : %u\n",bit_index ,toggled_num);
      	return 0;
}
