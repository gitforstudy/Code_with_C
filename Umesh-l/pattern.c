#include<stdio.h>
void main()
{
	int i,j,num;
	printf("enter the number\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
	printf("\n");
	}
}
