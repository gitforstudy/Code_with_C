#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	int num1,num2,result=1,i;
	num1=atoi(argv[1]);
	num2=atoi(argv[2]);
	
	
	for(i=1;i<=num2;i++)
	{
		result=result*num1;//power = base number X exponemt number
	}
	printf("result=%d\n",result);
}
