#include<stdio.h>

int main()
{
	int a[] = {1,2,3,4,3,5,6,7,7,8,9};
	int i,j;
	int size=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(a[i]==a[j]){
				for(int k=j;k<size;k++)
					a[k]=a[k+1];
				size--;
			}	
		}
	}
	
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	printf("\n");	
	
	return 0;
}
