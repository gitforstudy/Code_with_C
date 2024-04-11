/*write a program to find the reverse of an integer.*/

#include<stdio.h>
int main()

{
	int n,i,r;
	printf("Entere the integer value:\n");
	scanf("%d",&n);
	
	if(n<=0)// Check if the number is negative
	{
		n=-n;
		printf("%d",n);
	}
	for(i=1;n!=0;i++)// Reverse the number
	{

		r=n%10;
		n=n/10;


		printf("%d",r);
	}
	printf("\n");
}

