//program to merge 2 array

#include <stdio.h>

int main(void)
{
	int size1,size2;
	printf("enter array size1:\n");
	scanf("%d",&size1);
	printf("enter array sizze2:\n");
	scanf("%d",&size2);
	int arr1[size1], arr2[size2];
	printf("enter array 1 elements:\n");
	for(int i = 0; i < size1; i++) {
		scanf("%d",&arr1[i]);
	}
	printf("enter array 2 elements:\n");
	for(int i = 0; i < size2; i++) {
		scanf("%d",&arr2[i]);
	}
	int pos;
	//printf("where we need to add array2 in array 1:\n");
	//scanf("%d",&pos);
	int size = size1 +size2;
	int arr[size];
	int i = 0,j = 0,k = 0;
	while(i < size1 && j < size2) {
		arr[k++] = arr1[i++];
		arr[k++] = arr2[j++];
	}
	while( i < size1) {
		arr[k++] = arr1[i++];
	}
	while (j < size2) {
		arr[k++] = arr2[j++];
	}
	printf("Merged Array:\n");
	for(int i = 0; i < size; i++) {
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	//return 0;
}
