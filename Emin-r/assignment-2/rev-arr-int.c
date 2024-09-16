/* Program to reverse an integer array */
#include<stdio.h>

int array_rev(int a[],int size)
{
	int i,j;
	for(i=0,j=size-1;i<size/2;i++,j--){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}

void print_array(int a[],int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",a[i]);
	printf("\n");	
}

int main()
{
	int size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	
	int a[size];
	
	printf("Enter %d array elements : \n",size);
	for(int i=0;i<size;i++)
		scanf("%d",&a[i]);	
	
	array_rev(a,size);
	printf("Array after reversing : \n");
	print_array(a,size); 
	
	return 0;
}
