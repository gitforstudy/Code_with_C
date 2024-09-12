#include <stdio.h>

int main(void)
{
	int num = 152,rem = 0,sum =0;
	int numc = num;
	while (num != 0) {
		rem = num % 10;
		sum = sum +(rem * rem *rem);
		num = num / 10;
	}

	if( numc == sum) {
		printf("Armstrong num");
	} else {
		printf("Not Armstrong num");
	}
	return 0;
}
