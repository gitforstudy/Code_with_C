// WAP to check whether the given number is prime or not
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)//command line argument
{
	if(argc!=2)//check argument
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}

	int num,i;
	num=atoi(argv[1]);//convert into decimal
	
	for(i=2;i<=num;i++)//iterate from 2 to num
	{
		if(num%i==0)// if num is perfectly divisible by i so break loop and
		{
			break;
		}
	}
	
	if(i==num)//check both are same or not
	{
		printf("this is prime number\n");
	}
	else
	{
		printf("not prime number\n");
	}
}
