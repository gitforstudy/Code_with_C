// program to find sum of array elements
//

#include <stdio.h>

int sum_arr(int arr[],int size) 
{
	//int size = sizeof(arr)/sizeof(arr[0]);
	int sum = 0;
	for(int i = 0; i < (size - 1);i++) {
		sum += arr[i];
	}
	return sum;
}
void main (void)
{
	int arr[] = {5,10,15,7,20};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("sum of array elements :%d",sum_arr(arr,size));
}
