#include <stdio.h>
int main(void)
{
	int num1, num2, gcd, remainder, numerator, denominator;
	printf("Enter two positive integers: ");
	scanf("%d %d", &num1, &num2);
	numerator = (num1 > num2) ? num1 : num2;
	denominator = (num1 < num2) ? num1 : num2;
	remainder = numerator % denominator;
	while(remainder != 0){
		numerator = denominator;
		denominator = remainder;
		remainder = numerator % denominator;
	}
	gcd = denominator;
	printf("The gcd of %d and %d is: %d\n", num1, num2, gcd);
	return 0;
}
