#include<stdio.h>
int main()
{
	int a[20]={19,22,10,8,11,2,5,1,9,99.9};
	int i,size,Max=a[0],secondMax=a[1];
	size=sizeof(a)/sizeof(a[0]);
	for(i=1;i<size;i++) {
		if(a[i]>Max) 
		{
			secondMax=Max;
			Max=a[i];
	}else if (a[i] > secondMax && a[i] != Max) {
            secondMax = a[i]; // Update secondMax if the current element is greater than the current secondMax
	}
	}
	printf("the second largest element is %d\n",secondMax);
	printf("the first lagest element is :%d\n",Max);
}
