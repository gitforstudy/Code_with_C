//program to find is there any duplicate element with in k distance from each other

#include<stdio.h>

int main(void)
{
	int size,k;
	printf("enter the size of array");
	scanf("%d",&size);
	int arr[size];
	for(int i = 0; i < size; i++) {
		scanf("%d",&arr[i]);
	}
	printf("enter the distance:");
	scanf("%d",&k);
	if(k > size) {
		printf("distance is greater than size of array\n");
	}
	for(int i = 0; i < k; i++) {
		if(arr[i] == arr[i + 1]) {
			printf("%d ", arr[i]);
			return 0;
		}
		/*else {
			printf("no duplicate elements\n");
				return 0;
		}*/
	}
	return 0;
}
