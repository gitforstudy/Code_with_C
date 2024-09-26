#include<stdio.h>

int main()
{
	int a[] = {1,2,3,3,4,5,3,2,1};
	int k,i,j;
	printf("How many elements in the array (0 - k) you want to check for duplicates?. Enter k :\n");
	scanf("%d",&k);
	
	for(i=0;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(a[i]==a[j])
				break;
		}
		printf("Duplicate of %d found at %d position\n",a[i],i+1);
	}
	
	return 0;
}
