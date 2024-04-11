#include<stdio.h>
int main()
{
	static int k,j;
	int a=375;
	int m=a;
	while(a)
	{
		j=a%10;
		k=k+j*j*j;
		a=a/10;
	}
	if (k==m){
	
		printf("armstrong");
	}
	
	else
		printf("not a armstrng");

}
