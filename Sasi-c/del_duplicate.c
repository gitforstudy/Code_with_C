#include<stdio.h>
int main()
{
	int a[10] = {1,2,3,1,1,3,4,5,5,2};
	for(int i=0;i<10;i++)
	{
		int count =0;
		for(int j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				count++;	
			}
		}
			if(count == 0){
				printf("%d",a[i]);
			}
		
	}
}
