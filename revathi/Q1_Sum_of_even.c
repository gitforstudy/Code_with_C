/*WAP to find the sum of first n even numbers.*/

#include <stdio.h>

int main() {
	int n, sum = 0;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) // Calculate the sum of first n even numbers
	{
		if(i%2==0)// Check if i is even
		{
			sum += i; //Add i to sum if it's even
		}
	}

	// Print the sum
	printf("Sum of the first %d even numbers = %d\n", n, sum);

	return 0;
}

