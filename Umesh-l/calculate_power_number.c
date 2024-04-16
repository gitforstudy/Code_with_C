//WAP to calculate the power of a number using loops
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)//command line argument
{
	if(argc!=3)//check the argumnet
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	int num1,num2,result=1,i;
	num1=atoi(argv[1]);//convert into decimal
	num2=atoi(argv[2]);//convert into decimal
	
	//if in case  num1=2 and num2=3
	// so 2 is the base number
	// 3 is the exponent
	//so power equal to 2*2*2 like that
	for(i=1;i<=num2;i++)//rotate loop up to num2
	{
		result=result*num1;//multiple with base number upto exponemt number
	}
	printf("result=%d\n",result);//print calculate the power number
}
	
