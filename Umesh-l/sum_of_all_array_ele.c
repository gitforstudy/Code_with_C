#include<stdio.h>
#include<stdlib.h>
// sum of all the array elements
void reverse_array(int *,int);//reverse of array function definetion 
int main(int argc,char **argv)//commnad line
{
	int a[11],i,j,ele,sum=0;

	for(i=1;i<argc;i++)
	{
		a[i]=atoi(argv[i]);//argument store in array 
	}

	for(i=1;i<argc;i++)
	{
		sum=sum+a[i];
	}
	
	printf("sum of array elements = %d\n",sum);
}
