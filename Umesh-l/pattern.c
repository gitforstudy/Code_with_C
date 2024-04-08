#include<stdio.h>
void main()
{
	int i,j,num;
	printf("enter the number\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)//first loop is for printing the rows
	{
		for(j=1;j<=i;j++)//loop for printing * character
		{
			printf("* ");
		}
	printf("\n");
	}
}
