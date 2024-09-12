#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	float num1,num2,i,n,result;
	num1=atoi(argv[1]);
	num2=atoi(argv[3]);
	
	switch(argv[2][0])
	{
		case '+':result = num1+num2;
			printf("result = %f\n",result);
			break;
		case '-':result = num1-num2;
			printf("result = %f\n",result);
			break;
		case '*':result = num1*num2;
			printf("result = %f\n",result);
			break;
		case '/':result = num1/num2;
			printf("result = %f\n",result);
			break;
		default:printf("Not a valid Operator");
			break;
				
	}
}
