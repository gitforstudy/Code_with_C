#include<stdio.h>
void main()
{
	int num,sum=0,r;
	printf("enter the number\n");
	scanf("%d",&num);

	while(num)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("sum=%d\n",sum);
}
