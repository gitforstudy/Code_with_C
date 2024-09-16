// insert a new element  in array in a given position

#include <stdio.h>
int main(void)
{
	int arr[] = {1,8,6,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int pos,ele;
	printf("enter the position to insert new element:");
	scanf("%d",&pos);
	printf("\n");
	printf("enter the element to insert at the given position:");
	scanf("%d",&ele);
	printf("\n");
	for (int i = size - 1; i >= pos; i--) {
		arr[i + 1] = arr[i];
	}
	arr[pos] = ele;
	for (int i = 0; i < size + 1 ; i++) {
		printf("arr[%d] :%d",i,arr[i]);
	}
	return 0;
}
