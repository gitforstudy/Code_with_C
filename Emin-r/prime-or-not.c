#include<stdio.h>
int main()
{
	int n,count=0,i;
	printf("Enter a number to find if it's a prime number: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	        if(n%i==0)
	        count++;
	}           
	if(count==2)
		printf("It is a prime number\n");
	else
		printf("It is not a prime number\n");
	
	return 0;
}	
