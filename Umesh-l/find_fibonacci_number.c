#include<stdio.h>
#include<stdlib.h>
//WAP to generate and print first n Fibonacci numbers
int main(int argc,char **argv)//command line argument
{
	if(argc!=2)//checking agrument
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}
	int num,a=0,b=1,c,i;
	num=atoi(argv[1]);//convert into decimal
		
	printf("fibonacci number :");
	for(i=0;i<=num;i++)//rotate loop upto number
	{	
		c=a+b; 
		printf("%d ",c);
		a=b;
		b=c;
	}
}
	
	

