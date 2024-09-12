// program to delete duplicate elements in an array

#include <stdio.h>
void main(void)
{
	int arr[] = {4,5,6,2,1,1,3,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int barr[10],j = 0;
	printf ("array before deleting duplicate elements");
	for (int i = 0; i < size; i++) {
                printf("arr[%d] :%d\n",i,arr[i]);
        }
	for (int i = 0; i < size - 1;i++) {
		if (arr[i] != arr[i + 1]) {
			barr[j] = arr[i];
			j++;
		}
		//barr[j++] = arr[ size - 1];
				
	}
	for (int i = 0; i < j; i++) {
		arr[i] = barr[i];
	}
	printf ("%d\n",size);
	for (int i = 0; i < j; i++) {
		printf("arr[%d] :%d\n",i,arr[i]);
	}
}
