#include<stdio.h>
#include<stdlib.h>
// insert a new element in array in a give position
void main()
{
	int a[10]={1,2,3,4};
	int ele,i,j,pos,num;
	ele=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<ele;i++)//print the array
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	printf("enter the position\n");
	scanf("%d",&pos);
		
	printf("enter the number\n");
	scanf("%d",&num);

	for(i=ele-1;i>=pos;i--)// stop loop in positon
	{
		a[i]=a[i-1];//moving one positon 
	}
	a[pos]=num;//add value in specific positon 
	
	
	for(i=0;i<ele;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
