//Cprogram to find whether a number is prime or not
#include <stdio.h>
int main(void)
{
	int num, i, temp = 0;
	printf("Enter the number: ");//asking the user to enter an positive number
	scanf("%d", &num);//reading the number
	for(i = 2; i <= num/2; i++) {//loop for evaluating the prime or not
		if(num % i == 0) {//condition to check whether even or not
			temp++;
			break;
		}
	}
	if(temp == 0 && num != 1) {//anding with temp and the number
		printf("%d is a Prime number\n", num);//if condition true it is prime number
	} else {
		printf("%d is not a Prime number\n", num);//if condition fails it is not prime number
	}
	return 0;
}
