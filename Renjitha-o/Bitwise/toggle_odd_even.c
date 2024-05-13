//program to toggle odd and even bits of a number

#include<stdio.h>

unsigned int toggle_odd(unsigned int num)
{
	for(int i = 7; i >= 0; i--) {
		if(i % 2 != 0) {
			num = num ^ (1 << i);
		}
	}
	return num;
}

unsigned int toggle_even(unsigned int num)
{
        for(int i = 7; i >= 0; i--) {
                if(i % 2 == 0) {
                        num = num ^ (1 << i);
                }
        }
        return num;
}

void showbits(unsigned int toggle)
{
	int i;
	for(i = 7; i >= 0; i--){
		if (toggle & (1 << i)) {
			printf("1");
		}else {
			printf("0");
		}
	}
}
int main(void)
{
	unsigned int num,toggle_odd_bit,toggle_even_bit;
	printf("enter the number:");
	scanf("%x",&num);
	toggle_odd_bit = toggle_odd(num);
	toggle_even_bit = toggle_even(num);
	printf("After toggling odd bits:");
	showbits(toggle_odd_bit);
	printf("\n");
	printf("After toggling even bit:");
	showbits(toggle_even_bit);
	printf("\n");
	return 0;
}
