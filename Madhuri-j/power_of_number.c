//C program to find the power of the number
#include <stdio.h>
int main(void)
{
	int i, num, power, temp = 1;
	printf("Enter the number: ");//asking user to give number to find its power
	scanf("%d", &num);//reading number from user
	printf("Enter the power number: ");//asking the user to give the power to find for the number
	scanf("%d", &power);//reading power number from the user
	for(i = 1; i <= power; i++) {//loop for eveluating the power of a number until the condition fails
		temp = num * temp;//evaluation of number to raise power
	}
	printf("The %d power of %d is: %d\n",num, power, temp);//printing the power of a number
	return 0;
}
