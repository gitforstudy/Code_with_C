#include<stdio.h>
void main()
{
	int i,j,k,num,c=1;
	printf("enter the number\n");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		for(k=0;k<=num-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0 || j==0)
			{
				c=1;
			}
			else
			{
				c=c*(i-j+1)/j;
			}
			printf("%d ",c);
		}
	printf("\n");
	}
	
}
	
