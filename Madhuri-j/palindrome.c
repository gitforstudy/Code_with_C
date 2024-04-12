//C program to find whether the given number is palindrome or not
#include <stdio.h>
int main(void)
{
	int num, rev = 0, rem, temp;
	printf("Enter the number: ");//asking the user to give some positive integer input
	scanf("%d", &num);//reading the input from the user
	temp = num;//storing the input to temp variable
	while(num != 0) {//loop executed until the condition fails
		rem = num % 10;//finding the last digit of a number
		rev = rev * 10 + rem;//storing the digit to reverse variable
		num = num / 10;//omits the last digit and displays the previous left out digits
	}

	if(temp == rev) {//comparing the temp number and reverse number
		printf("Number %d is palindrome\n", temp);//if both are same prints it is palindrome
	} else {
		printf("Number %d is not a palindrome\n", temp);//if both are not same prints it is not palindrome
	}
	return 0;
}
