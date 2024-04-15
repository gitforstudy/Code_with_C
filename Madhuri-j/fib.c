//C program to find the fibonacci series
#include <stdio.h>
int main(void)
{
	int i = 0, fib, num;
	int j = i + 1;
	printf("Enter the number: ");//asking the user to enter some positive integer
	scanf("%d", &num);//reading input from the user
	printf("%d+%d+", i , j);
	for(i = 0; i < num; ) {//loop executes until the condition fails
		fib = i + j;//adding i and j values
		i = j;//storing j to i
		j = fib;//storing fib to j
		printf("%d+",fib);//printing the fibonacci series
	}
	printf("\n");
	return 0;
}
