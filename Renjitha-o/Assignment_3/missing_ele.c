//program to find missing elements in an array

#include<stdio.h>

int main(void)
{
	int size;
	printf("enter the size of the array:\n");
	scanf("%d",&size);
	int arr[size];
	for(int i = 0; i < size; i++) {
		scanf("%d",&arr[i]);
	}
	int low,upper;
	printf("enter the ranges:");
	scanf("%d %d",&low,&upper);
	for (int i = low; i <= upper; i++) {
		int found = 0;
        	for (int j = 0; j < size; j++) {
            		if (arr[j] == i) {
                		found = 1;
                		break;
            		}
        	}
		if (!found) {
			printf("%d",i);
		}
	}
	return 0;
}
