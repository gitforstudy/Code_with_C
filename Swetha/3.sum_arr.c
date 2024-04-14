#include<stdio.h>
int main()
{
	int arr[20],i,n,sum=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("the elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("the sum of array is:");
	for(i=0;i<n;i++) {
		sum=sum+arr[i];
	}
	printf("%d",sum);
}
