//WAP to find the greatest common divisor (GCD) of two numbers using loops
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)//command line argument
{
	if(argc!=3)//check argument
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	int num1,num2,gcd,i;
	num1=atoi(argv[1]);//convert into decimal
	num2=atoi(argv[2]);//convert into decimal

	printf("greatest common divisor number = ");
	for(i=1;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;// if num1 and num2 is completely divisible by i, the divisible number will be the GCD  

		}
	}
	printf("%d\n",gcd);//print  greatest common divisor number
}
