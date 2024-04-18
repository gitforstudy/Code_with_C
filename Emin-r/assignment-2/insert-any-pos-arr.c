// insert a new element in array in a given position

#include <stdio.h>
int main()
{
	int arr[]={1,8,6,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int pos,ele;
	
	for(int i=0;i<size;i++)
		printf("%d\t",arr[i]);
		
	printf("\nEnter the position to insert new element:");
	scanf("%d",&pos);
	printf("\n");
	printf("Enter the element to insert at the given position:");
	scanf("%d",&ele);
	printf("\n");
	
	for(int i=size-1;i>=pos-1;i--)
		arr[i + 1] = arr[i];
	
	arr[pos-1]=ele;
	
	for(int i=0;i<size+1;i++) 
		printf("%d\t",arr[i]);
		
	return 0;
}
