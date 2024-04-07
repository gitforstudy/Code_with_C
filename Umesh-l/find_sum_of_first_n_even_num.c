#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out number \n");
		return 0;
	}
	int i,sum=0;
	for(i=1;i<=atoi(argv[1]);i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("sum of number = %d\n",sum);
}
	
