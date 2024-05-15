#include<stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int d = a>>b & 1;
	int e = a>>c & 1;
	if(d != e)
	{
		int f=(1<<b)|(1<<c);
		a =a ^ f;
	}
	printf("%d",a);
}



	  
