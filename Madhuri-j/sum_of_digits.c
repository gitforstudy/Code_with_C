//C program to print the sum of digits
#include <stdio.h>
int main(void)
{
	int num, temp, sum = 0, rem;
	printf("Enter the number: ");//asking for positive integer from the user
	scanf("%d", &num);//reading number from the user
	temp = num;//storing num to temp variable
	while(num != 0) {//loop executes until the condition fails
		rem = num % 10;//finding the last digit of number
		sum = sum + rem;//finding the sum of last digit and storing to sum
		num = num / 10;//omit the last digit and gets the previous left out digit
	}
	printf("The total sum of %d is %d\n", temp, sum);//prints the sum of digits
	return 0;
}
