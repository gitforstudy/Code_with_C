#include<stdio.h>
void main()
{
	int num,num2,result=1,i;
	printf("enter the base number and EXP number\n");
	scanf("%d%d",&num,&num2);

	for(i=1;i<=num2;i++)
	{
		result=result*num;
	}
	printf("result = %d\n",result);
}
