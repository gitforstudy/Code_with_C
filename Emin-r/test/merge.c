#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5},i,j=0;;
	int b[5]={6,7,8,9,0},c[10];
		
	int a_size = sizeof(a)/sizeof(a[0]);
	int b_size = sizeof(b)/sizeof(b[0]);
	int c_size = sizeof(c)/sizeof(c[0]);
	
	for(i=0;i<a_size && i<b_size;i++){
			
		c[j++]=a[i];
		c[j++]=b[i];		
	}
	
	for(i=0;i<c_size;i++)
		printf("%d ",c[i]);
	printf("\n");	
		
	return 0;
	
}
