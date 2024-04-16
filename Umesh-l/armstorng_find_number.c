#include<stdio.h>
#include<stdlib.h>
// WAP to check given number is Armstrong no.
int count_digit(int);
int number_multiple(int ,int);
int main(int argc,char **argv)//command line argument
{
	if(argc!=2)//check argumnet
	{
		printf("Usage:./a.out atmstrongnumber\n");
		return 0;
	}
	int num,c,temp,sum=0,r,p;
	num=atoi(argv[1]);//convert into decimal
	temp=num;//store in temporery
	//count the digit	
	c=count_digit(num);
	
	while(num)//rotating loop till become 0
	{
		r=num%10;
		sum+=p=number_multiple(c,r);
		num=num/10;
	}
	//find the armstrong number
	if(sum==temp)//compere 
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
	while(num)//rotating looop till become 0
	{
		c++;//count the number
		num=num/10;
	}
	return c;//return count number
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
