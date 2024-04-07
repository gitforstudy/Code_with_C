#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out add_number\n");
		return 0;
	}
	int num,a=0,b=1,c,i;
	num=atoi(argv[1]);
		
	printf("fibonacci number :");
	for(i=0;i<=num;i++)
	{	
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}
	
	

