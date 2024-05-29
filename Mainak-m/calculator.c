#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)//command line argument
{
	if(argc!=4)//check argument
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	int num1,num2,i,n;
	float result;
	num1=atoi(argv[1]);//convert into decimal
	num2=atoi(argv[3]);//convert into decimal
	
	switch(argv[2][0])
	{
		case '+':result = num1+num2;//Addition
			printf("result = %f\n",result);
			break;
		case '-':result = num1-num2;//Subtraction
			printf("result = %f\n",result);
			break;
		case '*':result = num1*num2;//Multiplication
			printf("result = %f\n",result);
			break;
		case '/':result = num1/num2;//Division
			printf("result = %f\n",result);
			break;
		default:printf("unknown operator");//if unknown operator select
			break;
				
	}
}
