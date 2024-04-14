#include<stdio.h>
int main()
{
	int arr[20],temp,n;
	printf("enter the no of elements:");
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("the array elements are:");
	for(int i=0;i<n;i++) {
		printf(" %d",arr[i]);
	}

	for(int i=0;i<n/2;i++) {
		temp =arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	printf("\nthe reversed array is:");
	for(int i=0;i<n;i++) {
		printf(" %d",arr[i]);
	}
}
