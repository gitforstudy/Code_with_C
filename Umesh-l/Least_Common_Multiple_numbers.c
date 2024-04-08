// WAP Least Common Multiple (LCM) of two numbers using loops
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)//command line argument
{
	if(argc!=3)//cheking argument
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	int num1,num2,i,n;
	num1=atoi(argv[1]);//convert into decimal using atoi function
	num2=atoi(argv[2]);//convert into decimal using atoi functioni
	
	n=(num1>num2)?num1:num2;// n variable holds the max divisible number between num1 and num2.
	
	//smallest positive number that is completely divisible by both integer's num1 and num2,
	while(1)
	{
		if(n%num1==0 && n%num2==0)//check whether divisible by both positive number num1 and num2.
		{
			printf("LCM = %d\n",n);//print the Least Common Multiple number
			break;
		}
	n++;// post-increment
	}
}
