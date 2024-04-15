//C program to find the lcm of two numbers
#include <stdio.h>
int main(void)
{
	int num1, num2, numerator, denominator, remainder, lcm;
	printf("Enter two positive integers: ");//asking the user to enter two positive integers
	scanf("%d %d", &num1, &num2);//reading the inputs from the users
	numerator = (num1 > num2) ? num1 : num2;//finding the numerator using ternary operator
	denominator = (num1 < num2) ? num1 : num2;//finding the denominator of two numbers
	remainder = numerator % denominator;//remainder of numerator and denominator
	while(remainder != 0) {//loop executed until condition fails
		numerator = denominator;//storing denominator to numerator
		denominator = remainder;//storing remainder to denominator
		remainder = numerator % denominator;//storing remainder of numerator and denominator to remainder
	}
	lcm = (num1 * num2) / denominator;//finding the lcm using the formula
	printf("The lcm of %d and %d is: %d\n", num1, num2, lcm);//printing the lcm of two numbers
	return 0;
}
