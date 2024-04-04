#include<stdio.h>
void main()
{
	int n1,n2,n;
	printf("enter the number\n");
	scanf("%d%d",&n1,&n2);
	
	n=(n1>n2) ? n1 :n2;

	//printf("num=%d",n);
	while(1)
	{
		if(n%n1==0 && n%n2==0)
		{
			printf("LCM=%d\n",n);
			break;
		}
	n++;
	}
	

}	

