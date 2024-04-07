//WAP to count the number of digits
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	int num,i,c=0;
	num=atoi(argv[1]);
	
	while(num)
	{
		c++;
		num=num/10;
	}
	printf("count the number of digit = %d\n",c);
}

