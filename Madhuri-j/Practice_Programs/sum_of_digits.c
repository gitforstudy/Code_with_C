#include <stdio.h>
int sum = 0;
int sum_of_digits(int num){
	int rem, digit;

	if(num) {
		digit = num % 10;
		sum = sum + digit;
		rem = num / 10;
		sum_of_digits(rem);
	}
	return sum;
}

int main(void)
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("%d\n", sum_of_digits(num));
	return 0;
}
