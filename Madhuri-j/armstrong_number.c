//C program to find whether the given number is armstrong or not
#include <stdio.h>
int main(void)
{
	int num, num1, arm, sum = 0;
	printf("Enter the number: ");//asking the user to enter an positive integer
	scanf("%d", &num);//reading the input from the user
	num1 = num;
	while(num != 0) { //this loops performs until the number becomes zero
		arm = num % 10;//for the given input finding the reminder i.e., the last digit of the number
		sum = sum + (arm * arm * arm);//for the given input finding the cube value and adding to sum
		num = num / 10;//omits the last digit and gives the lest out digits
	}
	if(num1 == sum) { //condition to check whether the user number and armstrong number are same
		printf("%d is an armstrong number\n", num1);//if both are same will print it is armstrong number
	} else {
		printf("%d is not an armstrong number\n", num1);//if both are different will print it is not armstrong number.
	}
	return 0;
}
