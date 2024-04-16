//left rotate an array
/*
like array 1 2 3 4 5 6 7 8 9 10
left rotate 2 time
	output will be
	   4 5 6 7 8 9 10 1 2 3
*/
#include<stdio.h>
#include<stdlib.h>
void left_rotate_an_array(int *,int,int);
int main(int argc,char **argv)//commnad line
{
	int a[11],i,j,ele,num;

	for(i=1;i<argc;i++){
		a[i]=atoi(argv[i]);//argument store in array 
	}

	printf("enter the number for how many time right rotate\n");
	scanf("%d",&num);
	
	left_rotate_an_array(a,argc,num);//call to function definition
	
}
void left_rotate_an_array(int *p,int ele,int num)
{
	int i,j,temp;

	printf("before left rotate an array:");
	for(i=1;i<ele;i++){
		printf("%d ",p[i]);
	}
	printf("\n");

	for(i=1;i<=num;i++){//rotate the given array by n times toward left	
		temp=p[1];//stores the first element of the array
		for(j=1;j<ele-1;j++){
			p[j]=p[j+1];//shift element of array by one
		}
		p[j]=temp;//first element of array will be added to the end	
	}
	printf("left side rotate an array:");
	for(i=1;i<ele;i++){
		printf("%d ",p[i]);
	}
	printf("\n");
}
