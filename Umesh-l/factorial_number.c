#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}
	
	int num,fact=1,i;
	num=atoi(argv[1]);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial number = %d\n",fact);
}
