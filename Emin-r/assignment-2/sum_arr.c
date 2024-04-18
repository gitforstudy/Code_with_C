// Program to find the sum of all array elements


#include <stdio.h>

int arr_sum(int arr[],int size) 
{
	int sum 0;
	for(int i=0;i<size-1;i++)
		sum+=arr[i];
		
	return sum;
}
int main()
{
	int arr[]={5,6,23,9,11};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("Sum of array elements = %d\n",arr_sum(arr,size));
	
	return 0;
}
