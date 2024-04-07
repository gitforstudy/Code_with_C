//WAP to find the greatest common divisor (GCD) of two numbers using loops
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	int num1,num2,gcd,i;
	num1=atoi(argv[1]);
	num2=atoi(argv[2]);

	printf("greatest common divisor number = ");
	for(i=1;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
		
		}
	}
	printf("%d\n",gcd);
}
