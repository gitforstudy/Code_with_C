//C program to find reverse of a number
#include <stdio.h>
int main(void)
{
	int num, temp, rev = 0, rem;
	printf("Enter the number: ");//asking the user to give some positive integer to reverse
	scanf("%d", &num);//reading input from the user
	temp = num;//storing number to temp
	while(num != 0) {//loop executes till the number is not equal to 0
		rem = num % 10;//to find the last digit of a number
		rev = rev * 10 + rem;//to store the last digit in rev variable
		num = num / 10;//omits the last digit and returns the previous left out digits
	}
	printf("The reverse number of %d is %d\n", temp, rev);//prints the reverse of a number
	return 0;
}
