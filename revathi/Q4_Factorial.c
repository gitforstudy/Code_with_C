/*Write a program to find the factorial of a given number.*/
#include <stdio.h>

int main() {
	int n;
	int factorial = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	if (n < 0) // Check if the input is negative

	{
		printf("Factorial is not defined for negative numbers.\n");
	} 
	else 
	{
		for (int i = 1; i <= n; i++) // Calculate factorial

		{
			factorial *= i;
		}

		// Output the result
		printf("Factorial of %d = %d\n", n, factorial);
	}

	return 0;
}

