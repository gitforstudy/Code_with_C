#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("Usage:./a.out number1 to number2 \n");
		return 0;
	}
	int i,sum=0,num1;
	num1=atoi(argv[1]);
	if(num1%2)
	{
		num1=num1+1;
	}
	
	for(i=num1;i<=atoi(argv[2]);i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
			
		}
	}
	printf("sum of number = %d\n",sum);
}
	
