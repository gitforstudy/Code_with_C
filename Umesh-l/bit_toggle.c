#include<stdio.h>
void main()
{
	int num,pos;
	printf("enter the number\n");
	scanf("%d",&num);
	
	printf("before toggle bit\n");
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
	}
	printf("\n");
	
	for(pos=31;pos>=0;pos--)
	{
		if(pos%2==0)
		{
			num=num^1<<pos;
		}
	}
	
	printf("after toggle bit\n");
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);
	}
	printf("\n");
}


