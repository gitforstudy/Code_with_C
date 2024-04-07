// WAP to check whether the given number is prime or not
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}

	int num,i;
	num=atoi(argv[1]);
	
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			break;
		}
	}
	if(i==num)
	{
		printf("this is prime number\n");
	}
	else
	{
		printf("not prime number\n");
	}
	}
