/* Program to reverse a character array */
#include<stdio.h>

int array_rev(char a[],int size)
{
	int i,j;
	for(i=0,j=size-1;i<size/2;i++,j--){
		char temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}

void print_array(char a[],int size)
{
	for(int i=0;i<size;i++)
		printf("%c ",a[i]);
	printf("\n");	
}

int main()
{
	int size;
	printf("Enter the size of the character array\n");
	scanf("%d",&size);
	
	char a[size];
	
	printf("Enter %d array elements : \n",size);
	for(int i=0;i<size;i++)
		scanf(" %c",&a[i]);
		
	print_array(a,size);		
	
	array_rev(a,size);
	printf("Array after reversing : \n");
	print_array(a,size); 
	
	return 0;
}
