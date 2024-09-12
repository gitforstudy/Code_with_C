//program to get unique element in an array

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int arr[] = {1,1,2,3,3,4,4};
	int visit = 0;
	int size = sizeof(arr)/sizeof(arr[0]);
	int barr[size];
	for(int i = 0; i < size; i++){
		int count = 1;
		for(int j = i+1; j < size; j++){
			if(arr[i] == arr[j]){
				count++;
				barr[j] = visit;
			}
		}
		if(barr[i] != visit) {
			barr[i] = count;
		}
	}
	for(int i = 0; i < size;i++) {
		//	if(barr[i] == 1) {
				printf("%d",barr[i]);
		//	}
	}
	/*for(int i = 0; i < size;i++) {
		for(int j = 0; j < size; j++) {
			if(arr[j] == arr[j + 1]) {
				continue;
			}else {
				printf("%d",arr[j]);
			}
		}
	}*/
	return 0;
}
