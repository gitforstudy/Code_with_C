#include<stdio.h>
#include<stdlib.h>
// WAP sum of digits of a given integer
int main(int argc,char **argv)//using command line arugment
{
	//check it is proper aurgument given 
	if(argc!=2)
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}
	
	int num,sum=0,r;

	num=atoi(argv[1]);//convert into decimal(string to interger)
	
	//sum of digit 
	while(num)//rotating loop till become 0
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	
	printf("sum of digit number=%d\n",sum);//print sum of digit number
}
