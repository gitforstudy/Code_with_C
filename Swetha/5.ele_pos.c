#include<stdio.h>
int main()
{
	int a[20]={11,33,55,66,77,21,43,98,54,11};
	int i,pos,x,n;
	n=sizeof(a)/sizeof(a[0]);
	printf("enter at which pos:");
	scanf("%d",&pos);
	x = 50;   //the element should be inserted

	n++; // Increase the array size

	                               // Shift elements to make space for the new element
	for (i = n - 1; i >= pos; i--)
		a[i] = a[i - 1];

	// Insert the element at the specified position
	a[pos - 1] = x;
	for(i=0;a[i];i++) {
		printf(" %d",a[i]);
	}
}
