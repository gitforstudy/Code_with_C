#include<stdio.h>
void main()
{
	int i,j,k,l,num;
	printf("enter the number\n");
	scanf("%d",&num);	

	for(i=1;i<=num;i++)//first loop to print all rows
	{
		for(j=1;j<=i;j++)//loop for printing * character
		{
			if(j!=num)// 5 row not printing 
			printf("*");
		}
		for(k=((num-1)+num)-2*i;k>=1;k--)//inner loop 1 to print spaces
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
