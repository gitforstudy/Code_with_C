#include<stdio.h>
#include<stdlib.h>
/*reverse the array of interger data 
like 10 20 30 40 50 60 70 80 90 100
 reverse
    100 90 80 70 60 50 40 30 20 10
*/
void reverse_array(int *,int);//reverse of array function definetion 
int main(int argc,char **argv)//commnad line
{
	int a[11],i,j,ele;

	for(i=1;i<argc;i++)
	{
		a[i]=atoi(argv[i]);//argument store in array 
	}

	printf("before reverse array\n");	
	for(i=1;i<argc;i++)//
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	reverse_array(a,argc);//call to reverse_array functon
	
	printf("after reverse array\n");
	for(i=1;i<argc;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void reverse_array(int *p,int ele)
{
	int i,j,temp;

	for(i=0,j=ele;i<j;i++,j--)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
}
	

