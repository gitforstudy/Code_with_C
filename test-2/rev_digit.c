#include<stdio.h>
int rev(int n,int m){
	if (n==0)
		return m;
	else{
		return rev(n / 10, m * 10 + n % 10);
	
	//	rev=rev
	//	n=n*10;
	}
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=rev(a,0);
	printf("%d",b);
}
