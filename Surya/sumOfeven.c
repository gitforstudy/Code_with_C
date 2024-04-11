#include<stdio.h>
	void SumEven()
	{
	int s=0,n,i;
	printf("Enter N Value\n");
        scanf("%d",&n);
	for ( i = 0; i <= n; i++)
	{
	if(i%2==0)
	{
	s += i;
        }
	}
	printf("%d\n",s);
	}
       int main()
       {	
        SumEven();
	return 0;
       }	         

