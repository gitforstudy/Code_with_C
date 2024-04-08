#include<stdio.h>
void main()
{
	int i,j,k,l,num;
	printf("enter the number\n");
	

	for(i=1;i<=5;i++)//first loop to print all rows
	{
		for(j=1;j<=i;j++)//loop for printing * character
		{
			if(j!=5)// 5 row not printing 
			printf("*");
		}
		for(k=9-2*i;k>=1;k--)//inner loop 1 to print spaces
		{
			printf(" ");
		}
		for(l=1;l<=i;l++)//loop for printing * character
		{
			printf("*");
		}
	printf("\n");
	}
}
