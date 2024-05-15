#include<stdio.h>
void main()
{
	int a[10], i, j,k;
	int ele=sizeof(a)/sizeof(a[0]);

	printf("enter the number of element\n");
	for(i=0;i<ele;i++)
	{
		scanf("%d",&a[i]);
	}


	printf("befor array \n");
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");
	
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<ele;k++)
				{
					a[k]=a[k+1];
				}
				ele--;
			}
		}
	}
				
	printf("befor array \n");
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");
}
