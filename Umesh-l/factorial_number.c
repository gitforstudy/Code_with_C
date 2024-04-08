#include<stdio.h>
#include<stdlib.h>
//WAP to print factorial number of given number
int main(int argc,char **argv)//command line argument
{
	if(argc!=2)//check argumnet
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}
	
	int num,fact=1,i;
	num=atoi(argv[1]);//convert into decimal
	
	for(i=1;i<=num;i++)//rotate loop 
	{
		fact=fact*i;//muptiple 
	}
	printf("factorial number = %d\n",fact);
}
