// program to check whether an array is a subset of the array

#include<stdio.h>

int main(void)
{
	int size1,size2,j, i;
	printf("enter the size of arrays:");
	scanf("%d %d",&size1,&size2);
	int arr[size1],barr[size2];
	for(i =0; i< size1; i++) {
		scanf("%d",&arr[i]);
	}
	for(i =0; i< size2; i++) {
                scanf("%d",&barr[i]);
        }
	if(size2 > size1) {
		printf("not subset");
	}
	for(i =0; i < size2;i++) {
		for(j = 0; j < size1;j++) {
			if(arr[i] == arr[j]) {
				break;
			}
		}
		if (j = size1){
			printf("NOT A SUBSET\n");
		}
	}

	return 0;
}
