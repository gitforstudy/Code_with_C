#include <stdio.h>
int main(void)
{
	int num,rem = 0,sum_digit = 0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num > 0) {
		rem = num % 10;
		sum_digit = sum_digit +rem;
		num = num / 10;
	}
	printf("SUM OF DIGIT:%d",sum_digit);
}
