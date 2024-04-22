// program to find sum of array elements using recursion

#include<stdio.h>
int sum = 0,i = 0;
int sum_arr(int arr[],int length) {
	//int sum = 0;
	int size = length;
	//int length = sizeof(arr)/sizeof(arr[0]);
	if ( i < size) {
		sum = sum + (arr[i]);
		i++;
		sum_arr(arr,size);
	}
	return sum;
}
int main(void)
{
	int arr[4] = {2,1,5,3};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sum_arr(arr,length));
	return 0;
}
