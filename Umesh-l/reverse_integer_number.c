// WAP to reverse a given integer
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}
	
	int num,sum=0,r;
	num=atoi(argv[1]);

	while(num)
	{
		r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
	printf("reverse number=%d\n",sum);
}
