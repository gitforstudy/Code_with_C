#include<stdio.h>
#include<stdlib.h>
#include"sel_sort.h"

int main(void)
{
	int n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++) {
		printf("enter the array[%d] elements:\n",i);
		scanf("%d",&arr[i]);
	}
	sel_sort(arr,n);
	printf("After Selection Sorting:\n");
	for(int i = 0; i < n; i++) {
		printf("arr[%d]:%d\t",i,arr[i]);
	}
	printf("\n");
	return 0;
}
