//C program to find the number of digits in a given number
#include <stdio.h>
int main(void)
{
	int num, rem, sum = 0;
	printf("Enter the number: ");//asking the user to give some positive integer digits
	scanf("%d", &num);//reading the input from the user
	while(num != 0) { //loop is executed till the number becomes zero
		rem = rem % 10;//to find the last digit of a number or remainder of a number
		sum++;//sum incremented
		num = num / 10;//omits the last digit from the number and takes the previous rest out digits
	}
	printf("The number of digits are: %d\n", sum);//displays the number of digits present in an number
	return 0;
}
