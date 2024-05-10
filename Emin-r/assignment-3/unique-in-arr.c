#include<stdio.h>

int main()
{
	int a[7]={1,1,2,3,3,4,4};
	
	for(int i=0;i<7;i++){
	int count=0;
		for(int j=0;j<7;j++){
		
			if(a[i]==a[j])
				count++;
		}
		if(count==1)
			printf("%d\n",a[i]);
	}			
	
	return 0;
}
