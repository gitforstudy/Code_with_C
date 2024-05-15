#include<stdio.h>
int main()
{
	int d,e,j=0, a[6]={1,12,2,3,4,5},b[5]={6,7,8,9,10},c[10];
	d=sizeof(a);
	e=sizeof(b);
	if(d==e){
	for(int i=0;i<5;i++)
	{
	
		c[j++]=a[i];
		c[j++]=b[i];
		//i++;
		
	}
	
	for(int i=0;i<10;i++){
		printf("%d",c[i]);
	}
	}
}

	
