//program to swap 2 bits of a number

#include<stdio.h>

unsigned swap_bit(unsigned int num,unsigned int x,unsigned int y)
{
	unsigned int swap1,swap2;
	swap1 = (num >> x) & 1;
	swap2 = (num >> y) & 1;
	if(swap1 == swap2) {
		printf("same bits\n");
		return num;
	}else {
		//unsigned int temp1 = ~((num >> x) & 1);
		//unsigned int temp2 = ~((num >> y) 
		 num= num ^ (1 << x);
		num = num ^ (1 << y);
		//printf("%d %d",temp1,temp2);
		return num;
	}
}
int main(void)
{
	unsigned int num,x,y,swapbit;
	printf("enter the number:\n");
	scanf("%x",&num);
	printf("enter 2 bits:\n");
	scanf("%d %d",&x,&y);
	swapbit = swap_bit(num,x,y);
	printf("After swapping:%x",swapbit);
	return 0;
}
