/* Write a program to print the first n Fibonacci numbers.*/

#include<stdio.h>
int main()
{

	int p=1;// Previous Fibonacci number
	int c=1;// current Fibonacci number
	int f,temp,i,n;

	printf("Enter the number of Fibonacci numbers to print: ");// Input the number of Fibonacci numbers to print
	scanf("%d", &n);

	printf("%d  %d  ",p,c);// Print the first two Fibonacci numbers

	for(i=3;i<=n;i++)
	{

		f=p+c;// Calculate the next Fibonacci number

		printf("%d  ",f);// Print the next Fibonacci number

		temp=f;
		f=c;
		c=temp;
		p=f;
	}
	printf("\n");
}
