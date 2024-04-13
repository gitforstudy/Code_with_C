#include<stdio.h>
int main()
{
	int a[10];
	printf("enter the array elements:");
	for(int i=0;i<10;i++) {
	scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++) {
	printf("%d\n",a[i]);
	}
}
