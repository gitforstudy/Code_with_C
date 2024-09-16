// C program to find reverse of a number using recursion

#include <stdio.h>
int reverse = 0,count = 0;
int reverse_num(int num) {
	if (num == 0) {
		return 0;
	}else {
		if(num) {
			count = num % 10;
			reverse =reverse * 10 + count;
			reverse_num(num/10);
		}
	}
	return reverse;
}
int main(void)
{
	int num,reverse;
	printf("enter the number:");
	scanf("%d",&num);
	reverse = reverse_num(num);
	printf("%d\n",reverse);
	return 0;
}
