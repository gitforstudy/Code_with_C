//C program to find gcd of two numbers
#include <stdio.h>
int main(void)
{
	int num1, num2, gcd, remainder, numerator, denominator;
	printf("Enter two positive integers: ");//asking the user to give two positive integers
	scanf("%d %d", &num1, &num2);//reading the inputs from the user
	numerator = (num1 > num2) ? num1 : num2;//finding the numerator using two numbers
	denominator = (num1 < num2) ? num1 : num2;//finding the denominator using the given numbers
	remainder = numerator % denominator;//finding the remainder of two numbers
	while(remainder != 0){//loop executed until condition fails
		numerator = denominator;//storing denominator to numerator
		denominator = remainder;//storing remainder to denominator
		remainder = numerator % denominator;//storing reminder value of numerator and denominator to remainder
	}
	gcd = denominator;//storing denominator to gcd
	printf("The gcd of %d and %d is: %d\n", num1, num2, gcd);//printing the gcd of given two numbers
	return 0;
}
