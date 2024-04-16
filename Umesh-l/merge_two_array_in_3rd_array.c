#include<stdio.h>
void main()
{
	int a[5],b[5],c[10],i,j;
	int ele_1,ele_2,ele_3;
	ele_1=sizeof(a)/sizeof(a[0]);
	ele_2=sizeof(b)/sizeof(b[0]);
	ele_3=sizeof(c)/sizeof(c[0]);
	
	printf("enter the first element\n");
	for(i=0;i<ele_1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the second element\n");
	for(i=0;i<ele_2;i++)
	{
		scanf("%d",&b[i]);
	}

	for(i=0,j=0;i<ele_1 && i<ele_2;i++)
	{
		c[j++]=a[i];
		c[j++]=b[i];
	}
	
	for(i=0;i<ele_3;i++)
	{
		printf("%d",c[i]);
	}
	printf("\n");
}
