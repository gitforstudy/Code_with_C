#include<stdio.h>
void main()
{
	int num1=4,num2,sum=0;
	
	printf("enter the number\n");
	scanf("%d",&num2);


	while(num2)
	{
		if(num2 & 1)
		{
			sum=sum+num1;
		}
	num1<<=1;
	num2>>=1;
	}
	
	printf("multiple = %d\n",sum);
}
