// WAP to check whether the given number is palindrome or not
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)//command line argumnet
{
	if(argc!=2)//check argument
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}
	
	int num,temp,sum=0,r;
	num=atoi(argv[1]);//convert into decimal
	temp=num;//store in temporary varible
	while(num)//rotating loop till become 0
	{
		r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
	if(sum==temp)//compere
	{
		printf("palindrome number=%d\n",sum);
	}
	else
	{
		printf("not palindrome number\n");
	}
}
