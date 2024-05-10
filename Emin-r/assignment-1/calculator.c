#include<stdio.h>
#include<stdlib.h>

int main (int argc, char **argv)
{
	if(argc!=4)
	{
		printf("Usage:./a.out number1 (Operator) number2\n");
		return 0;
	}
	float num1, num2, i, n, result;
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	char ch = *argv[2];	
	switch(ch)
	{
		case '+':result = num1+num2;
			printf("%f %c %f = %.2f \n",num1,ch,num2,result);
			break;
		case '-':result = num1-num2;
			printf("%f %c %f = %.2f \n",num1,ch,num2,result);
			break;
		case '*':result = num1*num2;
			printf("%f %c %f = %.2f \n",num1,ch,num2,result);
			break;
		case '/':result = num1/num2;
			printf("%f %c %f = %.2f \n",num1,ch,num2,result);
			break;
		case '%': 
			result = num1%num2;  
			printf("%d %c %d = %.2f \n",num1,ch,num2,result);
			break;	
		default:printf("Not a valid Operator\n");	
	}
}
