#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
	if(argc!=2)//check argumnet
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}
	
	int num,sum=0,r;
	num=atoi(argv[1]);//convert into decimal

	while(num)//rotating loop till become 0
	{
		r=num%10;//number module with 10
		sum=sum*10+r;
		num=num/10;//number division with 10
	}
	
	printf("reverse number=%d\n",sum);
}
