#include<stdio.h>
#include<stdlib.h>
int count_digit(int);
int number_multiple(int ,int);
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out atmstrongnumber\n");
		return 0;
	}
	int num,c,temp,sum=0,r,p;
	num=atoi(argv[1]);
	temp=num;
	//count the digit	
	c=count_digit(num);
	
	while(num)
	{
		r=num%10;
		sum+=p=number_multiple(c,r);
		num=num/10;
	}
	//find the armstrong number
	if(sum==temp)
	{
		printf("this is armstrong number = %d\n",sum);
	}
	else
	{
		printf("not armstrong number\n");
	}
}	
//count the digit
int count_digit(int num)
{
	int c=0;
	while(num)
	{
		c++;
		num=num/10;
	}
	return c;
}
int number_multiple(int count,int r)
{	
	int sum=1,i;
	for(i=1;i<=count;i++)
	{
		sum=sum*r;
	}
	return sum;
}
