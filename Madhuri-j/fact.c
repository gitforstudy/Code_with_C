//C program to find the factorial of a number
#include <stdio.h>
int main(void)
{
	int fact = 1, i, num;
	printf("Enter the number: ");//asking the user to give input as positive integer
	scanf("%d", &num);//reading input from the user
	for(i = 1; i <= num ; i++) { //loop is executed until the condition fails
		fact = fact * i;////finding the factorial of the given i 
	}
	printf("The factorial of %d is %d\n", num, fact);//display the factorial of a given number
	return 0;
}
