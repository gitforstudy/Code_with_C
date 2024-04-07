#include<stdio.h>
void main()
{
	int i,j,k,l,num;
	printf("enter the number\n");
	//scanf("%d",&num);

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j!=5)
			printf("*");
		}
		for(k=9-2*i;k>=1;k--)
		{
			printf(" ");
		}
		for(l=1;l<=i;l++)
		{
			printf("*");
		}
	printf("\n");
	}
}
