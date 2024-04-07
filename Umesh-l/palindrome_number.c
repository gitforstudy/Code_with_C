// WAP to check whether the given number is palindrome or not
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}
	
	int num,temp,sum=0,r;
	num=atoi(argv[1]);
	temp=num;
	while(num)
	{
		r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
	if(sum==temp)
	{
		printf("palindrome number=%d\n",sum);
	}
	else
	{
		printf("not palindrome number\n");
	}
}
