#include<stdio.h>
#include<stdlib.h>
// insert a new element in array in a give position
void insert_element_in_array(int *,int ,int ,int );
int main(int argc,char **argv)//commnad line
{
	int i,j,pos,num,ele;
	int a[10];
//	ele=sizeof(a)/sizeof(a[0]);
	
	for(i=1;i<argc;i++){
		a[i]=atoi(argv[i]);//argument store in array 
	}
	printf("enter the position\n");
	scanf("%d",&pos);
		
	printf("enter the number\n");
	scanf("%d",&num);

	insert_element_in_array(a,argc,pos,num);

}
void insert_element_in_array(int *p,int ele,int pos,int num)
{
	int i;
	
	for(i=0;i<ele;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");

	for(i=ele-1;i>=pos;i--)// stop loop in positon
	{
		p[i]=p[i-1];//moving one positon 
	}
	p[pos]=num;//add value in specific positon 
	
	
	for(i=0;i<ele;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}
