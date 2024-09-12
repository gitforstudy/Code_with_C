#include<stdio.h>

int main(void)
{
	int arr[] = {3,3,3,1,2,2,6,6,6,6};
	//int arr[] = {1,1,2,3,3,4,4};
	for(int i = 0; i < 10 ; i++) {
		int count = 0;
		for(int j = 0; j < 10; j++) {
			if(arr[i] == arr[j]) {
				count++;
			}
		}
		if(count == 1) {
			printf("%d",arr[i]);
		}
	}
	return 0;
}
