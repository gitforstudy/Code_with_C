//right rotate an array
/*
   like array 1 2 3 4 5 6 7 8 9 10
   right rotate 2 time
           output will be
              8 9 10 1 2 3 4 5 6 7
   */
#include<stdio.h>
#include<stdlib.h>
void right_rotate_an_array(int *,int,int);
int main(int argc,char **argv)//commnad line
{
	int a[11],i,j,num;

	for(i=1;i<argc;i++){
		a[i]=atoi(argv[i]);//argument store in array 
	}
	
	printf("enter the number for how many time right rotate\n");
	scanf("%d",&num);

	right_rotate_an_array(a,argc,num);
}
void right_rotate_an_array(int *p,int ele,int num)
{
	int i,j,k,temp;

	for(i=1;i<=num;i++){//rotate the given array by n times toward right
		temp=p[ele-1];//stores the last element of the array
		for(j=ele-1;j>=1;j--){
			p[j]=p[j-1];////shift element of array by one
		}
		p[1]=temp; //last element of array will be added to the start of array.
	}
	
	for(i=1;i<ele;i++){
		printf("%d ",p[i]);
	}
	printf("\n");
}
