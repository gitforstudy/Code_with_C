#include<stdio.h>
int main()
{
	int a[11]={1,2,2,3,3,4,4,6,8,9,9};
	for(int i=0;i<11;i++)
	{
		 int count =0;
		for(int j=0;j<11;j++)
		{
			if(a[i]==a[j]){
				count++;
			}
		}
		if(count==1){
			printf("%d",a[i]);
		}
		
	}
}

