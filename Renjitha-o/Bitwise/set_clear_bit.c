#include <stdio.h>

#define set_bits(num,p) (num |= (1 << p))

#define clear_bits(num,p) (num &= (1 << p))

void showbits(unsigned int num)
{
	for(int i = 7; i>= 0; i--) {
		printf("%d",(num >> i)&1);
	}
}

int main(void)
{
	unsigned int num;
	int pos1,pos2;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the position:");
	scanf("%d",&pos1);
	printf("enter the position:");
        scanf("%d",&pos2);
	unsigned int set = set_bits(num,pos1);
	unsigned int clear = clear_bits(num,pos2);
	printf("After setting at %d position:",pos1);
	showbits(set);
	printf("After setting at %d position:",pos2);
        showbits(clear);
	return 0;
}
