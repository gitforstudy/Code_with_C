// WAP Least Common Multiple (LCM) of two numbers using loops
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	int num1,num2,i,n;
	num1=atoi(argv[1]);
	num2=atoi(argv[2]);
	
	n=(num1>num2)?num1:num2;
	
	while(1)
	{
		if(n%num1==0 && n%num2==0)
		{
			printf("LCM = %d\n",n);
			break;
		}
	n++;
	}
}
