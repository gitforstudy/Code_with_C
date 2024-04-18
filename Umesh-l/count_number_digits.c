//WAP to count the number of digits
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)//command line argumnet
{
	if(argc!=2)//check argumnet
	{
		printf("Usage:./a.out add_number1 add_number2\n");
		return 0;
	}
	int num,i,c=0;
	num=atoi(argv[1]);//convert into decimal
	
	while(num)//rotating loop till become 0
	{
		c++;//count number 
		num=num/10;//division with 10
	}
	printf("count the number of digit = %d\n",c);
}

