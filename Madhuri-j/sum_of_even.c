//C program to find the sum of even digits in an particular range
#include <stdio.h>
int main(void)
{
	int num, i, sum = 0;
	printf("Enter the Limit Number: ");//asking the user to give the limit range
	scanf("%d", &num);//reading the limit range from the user
	for(i = 1; i <= num; i++) {//loop to find the even numbers between the range
		if(i % 2 == 0) {//condition to check whether the given number is even or odd
			sum = sum + i;//if even adding the number to sum
		}
	}
	printf("The sum of even numbers is: %d\n", sum); //prints the sum of even number in an range
	return 0;
}
