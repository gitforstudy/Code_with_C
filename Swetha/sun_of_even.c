#include<stdio.h>
int main()
{
	int num,i,sum;
	printf("enter a number:");
	scanf("%d",&num);	        
	for(i=1;i<=num;i++)
	{
	if(i%2==0)
	{
	      sum=sum+i;
	}
	}
	printf("%d",num);
}
