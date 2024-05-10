//Program to find unique number in an array.
#include<stdio.h>

int main()
{
	int a[]={3,3,3,1,2,2,6,6,6,6};
	
	for(int i=0;i<10;i++){
	int count=0;
		for(int j=0;j<10;j++){
		
			if(a[i]==a[j])
				count++;
		}
		if(count==1)
			printf("%d\n",a[i]);
	}			
	
	return 0;
}
