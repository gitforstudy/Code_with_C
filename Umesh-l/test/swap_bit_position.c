#include<stdio.h>
void main()
{
	int i,j,m,n,num,pos;
	
	printf("enter the number\n");
	scanf("%d",&num);
	
	printf("before print\n");
	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");

	for(i=0,j=31;i<j;i++,j--)
	{
		m=num>>i&1;
		n=num>>j&1;
		
		if(m!=n)
		{
			num=num^1<<i;
			num=num^1<<j;
		}
	}
	
	printf("after print\n");
	for(pos=31;pos>=0;pos--)
	printf("%d",num>>pos&1);
	printf("\n");
}
