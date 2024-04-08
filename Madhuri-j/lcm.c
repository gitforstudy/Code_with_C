#include <stdio.h>
int main(void)
{
	int num1, num2, numerator, denominator, remainder, lcm;
	printf("Enter two positive integers: ");
	scanf("%d %d", &num1, &num2);
	numerator = (num1 > num2) ? num1 : num2;
	denominator = (num1 < num2) ? num1 : num2;
	remainder = numerator % denominator;
	while(remainder != 0) {
		numerator = denominator;
		denominator = remainder;
		remainder = numerator % denominator;
	}
	lcm = (num1 * num2) / denominator;
	printf("The lcm of %d and %d is: %d\n", num1, num2, lcm);
	return 0;
}
